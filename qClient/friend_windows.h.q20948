#ifndef FRIEND_WINDOWS_H
#define FRIEND_WINDOWS_H

#include <QWidget>
#include<QTcpSocket>
#include<QDateTime>
#include<QFile>
#include<QTimer>
#include<QFileDialog>
#include<QFileInfo>
#include<QMessageBox>
#include<QListWidgetItem>
#include<chat_windows.h>
#include<QDebug>
#include "notice_windows.h"
#include"groupregster.h"
#include"groupchat_windows.h"
#include<QApplication>
#include<QDesktopWidget>
#include"qnchatmessage.h"
#include<QRect>
#include "chat_windows.h"
#include <QTime>
#include <QString>
#include "add_friend.h"

namespace Ui {
class Friend_Windows;
}

class Friend_Windows : public QWidget
{
    Q_OBJECT

public:
    Friend_Windows(QTcpSocket * tcpsocket);
    ~Friend_Windows();
     void SetId(QString ID);
     QString id;
     void IsAccept(QString id);//是否同意好友申请 id为申请者id
     void IsAccept(QString appid,QString groupname,QString managername);//申请者id，群名,管理员名字
     void addFriend(QString friendid);
     void addGroup(QString groupname,QString managername,QString yourid);
     void loadHistoryMessage(QString mes);
     void receiveMessage(QString mes);
     void GroupCreateResult(bool ifsuccess);//返回群的创建结果，成功为true,失败为false
     void addgroupmember(QString groupname,QString membername);
     void addMessageToGroupWindows(QString groupname,QString message);
     void dealproject(QString sendername);
     int headPhotoNumber;
     void addNoneReceiveMessage(QString senderid);//申请者id
     void addNone_Message(QString senderid);//发送者id
     void ChangeColor(QString color);

     void changeImageNumber(int number);

     void setHeadImage();
     void initHeadImage();
     QMap<QString,Chat_windows *> map_friends;//好友名，好友的窗子
     QMap<QString,Groupchat_windows *>map_groups;//群名，群对话栏

private slots:
     void on_listWidgetFriend_itemDoubleClicked(QListWidgetItem *item);
     void on_listWidgetGroup_itemDoubleClicked(QListWidgetItem *item);
     void on_listWidgetNewNote_itemDoubleClicked(QListWidgetItem *item);
     void on_changeHead_clicked();
     void on_bt1_clicked();

private:
    Ui::Friend_Windows *ui;
    QTcpSocket * tcpSocket;
    GroupRegster * groupregster;//创建群的窗
    QString filepath;//文件路径
    QString filename;//文件名

signals:
    void select_friend(Chat_windows *win, QString cname);
    void select_group(Groupchat_windows *win, QString cname);
    void sig_clickAdd();

};

#endif // FRIEND_WINDOWS_H
