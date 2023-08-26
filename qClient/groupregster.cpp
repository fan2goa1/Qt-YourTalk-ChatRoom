#include "groupregster.h"
#include "ui_groupregster.h"

GroupRegster::GroupRegster(QTcpSocket * tcpsocket):
    ui(new Ui::GroupRegster),tcpSocket(tcpsocket)
{
    ui->setupUi(this);
}

GroupRegster::~GroupRegster()
{
    delete ui;
}

void GroupRegster::on_pushButtonCreateGroup_clicked()
{
    QString groupname=ui->lineEditGroupName->text();
    QString str="#21#/";
    str+=id;
    str+="/";
    str+=groupname;
    qDebug()<<id<<"申请建立群"<<groupname;
    tcpSocket->write(str.toUtf8().data());
    ui->logo->setSizeIncrement(50,50);
    ui->logo->setIcon(QIcon(":/new/prefix1/img/logo.jpg"));
    ui->logo->setIconSize(QSize(100,100));
}
void GroupRegster::showDialog(bool ifsuccess)
{
    if(ifsuccess==false)
        QMessageBox::about(this,"failed","群名已经被注册");//依次为父类对象，标题，文本内容
    else if(ifsuccess==true)
        QMessageBox::about(this,"succeed","注册成功");//依次为父类对象，标题，文本内容
}
