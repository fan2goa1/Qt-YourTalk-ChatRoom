#include "regster_windows.h"
#include "ui_regster_windows.h"

Regster_Windows::Regster_Windows(QTcpSocket* tcpsocket)
  :  ui(new Ui::Regster_Windows),tcpSocket(tcpsocket)
{

    ui->setupUi(this);
    setWindowTitle("Register");
    ui->logo->setSizeIncrement(50,50);
    ui->logo->setIcon(QIcon(":/new/prefix1/img/logo.png"));
    ui->logo->setIconSize(QSize(80,80));
    QShortcut *key=new QShortcut(QKeySequence(Qt::Key_Return),this);//创建一个快捷键"Key_Return"键
    connect(key,SIGNAL(activated()),this,SLOT(on_pushButtonRegster_clicked()));//连接到指定槽函数

}

Regster_Windows::~Regster_Windows()
{
    delete ui;

}

void Regster_Windows::on_pushButtonRegster_clicked()
{
    if(ui->lineEditPassword->text() != ui->lineEditPassword_2->text()) //验证两次输入密码一致
    {
        QMessageBox::about(this,"warring","两次密码输入不一致");
        ui->lineEditPassword->clear();
        ui->lineEditPassword_2->clear();
        return;
    }
    QString str="#00#/";//注册验证前缀
    str+=ui->lineEditUsername->text();
    str+='/';
    str+=ui->lineEditPassword->text();
    //qDebug()<<str;
    tcpSocket->write(str.toUtf8().data());
}

void Regster_Windows::regsterSuccess()
{
    QMessageBox::about(this,"succeed","注册成功");//依次为父类对象，标题，文本内容
}
void Regster_Windows::regterFailed()
{
    QMessageBox::about(this,"failed","注册失败，用户名已经存在");//依次为父类对象，标题，文本内容
}
