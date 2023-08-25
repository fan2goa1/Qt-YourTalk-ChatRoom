#include "signin_windows.h"
#include "ui_signin_windows.h"

Signin_Windows::Signin_Windows(QTcpSocket * tcpsocket) :
    tcpSocket(tcpsocket),
    ui(new Ui::Signin_Windows)
{
    ui->setupUi(this);
    setWindowTitle("SignIN");
    ui->logo->setSizeIncrement(50,50);
    ui->logo->setIcon(QIcon(":/new/prefix1/img/logo.png"));
    ui->logo->setIconSize(QSize(90,90));

    QShortcut *key=new QShortcut(QKeySequence(Qt::Key_Return),this);//创建一个快捷键"Key_Return"键
    connect(key,SIGNAL(activated()),this,SLOT(on_pushButtonLogin_clicked()));//连接到指定槽函数


}

Signin_Windows::~Signin_Windows()
{
    delete ui;
}

void Signin_Windows::on_pushButtonLogin_clicked()
{
    QString str="#01#/";//登录验证前缀
    str+=ui->lineEditUsername->text();
    str+='/';
    str+=ui->lineEditPassword->text();
    qDebug()<<str;
    tcpSocket->write(str.toUtf8().data());
    tcpSocket->flush();


}

void Signin_Windows::on_pushButtonRegster_clicked()
{
    emit sig_clickRegster();
}
void Signin_Windows::LoginFailed(int i)
{
    if(i==0)
        QMessageBox::about(this,"failed","用户名或密码输入错误，请重新输入");//依次为父类对象，标题，文本内容
    else if(i==2)
        QMessageBox::about(this,"failed","用户已经登录，请重新输入");//依次为父类对象，标题，文本内容
}
 void Signin_Windows::regstersuccess()
 {
     QMessageBox::about(this,"succeed","注册成功");//依次为父类对象，标题，文本内容
 }
