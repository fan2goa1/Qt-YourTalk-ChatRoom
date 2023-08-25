#ifndef TCPSOCKET_H
#define TCPSOCKET_H

#include <QObject>
#include<QTcpSocket>

class TcpSocket : public QTcpSocket
{
    Q_OBJECT
public:
   TcpSocket(const int handle);
   void slot_readData();//读取数据

signals:
   void sig_disconnect(int);//客户端连接信号
   void sig_readyRead(int, const QByteArray&);//读取数据信号

private slots:
   void slot_disconnect();//断开连接槽函数

private:
    int m_handle;

};

#endif // TCPSOCKET_H
