#include "add_friend.h"
#include "ui_add_friend.h"


add_friend::add_friend(QTcpSocket * tcpsocket) :
    ui(new Ui::add_friend),tcpSocket(tcpsocket)
{
    ui->setupUi(this);
    groupregster =new GroupRegster(tcpSocket);
    ui->logo->setSizeIncrement(50,50);
    ui->logo->setIcon(QIcon(":/new/prefix1/img/logo.jpg"));
    ui->logo->setIconSize(QSize(100,100));
}

add_friend::~add_friend()
{
    delete ui;
}



void add_friend::on_bt1_clicked()
{
    emit sig_clickAdd();
}



void add_friend::on_pushButtonGetNewFriend_clicked()
{
    QString str="#14#/";
    str+=id;
    str+="/";
    str+=ui->lineEditFriendId->text();
    tcpSocket->write(str.toUtf8().data());
    qDebug()<<"发送好友申请成功";
}

void add_friend::on_pushButtonIntoGroup_clicked()//点下去之后申请入群
{
    QString str="#22#/";
    str+=id+"/"+ui->lineEditGroupId->text();
    tcpSocket->write(str.toUtf8().data());
    qDebug()<<"发送入群申请成功";
}

void add_friend::addFriend(QString friendid)
{
     QListWidgetItem* item=new QListWidgetItem;
     item->setText(friendid);
     Chat_windows* w=new Chat_windows(tcpSocket);
     w->setFriendId(friendid);
     w->setYourId(id);
     map_friends.insert(friendid,w);
     //qDebug()<<"map_friends 添加成功";
}

void add_friend::addGroup(QString groupname,QString managername,QString yourid)
{
    QListWidgetItem * item=new QListWidgetItem;
    item->setText(groupname);
    Groupchat_windows * w=new Groupchat_windows(tcpSocket);
    w->set3LineEidt(groupname,managername,yourid);
    map_groups.insert(groupname,w);
}


void add_friend::on_pushButtonCreateGroup_clicked()
{
    groupregster->show();
}


void add_friend::GroupCreateResult(bool ifsuccess)
{
    groupregster->showDialog(ifsuccess);
}


void add_friend::addgroupmember(QString groupname,QString membername)
{
    if(map_groups.contains(groupname))
    map_groups.value(groupname)->addgroupmember(membername);
}

void add_friend::SetId(QString ID)
{
    id=ID;
    groupregster->id=ID;
}

