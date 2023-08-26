#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcpSocket = new QTcpSocket(this);
    // 服务器ip地址
//    tcpSocket -> connectToHost(QHostAddress("82.157.207.240"),8899);
    // 本地测试
     tcpSocket -> connectToHost(QHostAddress("127.0.0.1"),8899);

    istransporting=false;//

    w1=new Signin_Windows(tcpSocket);//登录窗口

    w1->show();

    w2 = new Regster_Windows(tcpSocket);//注册窗口

    w3 = new Cell_Main(tcpSocket);

    w4 = new add_friend(tcpSocket);

    w5 = new ChangeColor_Window;

    //当登录窗口的注册按钮被按下的时候，显示注册窗口
    connect(w1,&Signin_Windows::sig_clickRegster,w2,&Regster_Windows::show);

    //当主页面的添加好友按钮被按下后，显示添加好友窗口
    connect(w3,&Cell_Main::sig_clickAdd,w4,&add_friend::show);

    connect(w3, &Cell_Main::sig_clickChange, w5, &ChangeColor_Window::show);

    connect(w5, &ChangeColor_Window::sig_color, w3, [=](QString color){
        w3->Cell_Main::ChangeColor(color);
    });

    connect(w5, &ChangeColor_Window::sig_color, w3->wfriend, [=](QString color){
        w3->wfriend->Friend_Windows::ChangeColor(color);
    });



    connect(tcpSocket,&QTcpSocket::readyRead,

            [=]()
            {
                QByteArray array=tcpSocket->readAll();

                QString str=QString(array);
                qDebug()<<"客户端接受消息:"<<str;
                if(istransporting==true)//正在传送文件
                {
                    qint64 len=file->write(array);

                    receivesize+=len;
                    qDebug()<<len;
                    qDebug()<<"传输了"<<receivesize<<"文件总大小"<<filesize;
                    if(receivesize==filesize)
                    {
                        qDebug()<<"传完了";
                        w3->wfriend->dealproject(this->sender);
                        file->close();
                        istransporting=false;
                        delete file;
                    }

                   //此时通知friend窗已经完成了操作
                }
                else if(str.startsWith("#00#")==true)
                {
                    char ch=str.at(4).unicode();
                    if(ch=='1')//代表注册成功
                    {
                        w1->regstersuccess();
                        w2->close();//注册成功后关闭窗
                    }
                    else if(ch=='0')//代表注册失败
                    {

                        w2->regterFailed();
                    }
                }
                else if(str.startsWith("#01#")==true)
                {

                    QString str_1=str.section('$',0,0);//验证信息
                    QString str_2=str.section('$',1,1);//好友信息
                    QString str_3=str.section('$',2,2);//聊天信息
                    QString str_11=str.section('$',3,3);//加入的群聊信息
                    QString str_21=str.section('$',4,4);//群聊中的成员
                    QString str_31=str.section('$',5,5);//该用户的头像信息

                    char ch=str_1.at(4).unicode();
                    if(ch=='1')//登录成功
                    {
                        //设置好友界面的ID
                        w3->wfriend->SetId(str.section('/',1,1));
                        w4->SetId(str.section('/',1,1));
                        //加载好友信息
                        QString str_4=str_2.section('/',1,1);
                        for(int i=2;str_4!="";i++)
                        {
                            qDebug()<<"好友信息"<<str_4;
                            w3->wfriend->addFriend(str_4);
                            str_4=str_2.section('/',i,i);
                        }


                        //加载聊天信息
                        qDebug()<<"聊天信息"<<str_3;
                        QString str_5=str_3.section('/',1,4);
                        for(int i=4;str_5!="";)
                        {
                            qDebug()<<",,,"<<str_5;
                            w3->wfriend->loadHistoryMessage(str_5);
                            str_5=str_3.section('/',1+i,4+i);
                            i+=4;
                        }

                        //加载群聊信息
                        qDebug()<<"群聊信息"<<str_11;
                        QString str_12=str_11.section('/',1,3);
                        for(int i=3;str_12!="";)
                        {
                            qDebug()<<"群聊子信息"<<str_12;
                            w3->wfriend->addGroup(str_12.section('/',0,0),str_12.section('/',1,1),str_12.section('/',2,2));
                            str_12=str_11.section('/',1+i,3+i);
                            i+=3;
                        }

                         //每个群聊中的成员
                        qDebug()<<"每个群聊中的成员"<<str_21;
                        QString str_22=str_21.section('/',1,2);
                        for(int i=2;str_22!="";)
                        {
                            qDebug()<<"群聊子信息"<<str_22;
                            w3->wfriend->addgroupmember(str_22.section('/',0,0),str_22.section('/',1,1));

                            str_22=str_21.section('/',1+i,2+i);
                            i+=2;
                        }

                        //头像信息
                        w3->wfriend->initHeadImage();



                         //未接受的信息
                         QString str_100=str.section('$',6,6);
                         for(int i=7;str_100!="";i++)
                         {
                             qDebug()<<"未接受的消息"<<str_100;
                             if(str_100.startsWith("#15#"))
                             {
                                 QString str_1=str_100.section('/',1,1);//申请者ID
                                 QString str_2=str_100.section('/',2,2);//被邀请者ID
                                 w3->wfriend->addNoneReceiveMessage(str_1);
                             }
                             else if(str_100.startsWith("#16#"))
                             {
                                 QString str_1=str_100.section('/',1,1);//发送者ID
                                 QString str_2=str_100.section('/',2,2);//接受者ID
                                 QString str_3=str_100.section('/',3,3);//消息
                                 QString str_4=str_100.section('/',4,4);//时间
                                 w3->wfriend->addNone_Message(str_1);
                             }
                             str_100=str.section('$',i,i);

                         }

                        w1->hide();//将登录窗隐藏

                        w3->show();
                    }
                    else if(ch=='0')//代表注册失败
                    {
                        w1->LoginFailed(0);
                    }
                    else if(ch=='2')
                    {
                        w1->LoginFailed(2);
                    }
                }
                else if(str.startsWith("#02#")==true)
                {
                    w3->wfriend->receiveMessage(str);


                }
                else if(str.startsWith("#14#")==true)
                {
                    QString str_1=str.section('/',1,1);//申请者ID
                    QString str_2=str.section('/',2,2);//被邀请者ID
                    w3->wfriend->IsAccept(str_1);

                }
                else if(str.startsWith("#13#")==true)
                {
                    QString str_1=str.section('/',1,1);//申请者ID
                    QString str_2=str.section('/',2,2);//被邀请者ID
                    QString str_3=str.section('/',3,3);//申请结果
                    if(str_3=="1")//当对方同意申请时
                    {
                        w3->wfriend->addFriend(str_2);

                    }

                }
                else if(str.startsWith("#21#")==true)
                {
                    QString str_1=str.section('/',1,1);//申请者ID
                    QString str_2=str.section('/',2,2);//群名
                    QString str_3=str.section('/',3,3);//申请结果
                    if(str_3=="1")//群创建成功
                    {
                        w3->wfriend->GroupCreateResult(true);
                        w3->wfriend->addGroup(str_2,str_1,str_1);
                        w3->wfriend->addgroupmember(str_2,str_1);
                    }
                    else if(str_3=="0")//群创建失败
                    {
                        w3->wfriend->GroupCreateResult(false);
                    }

                }
                else if(str.startsWith("#22#"))
                {
                    QString str_1=str.section('/',1,1);//申请者ID
                    QString str_2=str.section('/',2,2);//群名
                    QString str_3=str.section('/',3,3);//管理员名字
                    w3->wfriend->IsAccept(str_1,str_2,str_3);

                }
                else if(str.startsWith("#23#"))
                {
                    QString str_1=str.section('/',1,1);//申请者ID
                    QString str_2=str.section('/',2,2);//群名ID
                    QString str_3=str.section('/',3,3);//管理员ID
                    QString str_4=str.section('/',4,4);//结果
                    //向群列表中加入信息
                    w3->wfriend->addGroup(str_2,str_3,str_1);
                    QString str_5=str.section('/',5,5);
                    for(int i=6;str_5!="";i++)
                    {
                        w3->wfriend->addgroupmember(str_2,str_5);
                        str_5=str.section('/',i,i);
                    }

                }
                else if(str.startsWith("#24#"))
                {
                    QString str_1=str.section('/',1,1);//申请者ID
                    QString str_2=str.section('/',2,2);//群名ID
                    QString str_3=str.section('/',3,3);//管理员ID
                    w3->wfriend->addgroupmember(str_2,str_1);
                }
                else if(str.startsWith("#25#"))
                {
                    QString str_1=str.section('/',1,1);//群名
                    QString str_2=str.section('/',2,2);//发送者名字
                    QString str_3=str.section('/',3,3);//消息
                    QString str_4=str.section('/',4,4);//时间
                    QString str_5=str.section('/',5,5);//发送者头像
                    w3->wfriend->addMessageToGroupWindows(str_1,str);
                }

                else if(str.startsWith("#31#"))
                {
                    QString str_1=str.section('/',1,1);//发送者id
                    QString str_2=str.section('/',2,2);//接受者id
                    QString str_3=str.section('/',3,3);//文件名
                    QString str_4=str.section('/',4,4);//文件大小
                    QString str_5=str.section('/',5,5);//时间

                    w3->wfriend->receiveMessage(str);
                    qDebug()<<"孩子又出息了";

                    //初始化
                    istransporting=true;
                    file =new QFile();
                    filename=str_3;
                    filesize=str_4.toInt();
                    receivesize=0;
                    this->sender=str_1;

                    //启动文件
                    file->setFileName(filename);
                    if(file->open(QIODevice::WriteOnly))
                    {
                        qDebug()<<"只写模式启动成功";
                    }
                }
            }
            );
}

MainWindow::~MainWindow()
{
    delete ui;
}


