#include "cell_main.h"
#include "ui_cell_main.h"
#include <QDebug>
#include <QMouseEvent>
#include <QRect>
#include <QList>
#include <QPoint>
#include <QRect>
#include <QSize>
#include "chat_windows.h"
#include "friend_windows.h"
#include <QGridLayout>


Cell_Main::Cell_Main(QTcpSocket *tcpsocket) :
    tcpSocket(tcpsocket),
    ui(new Ui::Cell_Main)
{
    ui->setupUi(this);

    ui->maximize->setIcon(QIcon(":/new/prefix1/img/Maximize-1.svg"));
    ui->minimize->setIcon(QIcon(":/new/prefix1/img/Minimize-1.svg"));
    ui->options->setIcon(QIcon(":/new/prefix1/img/Settings.svg"));
    ui->shutdown->setIcon(QIcon(":/new/prefix1/img/Shut down-1.svg"));
    ui->add->setIcon(QIcon(":/new/prefix1/img/add_friend.svg"));
    ui->change_color->setIcon(QIcon(":/new/prefix1/img/ChangeColor.svg"));
    ui->maximize->setIconSize(QSize(15, 15));
    ui->minimize->setIconSize(QSize(15, 15));
    ui->options->setIconSize(QSize(15, 15));
    ui->shutdown->setIconSize(QSize(15, 15));
    ui->add->setIconSize(QSize(30, 30));
    ui->change_color->setIconSize(QSize(30, 30));

    this->setWindowFlags(Qt::FramelessWindowHint);

    chat_name = QString("Your Talk!");
    ui->name->setText(chat_name);

    win_color = QString("black");

    QGridLayout *chat_layout = new QGridLayout;

    //关闭内存释放检测
//    connect(ui->shutdown, &QPushButton::clicked, this,[=](){

//        &QWidget::close;
//    });

   connect(ui->shutdown, &QPushButton::clicked, this, &QWidget::close);

    //设计按钮功能
    connect(ui->minimize, &QPushButton::clicked, this, &QWidget::showMinimized);
    connect(ui->maximize, &QPushButton::clicked, this, &Cell_Main::slot_maximize);
    connect(ui->add, &QPushButton::clicked, this, [=](){
        emit sig_clickAdd();
    });
    connect(ui->change_color, &QPushButton::clicked, this, [=](){
        emit sig_clickChange();
    });

    QObjectList child_object_list = ui->main_widget->children();       //需要 QList

    for (auto child_object : child_object_list)
    {
        if (child_object->isWidgetType()) { ((QWidget*)child_object)->setMouseTracking(true); }
    }
    ui->main_widget->setMouseTracking(true);
    setMouseTracking(true);

    //创建好友栏
    QGridLayout *layout = new QGridLayout;

    wfriend = new Friend_Windows(tcpSocket);
    layout->addWidget(wfriend, 0, 0);
    layout->setMargin(0);
    ui->friend_2->setLayout(layout);


    //friend_list点击选择好友之后要改变右侧窗口的聊天框
    connect(wfriend, &Friend_Windows::select_friend, this, [=](Chat_windows *win, QString cname){


        //先将当前已经打开的窗口隐藏
        if(cur_chat_fri != NULL)
        {
            cur_chat_fri->hide();
        }
        if(cur_chat_gro != NULL)
        {
            cur_chat_gro->hide();
        }
        win->ChangeColor(win_color);
        chat_layout->addWidget(win, 0, 0);
        chat_layout->setMargin(0);
        ui->chat->setLayout(chat_layout);
        win->show();
        chat_name = cname;
        ui->name->setText(chat_name);
        cur_chat_fri = win;
    });

    connect(wfriend, &Friend_Windows::select_group, this, [=](Groupchat_windows *win, QString cname){
        if(cur_chat_fri != NULL)
        {
            cur_chat_fri->hide();
        }
        if(cur_chat_gro != NULL)
        {
            cur_chat_gro->hide();
        }
        win->ChangeColor(win_color);
        chat_layout->addWidget(win, 0, 0);
        chat_layout->setMargin(0);
        ui->chat->setLayout(chat_layout);
        win->show();
        chat_name = cname;
        ui->name->setText(chat_name);
        cur_chat_gro = win;
    });

    ChangeColor("black");

}


void Cell_Main::ChangeColor(QString color)
{
    if(color == "blue")
    {
        ui->side_bar->setStyleSheet("QWidget#side_bar{background-color: rgb(54,46,205)}");
        ui->name_tag->setStyleSheet("QWidget#name_tag{background-color: rgb(231,230,249);}");
        ui->friend_2->setStyleSheet("QWidget#friend_2{background-color: rgb(231,230,249);}");
        ui->main_widget->setStyleSheet("QWidget#main_widget{background-color: rgb(202,200,242);}");
    }
    if(color == "yellow")
    {
        ui->side_bar->setStyleSheet("QWidget#side_bar{background-color: rgb(176,138,23)}");
        ui->name_tag->setStyleSheet("QWidget#name_tag{background-color: rgb(255,247,183);}");
        ui->friend_2->setStyleSheet("QWidget#friend_2{background-color: rgb(255,247,183);}");
        ui->main_widget->setStyleSheet("QWidget#main_widget{background-color: rgb(244,220,123);}");
    }
    if(color == "red")
    {
        ui->side_bar->setStyleSheet("QWidget#side_bar{background-color: rgb(188,35,62)}");
        ui->name_tag->setStyleSheet("QWidget#name_tag{background-color: rgb(249,223,227);}");
        ui->friend_2->setStyleSheet("QWidget#friend_2{background-color: rgb(249,223,227);}");
        ui->main_widget->setStyleSheet("QWidget#main_widget{background-color: rgb(244,198,205);}");
    }
    if(color == "black")
    {
        ui->side_bar->setStyleSheet("QWidget#side_bar{background-color: rgb(46,46,46)}");
        ui->name_tag->setStyleSheet("QWidget#name_tag{background-color: rgb(245,245,245);}");
        ui->friend_2->setStyleSheet("QWidget#friend_2{background-color: rgb(245,245,245);}");
        ui->main_widget->setStyleSheet("");
    }

    if(cur_chat_fri != NULL)
    {
        cur_chat_fri->Chat_windows::ChangeColor(color);
    }
    if(cur_chat_gro != NULL)
    {
        cur_chat_gro->Groupchat_windows::ChangeColor(color);
    }

    win_color = color;
}



//窗口最大化槽函数
void Cell_Main::slot_maximize()
{
    if(!is_max)
    {
        this->showMaximized();
        ui->maximize->setIcon(QIcon(":/new/prefix1/img/Maximize-3.svg"));
        is_max = true;
    }
    else
    {
        this->showNormal();
        ui->maximize->setIcon(QIcon(":/new/prefix1/img/Maximize-1.svg"));
        is_max = false;
    }
}


Cell_Main::BorderIndex Cell_Main::CalculateBorderIndex(QPoint pos)
{
    BorderIndex region_index = BORDER_NONE;

    int offset = 5;
    auto x = pos.x();
    auto y = pos.y();
    auto w = this->width();
    auto h = this->height();
    if (y <= offset && x > offset && x < w - offset) {
        region_index = BORDER_TOP;
    }
    else if (x <= offset && y > offset && y < h - offset) {
        region_index = BORDER_LEFT;
    }
    else if (x >= w - offset && y > offset && y < h - offset) {
        region_index = BORDER_RIGHT;
    }
    else if (y >= h - offset && x > offset && x < w - offset) {
        region_index = BORDER_BOTTOM;
    }
    else if (x >= -offset && x < offset && y >= -offset && y < offset) {
        region_index = BORDER_TOP_LEFT;
    }
    else if (x > w - offset && x <= w + offset && y >= -offset && y < offset) {
        region_index = BORDER_TOP_RIGHT;
    }
    else if (x >= -offset && x < offset && y > h - offset && y <= h + offset) {
        region_index = BORDER_BOTTOM_LEFT;
    }
    else if (x > w - offset && x <= w + offset && y > h - offset && y <= h + offset) {
        region_index = BORDER_BOTTOM_RIGHT;
    }
    else
    {
        region_index = BORDER_NONE;
    }

    return region_index;
}

void Cell_Main::SetCursorByRegoinIndex(BorderIndex region_index)
{
    switch (region_index) {
        case BORDER_TOP:
        case BORDER_BOTTOM:
          this->setCursor(Qt::SizeVerCursor);
          break;
        case BORDER_LEFT:
        case BORDER_RIGHT:
          this->setCursor(Qt::SizeHorCursor);
          break;
        case BORDER_TOP_LEFT:
        case BORDER_BOTTOM_RIGHT:
          this->setCursor(Qt::SizeFDiagCursor);
          break;
        case BORDER_TOP_RIGHT:
        case BORDER_BOTTOM_LEFT:
          this->setCursor(Qt::SizeBDiagCursor);
          break;
        default:
          this->setCursor(Qt::ArrowCursor);
          break;
      }
}






void Cell_Main::mouseMoveEvent(QMouseEvent *event)
{

    //在边界时改变鼠标样式
    if(!is_left_button_pressed)
    {
        qDebug() << event->pos();
        cur_region_index_ = CalculateBorderIndex(event->pos());
        SetCursorByRegoinIndex(cur_region_index_);
    }

    //挪动窗口
    if(m_ispressed)
    {
        auto v = mapToGlobal(event->pos()) - press;         //press 是刚按下时鼠标的global位置，event->pos() 是实时位置
        auto r = m_winpoint;
        auto x = v.x()+r.x();
        auto y = v.y()+r.y();
        this->move(x,y);
    }

    //改变窗口大小
    if(is_left_button_pressed)
    {
        QRect wid(this->geometry().topLeft(), this->geometry().bottomRight());
        QPoint global_pos = mapToGlobal(event->pos());

        qDebug() << global_pos.x() << ", " << global_pos.y() << endl;

        switch (cur_region_index_) {
                case BORDER_TOP: {
                  wid.setTop(wid.bottom() - global_pos.y() > min_height ? global_pos.y() : wid.top());
                  setGeometry(wid);
                } break;
                case BORDER_TOP_LEFT: {
                  wid.setTop(wid.bottom() - global_pos.y() > min_height ? global_pos.y() : wid.top());
                  wid.setLeft(wid.right() - global_pos.x() > min_width ? global_pos.x() : wid.left());
                  setGeometry(wid);
                } break;
                case BORDER_TOP_RIGHT: {
                  wid.setTop(wid.bottom() - global_pos.y() > min_height ? global_pos.y() : wid.top());
                  wid.setRight(global_pos.x() - wid.left() > min_width ? global_pos.x() : wid.left() + min_width - 1);
                  setGeometry(wid);
                } break;
                case BORDER_LEFT: {
                  wid.setLeft(wid.right() - global_pos.x() > min_width ? global_pos.x() : wid.left());
                  setGeometry(wid);
                } break;
                case BORDER_RIGHT: {
                    wid.setRight(global_pos.x());
                    setGeometry(wid);
                } break;
                case BORDER_BOTTOM: {
                    wid.setBottom(global_pos.y());
                    setGeometry(wid);
                } break;
                case BORDER_BOTTOM_LEFT: {
                  wid.setBottom(global_pos.y() - wid.top() > min_height ? global_pos.y() : wid.bottom());
                  wid.setLeft(wid.right() - global_pos.x() > min_width ? global_pos.x() : wid.left());
                  setGeometry(wid);
                } break;
                case BORDER_BOTTOM_RIGHT: {
                    wid.setBottom(global_pos.y());
                    wid.setRight(global_pos.x());
                    setGeometry(wid);
                } break;
                default:
                  break;
        }
    }
}

void Cell_Main::mousePressEvent(QMouseEvent *event)
{
    auto rect = ui->name_tag->geometry();
    auto rect2 = ui->side_bar->geometry();
    auto p = event->pos();
    if((rect.contains(p) /*|| rect1.contains(p)*/ || rect2.contains(p)) && cur_region_index_ == BORDER_NONE)
    {
        m_ispressed = true;
        m_winpoint = this->geometry().topLeft();
        press = this->mapToGlobal(p);
    }

    else is_left_button_pressed = true;
}

void Cell_Main::mouseReleaseEvent(QMouseEvent *event)
{
        m_ispressed = false;
        is_left_button_pressed = false;
}



Cell_Main::~Cell_Main()
{
    delete ui;
}
