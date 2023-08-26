#ifndef QNCHATMESSAGE_H
#define QNCHATMESSAGE_H

#include <QWidget>

class QPaintEvent;
class QPainter;
class QLabel;
class QMovie;

class QNChatMessage : public QWidget
{
    Q_OBJECT
public:
    explicit QNChatMessage(QWidget *parent = nullptr);

    enum User_Type{
        User_System,
        User_Me,
        User_She,
        User_Time,
    };
    void setText(QString text, QString time, QSize allSize, User_Type userType);

    QSize getRealString(QString src);
    QSize fontRect(QString str, int a = 0);

    inline QString text() {return m_msg;}
    inline QString time() {return m_time;}
    inline User_Type userType() {return m_userType;}

    QPixmap m_leftPixmap;
    QPixmap m_rightPixmap;
protected:
    void paintEvent(QPaintEvent *event);
    void paintDocument(QPaintEvent *event);
    void paintEvent(QPaintEvent *, int a, int b, int c, int d, QString str = ":/new/prefix1/img/file_pic.png");
private:
    QString m_msg;
    QString m_time;
    QString m_curTime;

    QSize m_allSize;
    User_Type m_userType = User_System;

    int m_kuangWidth;
    int m_textWidth;
    int m_spaceWid;
    int m_lineHeight;

    QRect m_iconLeftRect;
    QRect m_iconRightRect;
    QRect m_sanjiaoLeftRect;
    QRect m_sanjiaoRightRect;
    QRect m_kuangLeftRect;
    QRect m_kuangRightRect;
    QRect m_textLeftRect;
    QRect m_textRightRect;

    QLabel* m_loading = Q_NULLPTR;
    QMovie* m_loadingMovie = Q_NULLPTR;
    bool m_isSending = false;

    int flag = 0;
};

#endif // QNCHATMESSAGE_H
