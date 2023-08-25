#ifndef PERSONLISTBUDDY_H
#define PERSONLISTBUDDY_H
#include <QWidget>
#include <QLabel>
#include <QEvent>
//自定义信息Item类
class personListBuddy : public QWidget
{
    Q_OBJECT
public:
    explicit personListBuddy(QWidget *parent = 0);
    void initUi();//初始化Ui
    QWidget *head;  //头像
    QLabel *name;  //用户名
    QLabel *sign;  //个性签名
    QString headPath;//头像路径
    bool eventFilter(QObject *obj, QEvent *event);//事件过滤器

signals:

public slots:

};
#endif // PERSONLISTBUDDY_H
