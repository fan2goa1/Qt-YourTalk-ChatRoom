#ifndef CELL_MAIN_H
#define CELL_MAIN_H

#include <QWidget>
#include <QPoint>
#include <QTcpSocket>
#include <QHostAddress>
#include "chat_windows.h"
#include "friend_windows.h"

namespace Ui {
class Cell_Main;
}

class Cell_Main : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_Main(QTcpSocket *tcpsocket);
    ~Cell_Main();

    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

    enum BorderIndex{
        BORDER_NONE,
        BORDER_TOP,
        BORDER_BOTTOM,
        BORDER_LEFT,
        BORDER_RIGHT,
        BORDER_TOP_LEFT,
        BORDER_TOP_RIGHT,
        BORDER_BOTTOM_LEFT,
        BORDER_BOTTOM_RIGHT,
    };

    QTcpSocket *tcpSocket;

    BorderIndex CalculateBorderIndex(QPoint pos);
    void SetCursorByRegoinIndex(BorderIndex region_index);
    void ChangeColor(QString color);    //调整主题颜色

    //槽函数接口
    void slot_maximize();
    Friend_Windows *wfriend = NULL;    //创建聊天窗口

private:
    Ui::Cell_Main *ui;
    bool m_ispressed = false;
    bool is_left_button_pressed = false;
    BorderIndex cur_region_index_ = BORDER_NONE;
    QPoint m_winpoint;
    QPoint press;
    int min_height = 620;
    int min_width = 870;
    bool is_max = false;    //标记窗口当前状态是否为全屏
    Chat_windows *cur_chat_fri = NULL;
    Groupchat_windows *cur_chat_gro = NULL;
    QString chat_name;
    QString win_color;

signals:
    void sig_clickAdd();
    void sig_clickChange();

};

#endif // CELL_MAIN_H
