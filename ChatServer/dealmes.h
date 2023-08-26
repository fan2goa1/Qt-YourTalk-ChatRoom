#ifndef DEALMES_H
#define DEALMES_H

#include <QObject>
#include<QTcpServer>
#include<QTcpSocket>
#include<QDebug>
#include<QMessageBox>
#include<QSqlError>
#include<QSqlQuery>
#include<QSqlDatabase>
class DealMes : public QObject
{
    Q_OBJECT
public:
    explicit DealMes(QObject *parent = nullptr);
    bool IsOnline(QString id);//判断用户是否在线
    int GetHandleOfId(QString id);//获取用户现在的handle号
    void deal_09( int handle,QTcpSocket * tcpsocket);//将消息发给 tcpsocket
    QString getID(int handle);
signals:

};

#endif // DEALMES_H
