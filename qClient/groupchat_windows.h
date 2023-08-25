#ifndef GROUPCHAT_WINDOWS_H
#define GROUPCHAT_WINDOWS_H

#include <QWidget>
#include<QTcpSocket>
#include<QDateTime>
#include"qnchatmessage.h"
#include<QListWidgetItem>
#include<QShortcut>

namespace Ui {
class Groupchat_windows;
}

class Groupchat_windows : public QWidget
{
    Q_OBJECT

public:
     Groupchat_windows(QTcpSocket * tcpsocket);
    ~Groupchat_windows();
     void set3LineEidt(QString groupname,QString managername,QString yourid);
     void addgroupmember(QString yourid);
     void addMessageToReadText(QString message);

     void dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type);
     void dealMessageTime(QString curMsgTime);
     void addMessageToTextEdit(QString str,QNChatMessage::User_Type type,int leftphoto=1,int rightphoto=1);
     QString returnPhotoPath(int i);
     int headPhotoNumber;

     void ChangeColor(QString color);


private slots:
     void on_pushButton_clicked();

private:
    Ui::Groupchat_windows *ui;
    QTcpSocket * tcpSocket;

    QString group_name;
    QString manager_name;
    QString your_id;

};

#endif // GROUPCHAT_WINDOWS_H
