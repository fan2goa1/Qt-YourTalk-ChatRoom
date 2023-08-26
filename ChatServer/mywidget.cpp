#include "mywidget.h"
#include "ui_mywidget.h"
#include <QCryptographicHash>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
     ui->setupUi(this);

     //建立通信
     m_tcpServer = new TcpServer();
     //选择监听的Ip和端口号
     m_tcpServer->listen(QHostAddress::Any, 8899);

     //从服务器接收客户端连接、断开连接信号并执行对应槽函数
     connect(m_tcpServer,&TcpServer::sig_connect,this,&MyWidget::slot_connect);
     connect(m_tcpServer,SIGNAL(sig_disconnect(int)),this,SLOT(slot_disconnect(int)));

     //从客户端接收数据并进入slot_readData函数处理数据
     connect(m_tcpServer,SIGNAL(sig_readyRead(int,QByteArray)),this,SLOT(slot_readData(int,QByteArray)));

     //计时器到时后传输文件给客户端，防止黏包
     connect(&timer,&QTimer::timeout,[=](){
         //终止计时
         timer.stop();
         qDebug()<<"定时器中止";
         //调用sendfiletoId函数发送文件给receiver客户端
         sendfiletoId();
     });

     //连接数据库
     db=QSqlDatabase::addDatabase("QSQLITE");//添加SQLite驱动
     db.setHostName("127.0.0.1");//设置数据库主机名
     db.setUserName("root");//设置数据库用户名
     db.setPassword("root");//设置数据库密码
     db.setDatabaseName("MyDatabase.db");//设置数据库名

     //打开数据库
     db.open();

     //创建基本表regster,groups,onlineclient,friends,allmessage
     QSqlQuery query;
     QString cmd_1=QString("create table groups(groupname varchar(255), managername varchar(255), membername varchar(255))");
     query.exec(cmd_1);
     QString cmd_2=QString("create table regster(id varchar(255) primary key, password varchar(255), headphotonumber varchar(255))");
     query.exec(cmd_2);
     QString cmd_3=QString("create table onlineclient(handle int, id varchar(255))");
     query.exec(cmd_3);
     QString cmd_4=QString("create table friends(id_1 varchar(255),id_2 varchar(255))");
     query.exec(cmd_4);
     QString cmd_5=QString("create table allmessage(sender varchar(255), receiver varchar(255),message varchar(255),time varchar(255) )");
     query.exec(cmd_5);
}

MyWidget::~MyWidget()
{
    delete ui;
}

//客户端连接后执行槽函数slot_connect
void MyWidget::slot_connect(int handle, QTcpSocket *socket)
{
    qDebug()<<handle<<" connect";
    //将信息插入m_socketMap
    m_socketMap.insert(handle, socket);

    //将信息插入m_filemap
    fileinfo* f1=new fileinfo();
    f1->istransporting=false;
    m_filemap.insert(handle,f1);
}

//客户端断开连接后执行槽函数slot_disconnect
void MyWidget::slot_disconnect(int handle)
{
    qDebug()<<handle<<" disconnect";
    //从m_socketMap、m_filemap移除信息
    m_socketMap.remove(handle);
    m_filemap.remove(handle);

    //将用户从在线用户中移除
    QSqlQuery query;
    QString str=QString("delete from onlineclient where handle=%1").arg(handle);
    query.exec(str);
}

//从客户端接收数据后进行数据处理
void MyWidget::slot_readData(int handle, const QByteArray &data)
{
    //建立数据库操作者
    QSqlQuery query;
    //将data变成QString类型
    QString str=QString(data);
    qDebug()<<"接受:"<<str;

    //客户端有文件需要传输，即继续传来文件内容
    if(m_filemap.value(handle)->istransporting==true)
    {
        //将收到的data写入服务器内创建的文件，并将数据长度赋给len
        int len=m_filemap.value(handle)->file->write(data);
        //将收到的数据大小len加给已收到的文件大小receivefilesize
        m_filemap.value(handle)->receivefilesize+=len;
        qDebug()<<"写入"<<"服务器的消息"<<QString(data);

        //如果文件的数据收齐
        if( m_filemap.value(handle)->receivefilesize==m_filemap.value(handle)->fileszie)
        {
          qDebug()<<"文件传输完毕";
          //关闭文件传输
          m_filemap.value(handle)->file->close();
          delete m_filemap.value(handle)->file;
          m_filemap.value(handle)->istransporting=false;

          //构建传输给 receiver客户端的 数据
          QFileInfo fileinfo(m_filemap.value(handle)->filename);
          QString filesizestr=QString("%1").arg(fileinfo.size());
          QString str_1="#31#/"+m_filemap.value(handle)->sendername+"/"+
                         m_filemap.value(handle)->receivername+"/"+
                         m_filemap.value(handle)->filename+"/"+
                         filesizestr+"/"+
                         m_filemap.value(handle)->sendtime;

          //传输数据给receiver客户端
          if(IsOnline(m_filemap.value(handle)->receivername))
          {
              //获取接收文件客户端的handle号
              int handlereceive=GetHandleOfId(m_filemap.value(handle)->receivername);
              //传输数据
              m_socketMap.value(handlereceive)->write(str_1.toUtf8().data());

              //为filepath和receivername赋值
              this->filepath=m_filemap.value(handle)->filename;
              this->receivername=m_filemap.value(handle)->receivername;

              //打开计时器 到时后会进入槽函数传输数据 防止黏包
              timer.start(1000);
          }
        }
    }
    //处理注册信息
    else if(str.startsWith("#00#")==true)
    {
        QString myid = str.section('/', 1, 1);//获得id号
        QString mypwd = str.section('/', 2, 2);//获得密码
        QByteArray mypwd_QBA = mypwd.toUtf8();//密码转为QByteArray格式
        QByteArray mypwd_hash = QCryptographicHash::hash(mypwd_QBA, QCryptographicHash::Md5);//密码加密
        QString mypwd_md5 = mypwd_hash.toHex();//加密后的密码转回QString格式

        //将信息插入regster表格
        QString str_1=QString("insert into regster(id,password,headphotonumber) values('%1','%2','1')").arg(myid).arg(mypwd_md5);
        //插入失败
        if(query.exec(str_1)==false){
            //返回注册失败信息
            QString cmd_2=QString("#00#0");
            m_socketMap.value(handle)->write(cmd_2.toUtf8().data());
        }
        //插入成功
        else
        {
            //返回注册成功信息
            QString cmd_2=QString("#00#1");
            m_socketMap.value(handle)->write(cmd_2.toUtf8().data());
        }
    }
    //处理登录信息
    else if(str.startsWith("#01#")==true)
    {
        QString str_1=str.section('/',1,1);//用户名
        QString str_2=str.section('/',2,2);//密码
        QByteArray mypwd_QBA = str_2.toUtf8();//密码转为QByteArray格式
        QByteArray mypwd_hash = QCryptographicHash::hash(mypwd_QBA, QCryptographicHash::Md5);//密码加密
        QString mypwd_md5 = mypwd_hash.toHex();//加密后转为QString格式

        //检查onlineclient表id号是否已登录
        QString cmd_2=QString("select * from onlineclient where id='%1'").arg(str_1);
        query.exec(cmd_2);
        //已经登陆
        if(query.next()==true)
        {
            //回传已登录信息
            QString str_4="#01#2";
            m_socketMap.value(handle)->write(str_4.toUtf8().data());
            return;
        }

        //检查密码与用户名是否匹配
        QString str_3=QString("select * from regster where id='%1' and password='%2'").arg(str_1).arg(mypwd_md5);
        query.exec(str_3);
        //不匹配
        if(query.next()==false)
        {
            //回传登录失败信息
            QString str_4="#01#0";
            m_socketMap.value(handle)->write(str_4.toUtf8().data());
        }
        //匹配
        else
        {
            //创建回传信息str_4
            QString str_4=QString("#01#1/%1/$").arg(str_1);
            //写入在线用户表格
            QString cmd_1=QString("insert into onlineclient(handle,id) values(%1,'%2')").arg(handle).arg(str_1);
            query.exec(cmd_1);
            //查找该用户所有好友信息 加入str_4
            QString cmd_2=QString("select * from friends where id_1='%1'").arg(str_1);
            query.exec(cmd_2);
            while(query.next())
            {
                str_4+="/";
                str_4+=query.value(1).toString();
            }

            //查找与该用户相关的聊天内容 加入str_4
            str_4+="$";
            QString cmd_3=QString("select * from allmessage where sender='%1' or receiver='%2'").arg(str_1).arg(str_1);
            query.exec(cmd_3);
            while(query.next())
            {
                str_4+=+"/"+query.value(0).toString()+"/"+query.value(1).toString()+"/"+query.value(2).toString()+"/"+query.value(3).toString();
            }

            //查找用户群聊信息 加入str_4
            str_4+="$";
            QString cmd_4=QString("select *from groups where membername='%1'").arg(str_1);
            query.exec(cmd_4);
            while(query.next())
            {
                str_4+="/"+query.value(0).toString()+"/"+query.value(1).toString()+"/"+query.value(2).toString();
            }

            //查找每个群聊的成员 加入str_4
            str_4+="$";
            QString cmd_5=QString("select *from groups");
            query.exec(cmd_5);
            while(query.next())
            {
                str_4+="/"+query.value(0).toString()+"/"+query.value(2).toString();
            }

            //查找自己的头像信息 加入str_4
            str_4+="$";
            QString cmd_6=QString("select * from regster where id='%1'").arg(str_1);
            query.exec(cmd_6);
            query.next();
            str_4+="/"+query.value(2).toString();

            //回传str_4给客户端
            m_socketMap.value(handle)->write(str_4.toUtf8().data());
            m_socketMap.value(handle)->flush();
        }
    }
    //给好友发送消息
    else if(str.startsWith("#02#")==true)
    {
        QString str_1=str.section('/',1,1);//发送者id
        QString str_2=str.section('/',2,2);//接受者id
        QString str_3=str.section('/',3,3);//消息内容
        QString str_4=str.section('/',4,4);//时间

        //将消息插入allmessage表格
        QString cmd_1=QString("insert into allmessage(sender,receiver,message,time) values('%1','%2','%3','%4')").arg(str_1).arg(str_2).arg(str_3).arg(str_4);
        query.exec(cmd_1);

        //传输信息
        if(IsOnline(str_2))
        {
            int friendhandle=GetHandleOfId(str_2);
            QString headnumberstr=getheadphotonumber(str_1);
            QString str_100=str+"/"+headnumberstr;
            m_socketMap.value(friendhandle)->write(str_100.toUtf8().data());
        }
    }
    //发送好友申请
    else if(str.startsWith("#14#")==true)
    {
        QString str_1=str.section('/',1,1);//申请者id
        QString str_2=str.section('/',2,2);//接收者id
        //发送好友申请给接收者
        if(IsOnline(str_2))
        {
           int handle_friend=GetHandleOfId(str_2);
           QString str_3="#14#/";
           str_3+=str_1;
           str_3+="/";
           str_3+=str_2;
           m_socketMap.value(handle_friend)->write(str_3.toUtf8().data());
        }

    }
    //返回申请结果
    else if(str.startsWith("#13#")==true)
    {
        QString str_1=str.section('/',1,1);//申请者id
        QString str_2=str.section('/',2,2);//接收者id
        QString str_3=str.section('/',3,3);//结果

        //成为好友
        if(str_3=="1")
        {
            //将信息插入friends表格
            QString str_4=QString("insert into friends(id_1,id_2) values('%1','%2')").arg(str_1).arg(str_2);
            query.exec(str_4);
            QString str_5=QString("insert into friends(id_1,id_2) values('%1','%2')").arg(str_2).arg(str_1);
            query.exec(str_5);

            //返回给申请者申请成功结果
            if(IsOnline(str_1))
            {
                int handle_friend=GetHandleOfId(str_1);
                 m_socketMap.value(handle_friend)->write(str.toUtf8().data());
            }
        }

    }
    //处理建立群聊申请
    else if(str.startsWith("#21")==true)
    {
        QString str_1=str.section('/',1,1);//申请者id
        QString str_2=str.section('/',2,2);//群名
        qDebug()<<"收到"<<str_1<<"建立"<<str_2<<"的申请";
        //要创建的群名不存在
        if(ifGroupExist(str_2)==false)
        {
            //插入groups表
            QString cmd_1=QString("insert into groups(groupname,managername,membername) values('%1','%2','%3')").arg(str_2).arg(str_1).arg(str_1);
            query.exec(cmd_1);
            //返回创建成功信息
            QString str_3=str+"/1";
            m_socketMap.value(handle)->write(str_3.toUtf8().data());
        }
        //群名已存在
        else
        {
            //返回创建失败信息
            QString str_3=str+"/0";
            m_socketMap.value(handle)->write(str_3.toUtf8().data());
        }
    }
    //用户申请加入群聊
    else if(str.startsWith("#22#")==true)
    {
        QString str_1=str.section('/',1,1);//申请者id
        QString str_2=str.section('/',2,2);//群名
        qDebug()<<"收到"<<str_1<<"加入"<<str_2<<"的申请";

        //查找群主id managername
        QString cmd_1=QString("select * from groups where groupname='%1'").arg(str_2);
        query.exec(cmd_1);
        query.next();
        QString managername=query.value(1).toString();

        //向管理者发送请求
        if(IsOnline(managername))
        {
            int handlemag=GetHandleOfId(managername);
            QString str_3="#22#/";
            str_3+=str_1+"/"+str_2+"/"+managername;
            m_socketMap.value(handlemag)->write(str_3.toUtf8().data());
        }
    }
    //群主处理用户加入申请
    else if(str.startsWith("#23#")==true)
    {
        QString str_1=str.section('/',1,1);//申请者id
        QString str_2=str.section('/',2,2);//群名
        QString str_3=str.section('/',3,3);//群主id
        QString str_4=str.section('/',4,4);//结果

        if(str_4 == "1"){
            //把这个人入群的消息告诉其他群成员
            QString cmd_0=QString("select * from groups where groupname='%1'").arg(str_2);
            query.exec(cmd_0);
            while(query.next())
            {
                QString othermebname=query.value(2).toString();
                if(othermebname!=str_3)
                {
                    if(IsOnline(othermebname)==true)
                    {
                        int handlerother=GetHandleOfId(othermebname);
                        QString str_100="#24#/"+str_1+"/"+str_2+"/"+str_3;
                        m_socketMap.value(handlerother)->write(str_100.toUtf8().data());
                    }
                }
            }

            QString cmd_1=QString("insert into groups(groupname,managername,membername) values('%1','%2','%3')").arg(str_2).arg(str_3).arg(str_1);
            query.exec(cmd_1);

            QString cmd_2=QString("select * from groups where groupname='%1'").arg(str_2);
            query.exec(cmd_2);

            QString str_5=str;
            while(query.next())
            {
                str_5+="/"+query.value(2).toString();
            }
            if(IsOnline(str_1))
            {
                int handleapp=GetHandleOfId(str_1);
                m_socketMap.value(handleapp)->write(str_5.toUtf8().data());
            }
        }
        else if(str_4 == "0"){//
            int handleapp=GetHandleOfId(str_1);
            //m_sockketMap.value(handleapp) -> write(str.toUtf8().data());
        }
    }
    //群聊中发送信息
    else if(str.startsWith("#25#"))
    {
        QString str_1=str.section('/',1,1);//群名
        QString str_2=str.section('/',2,2);//发送者id
        QString str_3=str.section('/',3,3);//消息
        QString str_4=str.section('/',4,4);//时间

        //查找组员信息
        QString cmd_1=QString("select * from groups where groupname='%1'").arg(str_1);
        query.exec(cmd_1);

        //获取发送者头像信息
        QString senderHeadPhotoNumber=getheadphotonumber(str_2);

        //依次将信息发送给各个组员
        while(query.next())
        {
            QString receiver=query.value(2).toString();
            if(receiver!=str_2&&IsOnline(receiver))
            {
                int handlereceiver=GetHandleOfId(receiver);
                 m_socketMap.value(handlereceiver)->write((str+"/"+senderHeadPhotoNumber).toUtf8().data());
            }
        }
    }
    //客户端传输文件
    else if(str.startsWith("#31#"))
    {
        m_filemap.value(handle)->istransporting=true;//将该handle号对应的文件传输开关打开
        m_filemap.value(handle)->sendername=str.section('/',1,1);//分割出发送者id号
        m_filemap.value(handle)->receivername=str.section('/',2,2);//接受者id号
        m_filemap.value(handle)->filename=str.section('/',3,3);//文件名
        m_filemap.value(handle)->fileszie=str.section('/',4,4).toInt();//文件大小
        m_filemap.value(handle)->sendtime=str.section('/',5,5);//发送时间
        m_filemap.value(handle)->receivefilesize=0;//收到的文件大小
        m_filemap.value(handle)->file=new QFile();//创建新的空文件
        m_filemap.value(handle)->file->setFileName(m_filemap.value(handle)->filename);//赋予文件姓名
        m_filemap.value(handle)->file->open(QIODevice::WriteOnly);//设为 只写

        qDebug()<<"我收到了你发来的文件信息："<<m_filemap.value(handle)->filename<<" 大小为："<<m_filemap.value(handle)->fileszie;
    }
    //更换头像
    else if(str.startsWith("#41#"))
    {
        //从数据中获得id号和要更换的头像地址
        QString userid=str.section('/',1,1);
        QString choose=str.section('/',2,2);
        //在数据库中更新
        QString cmd_1=QString("update regster set headphotonumber='%1' where id='%2'").arg(choose).arg(userid);
        if(query.exec(cmd_1)) qDebug()<<"头像更换成功";
    }
}

//判断用户是否在线
bool MyWidget::IsOnline(QString id)
{
     QSqlQuery query;
     //从上线用户表中查找id
     QString str=QString("select * from onlineclient where id='%1'").arg(id);
     query.exec(str);
     //如果找到 则返回true 否则返回false
     if(query.next()) return true;
     else return false;
}

//获取id号对应的handle号
int MyWidget::GetHandleOfId(QString id)
{
    QSqlQuery query;
    //从上线用户中查找id对应的handle号
    QString str=QString("select * from onlineclient where id='%1'").arg(id);
    query.exec(str);
    if(query.next()) return query.value(0).toInt();
    else return -1;
}

//判断要创建的组是否存在
bool MyWidget::ifGroupExist(QString groupname)
{
    QSqlQuery query;
    //从groups表中查找groupname是否已存在
    QString str=QString("select * from groups where groupname='%1'").arg(groupname);
    query.exec(str);
    if(query.next()) return true;
    else return false;
}

//发送文件给id
void MyWidget::sendfiletoId()
{

    QFile file;//建立文件
    file.setFileName(filepath);//设置文件名
    file.open(QIODevice::ReadOnly);//打开 只读

    int handlereceiver=GetHandleOfId(receivername);//获得receiver的handle号

    qint64 len=0;//一次传输的文件数据长度
    qint64 allou=0;//总文件数据长度
    do
    {
        len=0;
        char buf[1024]={0};
        //读取文件数据到buf，将读取数据的长度赋值给len
        len=file.read(buf,sizeof(buf));
        allou+=len;
        //向收取文件的客户端传输数据
        m_socketMap.value(handlereceiver)->write(buf,len);
    }while(len>0);

    qDebug()<<"总共发出了"<<allou<<"的数据";
    file.close();//关闭文件
}

//获取id号对应的头像地址
QString MyWidget::getheadphotonumber(QString userid)
{
    QSqlQuery query;
    //从regster表中查找id对应的getheadphotonumber
    QString cmd=QString("select * from regster where id='%1'").arg(userid);
    query.exec(cmd);
    query.next();
    return query.value(2).toString();
}
