#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <QWidget>
#include <QTcpSocket>
#include <QMessageBox>
#include <QDebug>
#include <QApplication>
#include <QRect>
#include <QShortcut>
#include <qnchatmessage.h>
#include <QListWidgetItem>
#include<QTimer>
//#include <chat_windows.h>


namespace Ui {
class expression;
}

class expression : public QWidget
{
    Q_OBJECT

public:
    explicit expression(QTcpSocket *tcpsocket);

    void dealMessage_emoj(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type);
    void addMessageToTextEdit_emoj(QString str,QNChatMessage::User_Type type,int leftphoto=1,int rightphoto=1);
    ~expression();

public slots:

    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

signals:
    send_emoj_1(QString msg);

private:
    Ui::expression *ui;
    QTcpSocket * tcpSocket;

};

#endif // EXPRESSION_H
