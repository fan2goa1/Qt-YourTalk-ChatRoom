#include "tcpsocket.h"

TcpSocket::TcpSocket(const int handle) :m_handle(handle)
{
    this->setSocketDescriptor(m_handle);
    //若接收到信息，执行slot_readData槽函数
    connect(this,&TcpSocket::readyRead,this,&TcpSocket::slot_readData);
    //若断开连接，则执行slot_disconnect槽函数
    connect(this,&TcpSocket::disconnected,this,&TcpSocket::slot_disconnect);
}

void TcpSocket::slot_disconnect()
{
    //发送断开连接信息和handle号
    emit sig_disconnect(m_handle);
}

void TcpSocket::slot_readData()
{
    //读取信息到data
    QByteArray data = readAll();
    //发送接收信息及handle号
    emit sig_readyRead(m_handle, data);
}
