#include "tcpserver.h"

TcpServer::TcpServer()
{

}

void TcpServer::incomingConnection(qintptr handle)
{
    //创建TcpSocket对象，并对handle赋值
    TcpSocket *socket = new TcpSocket(handle);
    //断开连接，执行slot_disconnect槽函数
    connect(socket,SIGNAL(sig_disconnect(int)),this,SLOT(slot_disconnect(int)));
    //读取信息，执行slot_readData槽函数
    connect(socket,&TcpSocket::sig_readyRead,this,&TcpServer::slot_readData);
    //发送sig_connect信号
    emit sig_connect(handle, socket);
}

void TcpServer::slot_disconnect(int handle)
{
    //发送sig_disconnect信号
    emit sig_disconnect(handle);
}

void TcpServer::slot_readData(int handle, const QByteArray &data)
{
    //发送sig_readyRead信号
    emit sig_readyRead(handle, data);
}

