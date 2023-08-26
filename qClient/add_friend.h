#ifndef ADD_FRIEND_H
#define ADD_FRIEND_H

#include <QWidget>
#include<QTcpSocket>
#include<QMessageBox>
#include<chat_windows.h>
#include<QDebug>
#include<QApplication>
#include<QDesktopWidget>
#include<QRect>
#include"groupregster.h"
#include"groupchat_windows.h"
#include"qnchatmessage.h"
#include "chat_windows.h"
#include <QShortcut>
#include "screen.h"


namespace Ui {
class add_friend;
}

class add_friend : public QWidget
{
    Q_OBJECT

public:
    explicit add_friend(QTcpSocket *tcpsocket);
    ~add_friend();
    void SetId(QString ID);
    QString id;
    void addFriend(QString friendid);
    void addGroup(QString groupname,QString managername,QString yourid);
    void GroupCreateResult(bool ifsuccess);//返回群的创建结果，成功为true,失败为false
    void addgroupmember(QString groupname,QString membername);

private slots:
    void on_pushButtonGetNewFriend_clicked();

    void on_pushButtonCreateGroup_clicked();

    void on_pushButtonIntoGroup_clicked();

    void on_bt1_clicked();

private:
    Ui::add_friend *ui;
    QTcpSocket * tcpSocket;
    QMap<QString,Chat_windows *> map_friends;//好友名，好友的窗子
    GroupRegster * groupregster;//创建群的窗
    QMap<QString,Groupchat_windows *>map_groups;//群名，群对话栏
    QString filepath;//文件路径
    QString filename;//文件名

signals:
   void sig_clickAdd();
};

#endif // ADD_FRIEND_H
