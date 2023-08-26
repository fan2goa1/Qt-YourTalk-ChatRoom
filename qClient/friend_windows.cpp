#include "friend_windows.h"
#include "ui_friend_windows.h"
#include <QString>

Friend_Windows::Friend_Windows(QTcpSocket * tcpsocket) :
    ui(new Ui::Friend_Windows),tcpSocket(tcpsocket)
{
    ui->setupUi(this);
    groupregster =new GroupRegster(tcpSocket);

    //设置样式表
    ui->listWidgetFriend->setStyleSheet("border:none;"
                                        "background-color:rgb(227,224,223)");
    ui->listWidgetGroup->setStyleSheet("border:none;"
                                       "background-color:rgb(227,224,223)");
    ui->listWidgetNewNote->setStyleSheet("border:none;"
                                       "background-color:rgb(227,224,223)");
    ui->tabWidget->setStyleSheet("border:none");
    ui->labelID->setStyleSheet("background:rgba(225,225,225,0);"
                               "font: 75 12pt \"Agency FB\";");
    ui->tabWidget->setStyleSheet("QTabWidget{"
                                 "border:none;"
                                 "background:rgb(227,224,223);"
                                 "}"
                                 "QTabBar::tab{"
                                 "background:rgb(245,245,245);"
                                 "}"
                                 "QTabBar::tab:selected{"
                                 "background:rgb(227,224,223);"
                                 "}");
    ui->gridLayout->setMargin(0);
}

//颜色变换
void Friend_Windows::ChangeColor(QString color)
{
    if(color == "blue")
    {
        ui->listWidgetFriend->setStyleSheet("border:none;"
                                            "background-color:rgb(202,200,242)");
        ui->listWidgetGroup->setStyleSheet("border:none;"
                                           "background-color:rgb(202,200,242)");
        ui->listWidgetNewNote->setStyleSheet("border:none;"
                                           "background-color:rgb(202,200,242)");
        ui->tabWidget->setStyleSheet("border:none");
        ui->labelID->setStyleSheet("background:rgba(225,225,225,0);"
                                   "font: 75 12pt \"Agency FB\";");
        ui->tabWidget->setStyleSheet("QTabWidget{"
                                     "border:none;"
                                     "background:rgb(202,200,242);"
                                     "}"
                                     "QTabBar::tab{"
                                     "background:rgb(231,230,249);"
                                     "}"
                                     "QTabBar::tab:selected{"
                                     "background:rgb(202,200,242);"
                                     "}");
        ui->gridLayout->setMargin(0);
    }
    if(color == "red")
    {
        ui->listWidgetFriend->setStyleSheet("border:none;"
                                            "background-color:rgb(244,198,205)");
        ui->listWidgetGroup->setStyleSheet("border:none;"
                                           "background-color:rgb(244,198,205)");
        ui->listWidgetNewNote->setStyleSheet("border:none;"
                                           "background-color:rgb(244,198,205)");
        ui->tabWidget->setStyleSheet("border:none");
        ui->labelID->setStyleSheet("background:rgba(225,225,225,0);"
                                   "font: 75 12pt \"Agency FB\";");
        ui->tabWidget->setStyleSheet("QTabWidget{"
                                     "border:none;"
                                     "background:rgb(244,198,205);"
                                     "}"
                                     "QTabBar::tab{"
                                     "background:rgb(249,223,227);"
                                     "}"
                                     "QTabBar::tab:selected{"
                                     "background:rgb(244,198,205);"
                                     "}");
        ui->gridLayout->setMargin(0);
    }
    if(color == "yellow")
    {
        ui->listWidgetFriend->setStyleSheet("border:none;"
                                            "background-color:rgb(244,220,123)");
        ui->listWidgetGroup->setStyleSheet("border:none;"
                                           "background-color:rgb(244,220,123)");
        ui->listWidgetNewNote->setStyleSheet("border:none;"
                                           "background-color:rgb(244,220,123)");
        ui->tabWidget->setStyleSheet("border:none");
        ui->labelID->setStyleSheet("background:rgba(225,225,225,0);"
                                   "font: 75 12pt \"Agency FB\";");
        ui->tabWidget->setStyleSheet("QTabWidget{"
                                     "border:none;"
                                     "background:rgb(244,220,123);"
                                     "}"
                                     "QTabBar::tab{"
                                     "background:rgb(255,247,183);"
                                     "}"
                                     "QTabBar::tab:selected{"
                                     "background:rgb(244,220,123);"
                                     "}");
        ui->gridLayout->setMargin(0);
    }
    if(color == "black")
    {
        ui->listWidgetFriend->setStyleSheet("border:none;"
                                            "background-color:rgb(227,224,223)");
        ui->listWidgetGroup->setStyleSheet("border:none;"
                                           "background-color:rgb(227,224,223)");
        ui->listWidgetNewNote->setStyleSheet("border:none;"
                                           "background-color:rgb(227,224,223)");
        ui->tabWidget->setStyleSheet("border:none");
        ui->labelID->setStyleSheet("background:rgba(225,225,225,0);"
                                   "font: 75 12pt \"Agency FB\";");
        ui->tabWidget->setStyleSheet("QTabWidget{"
                                     "border:none;"
                                     "background:rgb(227,224,223);"
                                     "}"
                                     "QTabBar::tab{"
                                     "background:rgb(245,245,245);"
                                     "}"
                                     "QTabBar::tab:selected{"
                                     "background:rgb(227,224,223);"
                                     "}");
        ui->gridLayout->setMargin(0);
    }
}



Friend_Windows::~Friend_Windows()
{
    delete ui;
}

void Friend_Windows::SetId(QString ID)
{
    id=ID;
    groupregster->id=ID;
    ui->labelID->setText(ID);
}

void Friend_Windows::IsAccept(QString id1)//是否同意好友申请 id1为申请者id
{
    QString str=id1;
    str+=" 想加你为好友";
    int ret=QMessageBox::question(this,"好友申请",str,
                                  QMessageBox::Yes,
                                  QMessageBox::No);//依次为父类对象，标题，文本内容
    QString str_1="#13#/";
    str_1+=id1;
    str_1+="/";
    str_1+=id;
    switch(ret)
    {
    case QMessageBox::Yes:
         str_1+="/1";
         addFriend(id1);
                break;
    case QMessageBox::No:
         str_1+="/0";
                break;
    default:
         str_1+="/0";
    }

    tcpSocket->write(str_1.toUtf8().data());
}
void Friend_Windows::IsAccept(QString appid,QString groupname,QString managername)//申请者id，群名
{
    QString str=appid;
    str+="想加入群聊";
    str+=groupname;
    int ret=QMessageBox::question(this,"入群申请",str,
                                  QMessageBox::Yes,
                                  QMessageBox::No);//依次为父类对象，标题，文本内容
    switch(ret)
    {
    case QMessageBox::Yes:
    {
        QString str_1="#23#/";
        str_1+=appid+"/"+groupname+"/"+managername+"/"+"1";
        //向群列表中加人
        tcpSocket->write(str_1.toUtf8().data());
        map_groups.value(groupname)->addgroupmember(appid);
               break;
    }

    case QMessageBox::No:
        qDebug()<<"我拒绝了";

                break;
    default:
        qDebug()<<"我拒绝了";

    }
}


void Friend_Windows::addFriend(QString friendid)
{
     QListWidgetItem* item=new QListWidgetItem;
     item->setText(friendid);
     ui->listWidgetFriend->addItem(item);
     //
     Chat_windows* w=new Chat_windows(tcpSocket);
     //
     w->setFriendId(friendid);
     w->setYourId(id);
     w->headphotonumber=headPhotoNumber;
     map_friends.insert(friendid,w);
     //qDebug()<<"map_friends 添加成功";
}
void Friend_Windows::addGroup(QString groupname,QString managername,QString yourid)
{
    QListWidgetItem * item=new QListWidgetItem;
    item->setText(groupname);
    ui->listWidgetGroup->addItem(item);

    Groupchat_windows * w=new Groupchat_windows(tcpSocket);
    w->set3LineEidt(groupname,managername,yourid);
    w->headPhotoNumber=headPhotoNumber;
    map_groups.insert(groupname,w);

}
void Friend_Windows::on_listWidgetFriend_itemDoubleClicked(QListWidgetItem *item)
{

    QString id=item->text();
    emit select_friend(map_friends.value(id), id);


}
void Friend_Windows::receiveMessage(QString str)
{
    qDebug() << str;
    QString str_1=str.section('/',1,1);//发送者ID
    QString str_2=str.section('/',2,2);//接受者ID
    QString str_3=str.section('/',3,3);//消息
    QString str_4=str.section('/',4,4);//时间
    QString str_5=str.section('/',5,5);//发送者头像
    if(str.startsWith("#02#")==true)
    {
         Notice_windows * w=new Notice_windows(map_friends.value(str_1));
         w->setButtonText(str_1+"发来了消息");
         QDesktopWidget * destopwidget=QApplication::desktop();
         QRect application=destopwidget->screenGeometry();
         w->move(application.width()-400,application.height()-220);
         w->show();

         QStringList strlist = str_3.split(".",QString::SkipEmptyParts);
         QString temp = strlist.value(1);
         if(temp=="png")
         {
             map_friends.value(str_1)->addMessageToTextEdit_emoj(str_3,QNChatMessage::User_She,str_5.toInt(),headPhotoNumber);
         }
         else
         {
             map_friends.value(str_1)->addMessageToTextEdit(str_3,QNChatMessage::User_She,str_5.toInt(),headPhotoNumber);
         }


    }
    if(str.startsWith("#31#")==true)
    {
        QStringList strlist = str_3.split(".",QString::SkipEmptyParts);
        QString temp = strlist.value(1);
        if(temp=="jpg"||temp=="png")
        {
            map_friends.value(str_1)->addMessageToTextEdit_photo(str_3,QNChatMessage::User_She,str_5.toInt(),headPhotoNumber);
        }
        else
        {
            map_friends.value(str_1)->addMessageToTextEdit_document(str_3,QNChatMessage::User_She,str_5.toInt(),headPhotoNumber);
        }
    }
}
void Friend_Windows::loadHistoryMessage(QString str)
{
    qDebug()<<"load history message"<<str;
    QString str_1=str.section('/',0,0);//发送者ID
    QString str_2=str.section('/',1,1);//接受者ID
    QString str_3=str.section('/',2,2);//消息
    QString str_4=str.section('/',3,3);//时间

    qDebug()<<"str_1"<<str_1<<"id"<<id;
    if(str_1==id)//这条消息是自己发的
    {
        qDebug()<<"这条消息是自己发的";
          map_friends.value(str_2)->addMessageToTextEdit(str_3,QNChatMessage::User_Me);
    }
    else if(str_2==id)//这条消息是别人发的
    {
        qDebug()<<"这条消息是别人发的";
        map_friends.value(str_1)->addMessageToTextEdit(str_3,QNChatMessage::User_She);
    }

}

void Friend_Windows::GroupCreateResult(bool ifsuccess)
{
    groupregster->showDialog(ifsuccess);
}


void Friend_Windows::on_listWidgetGroup_itemDoubleClicked(QListWidgetItem *item)
{
    QString groupname=item->text();
    emit select_group(map_groups.value(groupname), groupname);

}


void Friend_Windows::addgroupmember(QString groupname,QString membername)
{

    if(map_groups.contains(groupname))
      map_groups.value(groupname)->addgroupmember(membername);
}
void Friend_Windows::addMessageToGroupWindows(QString groupname,QString str)
{
    QString str_1=str.section('/',1,1);//群名
    QString str_2=str.section('/',2,2);//发送者名字
    QString str_3=str.section('/',3,3);//消息
    QString str_4=str.section('/',4,4);//时间
    QString str_5=str.section('/',5,5);//发送者头像

    map_groups.value(groupname)->addMessageToTextEdit(str_2+":"+str_3,QNChatMessage::User_She,str_5.toInt(),1);
}
void Friend_Windows::dealproject(QString sendername)
{
    QMessageBox::about(this,"new msg",sendername+"向您传输了文件");//依次为父类对象，标题，文本内容
}
void Friend_Windows::addNoneReceiveMessage(QString senderid)//申请者id
{
    QListWidgetItem * item=new QListWidgetItem;
    item->setText("#"+senderid+"#向您发来了好友申请");
    ui->listWidgetNewNote->addItem(item);

}
void Friend_Windows::addNone_Message(QString senderid)
{
    QListWidgetItem * item=new QListWidgetItem;
    item->setText("!"+senderid+"!给您发来了新消息");
    ui->listWidgetNewNote->addItem(item);
}

void Friend_Windows::on_listWidgetNewNote_itemDoubleClicked(QListWidgetItem *item)
{
    QString str=item->text();
    if(str.startsWith("#"))
    {
        QString senderid=str.section('#',1,1);
        QString str=senderid;
        str+=" 想加你为好友";
        int ret=QMessageBox::question(this,"好友申请",str,
                                      QMessageBox::Yes,
                                      QMessageBox::No);//依次为父类对象，标题，文本内容
        QString str_1="#13#/";
        str_1+=senderid;
        str_1+="/";
        str_1+=id;
        switch(ret)
        {
        case QMessageBox::Yes:
             str_1+="/1";
                    break;
        case QMessageBox::No:
             str_1+="/0";
                    break;
        default:
             str_1+="/0";
        }

        tcpSocket->write(str_1.toUtf8().data());
    }
    else if(str.startsWith("!"))
    {
        QString senderid=str.section('!',1,1);
        QString str=senderid;
        this->map_friends.value(senderid)->show();
    }


    ui->listWidgetNewNote->removeItemWidget(item);
    delete item;


}

void Friend_Windows::on_changeHead_clicked()
{
    filepath.clear();//文件路径
    filename.clear();//文件名
    filepath=QFileDialog::getOpenFileName(this,"open","../");
    QFileInfo info(filepath);
    filename= info.fileName();
    qDebug()<<filepath;
    QString old_name=filepath;
    QString new_name="./head.jpg";

    QFile fileTemp("./head.jpg");
                     fileTemp.remove();

    QFile::copy(old_name,new_name); //A路径移动到B路径
    qDebug()<<"开始设置"<<endl;
    this->setHeadImage();
}

void Friend_Windows::on_bt1_clicked()
{
    emit sig_clickAdd();
}


void Friend_Windows::setHeadImage()
{
    QString image;
    image= QString("./head.jpg");
    ui->changeHead->setText("");
    QPixmap pixmap(image);
    QPixmap fitpixmap = pixmap.scaled(70, 70, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->changeHead->setIcon(QIcon(fitpixmap));
    ui->changeHead->setIconSize(QSize(70, 70));
    ui->changeHead->setFlat(true);
    ui->changeHead->setStyleSheet("border: 0px"); //消除边框

}

void Friend_Windows::initHeadImage()
{
    QString image;
    image= QString(":/new/prefix1/img/head.jpg");
    ui->changeHead->setText("");
    QPixmap pixmap(image);
    QPixmap fitpixmap = pixmap.scaled(70, 70, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->changeHead->setIcon(QIcon(fitpixmap));
    ui->changeHead->setIconSize(QSize(70, 70));
    ui->changeHead->setFlat(true);
    ui->changeHead->setStyleSheet("border: 0px"); //消除边框

}
