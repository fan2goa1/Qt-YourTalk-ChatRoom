#include "changecolor_window.h"
#include "ui_changecolor_window.h"

ChangeColor_Window::ChangeColor_Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeColor_Window)
{
    ui->setupUi(this);
    ui->logo->setSizeIncrement(50,50);
    ui->logo->setIcon(QIcon(":/new/prefix1/img/logo.jpg"));
    ui->logo->setIconSize(QSize(100,100));
}

ChangeColor_Window::~ChangeColor_Window()
{
    delete ui;
}

void ChangeColor_Window::on_blue_clicked()
{
    ui->widget->setStyleSheet("background-color:rgb(54,46,205);"
                              "border:none;");
    emit sig_color(QString("blue"));
}
void ChangeColor_Window::on_black_clicked()
{
    ui->widget->setStyleSheet("background-color:rgb(7,193,96);"
                              "border:none;");
    emit sig_color(QString("black"));
}
void ChangeColor_Window::on_yellow_clicked()
{
    ui->widget->setStyleSheet("background-color:rgb(176,138,23);"
                              "border:none;");
    emit sig_color(QString("yellow"));
}
void ChangeColor_Window::on_red_clicked()
{
    ui->widget->setStyleSheet("background-color:rgb(188,35,62);"
                              "border:none;");
    emit sig_color(QString("red"));
}
