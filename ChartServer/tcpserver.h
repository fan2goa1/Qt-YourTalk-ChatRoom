#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include "tcpsocket.h"

class TcpServer : public QTcpServer
{
    Q_OBJECT
public:
    TcpServer();
    virtual void incomingConnection(qintptr handle) override;

private slots:
    void slot_disconnect(int handle);
    void slot_readData(int handle, const QByteArray &data);

signals:
    void sig_disconnect(int);
    void sig_connect(int, QTcpSocket*);
    void sig_readyRead(int, const QByteArray &data);
private:

};

#endif // TCPSERVER_H
