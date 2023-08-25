#ifndef SIGNIN_WINDOWS_H
#define SIGNIN_WINDOWS_H

#include <QWidget>
#include<QTcpSocket>
#include<QDebug>
#include<QMessageBox>
#include <QShortcut>

namespace Ui {
class Signin_Windows;
}

class Signin_Windows : public QWidget
{
    Q_OBJECT

public:
    Signin_Windows(QTcpSocket * tcpsocket);
    ~Signin_Windows();
    QTcpSocket * tcpSocket;
    void LoginFailed(int i);//i==0 密码错误 i==2用户已经登录
    void regstersuccess();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonRegster_clicked();
signals:
    void sig_clickRegster();

private:
    Ui::Signin_Windows *ui;
};

#endif // SIGNIN_WINDOWS_H
