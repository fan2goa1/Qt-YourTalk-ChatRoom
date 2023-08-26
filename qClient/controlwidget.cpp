#include "controlwidget.h"
#include "ui_controlwidget.h"
#include <QPoint>
#include "screen.h"
#include <QDebug>
#include <QApplication>
#include <QClipboard>

ControlWidget::ControlWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlWidget),
    screen(NULL)
{
    ui->setupUi(this);
    connectSignalAndSlot();
    ui->cancelBtn->setIcon(QIcon(":/new/prefix1/img/prtsc_close.svg"));
    ui->drawLineBtn->setIcon(QIcon(":/new/prefix1/img/prtsc_draw.svg"));
    ui->finishBtn->setIcon(QIcon(":/new/prefix1/img/prtsc_click.svg"));
}

void ControlWidget::connectSignalAndSlot()
{
    connect(ui->cancelBtn, SIGNAL(clicked()), this, SLOT(cancelBtn_slot()));
    connect(ui->finishBtn, SIGNAL(clicked()), this, SLOT(finishBtn_slot()));
}
//撤销截图按钮
void ControlWidget::cancelBtn_slot()
{
    if( screen )
    {
        screen->close();
        screen->Exit();
    }
}

//保存并发送
void ControlWidget::finishBtn_slot()
{
    screen->savePixmap();
    cancelBtn_slot();
}

//保存Screen类的引用
void ControlWidget::setScreenQuote(Screen *screen)
{
    this->screen = screen;
}

ControlWidget::~ControlWidget()
{
    delete ui;
}

void ControlWidget::on_drawLineBtn_clicked()
{
    screen->drawline();
}
