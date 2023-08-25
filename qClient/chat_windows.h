#ifndef CHAT_WINDOWS_H
#define CHAT_WINDOWS_H

#include <QWidget>
#include<QTcpSocket>
#include<QDateTime>
#include<QFile>
#include<QTimer>
#include<QFileDialog>
#include<QFileInfo>
#include<qnchatmessage.h>
#include<QListWidget>
#include<QShortcut>
#include<expression.h>
#include"screen.h"


namespace Ui {
class Chat_windows;
}

class Chat_windows : public QWidget
{
    Q_OBJECT

public:
    friend class expression;
    Chat_windows(QTcpSocket * tcpsocket);
    ~Chat_windows();
    void setFriendId(QString friendid);
    void setYourId(QString yourid);
    QString getYourId();
    QString getFriendId();
    void setReadEdit(QString mes);
    void senddata();
    void dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type);
    void dealMessage_document(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type);
    void dealMessage_photo(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type, QString filename);
    void dealMessage_emoj(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type);
    void dealMessageTime(QString curMsgTime);
    void addMessageToTextEdit(QString str,QNChatMessage::User_Type type,int leftphoto=1,int rightphoto=1);
    void addMessageToTextEdit_document(QString filename,QNChatMessage::User_Type type,int leftphoto=1,int rightphoto=1);
    void addMessageToTextEdit_photo(QString filename,QNChatMessage::User_Type type,int leftphoto=1,int rightphoto=1);
    void addMessageToTextEdit_emoj(QString filename,QNChatMessage::User_Type type,int leftphoto=1,int rightphoto=1);
    void addMessageToTextEdit_headphoto(QString filename,QNChatMessage::User_Type type,int leftphoto=1,int rightphoto=1);
    void change_photo(QString path);
    void send_photo(QString message);

    int headphotonumber;
    QString returnPhotoPath(int i);

    //事件
    virtual void resizeEvent(QResizeEvent *event);
    void ChangeColor(QString color);

public slots:
    void click_exp(QString message);

private slots:
    void on_Send_clicked();
    void on_send_file_clicked();
    void on_send_img_clicked();
    void on_emoji_clicked();
    void on_prtsc_clicked();

private:
    Ui::Chat_windows *ui;
    QTcpSocket * tcpSocket;

    QString filepath;//文件路径
    QString filename;//文件名
    qint64 filesize;//文件大小
    qint64 sendfile;//已经发送的文件大小
    QTimer timer;
    QString friend_id;
    QString your_id;
    expression * wexpression;
    Screen *s;
    QString str_left = "./head.jpg";
    QString str_right = "./head.jpg";

signals:
    void sig_clickprtsc();
};

#endif // CHAT_WINDOWS_H
