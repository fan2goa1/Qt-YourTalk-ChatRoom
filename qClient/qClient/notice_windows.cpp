#include "notice_windows.h"
#include "ui_notice_windows.h"

Notice_windows::Notice_windows(Chat_windows * cw) :
    ui(new Ui::Notice_windows),
    chat_window(cw)

{
    ui->setupUi(this);
}

Notice_windows::~Notice_windows()
{
    delete ui;
}

void Notice_windows::on_pushButton_clicked()
{
    chat_window->show();
    this->close();
}
void Notice_windows::setButtonText(QString str)
{
    ui->pushButton->setText(str);
}
