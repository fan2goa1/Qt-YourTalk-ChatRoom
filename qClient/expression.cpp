#include "expression.h"
#include "ui_expression.h"

expression::expression(QTcpSocket * tcpsocket) :
    ui(new Ui::expression),tcpSocket(tcpsocket)
{
    ui->setupUi(this);
    ui->pushButton_1->setIcon(QIcon(":/new/prefix1/img/exp1.png"));
    ui->pushButton_2->setIcon(QIcon(":/new/prefix1/img/exp2.png"));
    ui->pushButton_3->setIcon(QIcon(":/new/prefix1/img/exp3.png"));
    ui->pushButton_4->setIcon(QIcon(":/new/prefix1/img/exp4.png"));
    ui->pushButton_5->setIcon(QIcon(":/new/prefix1/img/exp5.png"));
    ui->pushButton_6->setIcon(QIcon(":/new/prefix1/img/exp6.png"));
    ui->pushButton_1->setIconSize(QSize(80, 80));
    ui->pushButton_2->setIconSize(QSize(80, 80));
    ui->pushButton_3->setIconSize(QSize(80, 80));
    ui->pushButton_4->setIconSize(QSize(80, 80));
    ui->pushButton_5->setIconSize(QSize(80, 80));
    ui->pushButton_6->setIconSize(QSize(80, 80));
    ui->logo->setSizeIncrement(50,50);
    ui->logo->setIcon(QIcon(":/new/prefix1/img/logo.jpg"));
    ui->logo->setIconSize(QSize(100,100));

}

expression::~expression()
{
    delete ui;
}

void expression::on_pushButton_1_clicked()
{
    QString message="exp1.png";
    emit send_emoj_1(message);
}

void expression::on_pushButton_2_clicked()
{
    QString message="exp2.png";
    emit send_emoj_1(message);
}

void expression::on_pushButton_3_clicked()
{
    QString message="exp3.png";
    emit send_emoj_1(message);
}

void expression::on_pushButton_4_clicked()
{
    QString message="exp4.png";
    emit send_emoj_1(message);
}

void expression::on_pushButton_5_clicked()
{
    QString message="exp5.png";
    emit send_emoj_1(message);
}

void expression::on_pushButton_6_clicked()
{
    QString message="exp6.png";
    emit send_emoj_1(message);
}



