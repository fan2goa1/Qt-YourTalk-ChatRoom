#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTcpSocket>
#include<QHostAddress>
#include<QDebug>
#include"signin_windows.h"
#include"regster_windows.h"
#include"chat_windows.h"
#include"friend_windows.h"
#include "cell_main.h"
#include "add_friend.h"
#include "changecolor_window.h"
#include <QShortcut>
#include "qnchatmessage.h"
#include "screen.h"
#include "controlwidget.h"
#include"myrect.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QTcpSocket * tcpSocket;



private:
    Ui::MainWindow *ui;
    Signin_Windows * w1;//登录窗口
    Regster_Windows * w2;//注册窗口
    Cell_Main * w3;//好友窗口
    add_friend *w4;  //添加好友窗口
    ChangeColor_Window *w5;     //改变主题颜色界面
    bool istransporting;//是否在传输文件
    QFile *file;//文件
    QString filename;//文件名
    qint64 filesize;//文件大小
    qint64 receivesize;//文件已经接受的大小
    QString sender;//发送者



};
#endif // MAINWINDOW_H
