#include "dealmes.h"

DealMes::DealMes(QObject *parent) : QObject(parent)
{

}
bool DealMes::IsOnline(QString id)//判断用户是否在线
{
    QSqlQuery query;//数据库操作者
    QString str=QString("select * from onlineclient where id='%1'").arg(id);
    query.exec(str);
    if(query.next())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int DealMes::GetHandleOfId(QString id)//获取用户现在的handle号
{
    QSqlQuery query;//数据库操作者
    QString str=QString("select * from onlineclient where id='%1'").arg(id);
    query.exec(str);
    if(query.next())
    {
        return query.value(0).toInt();
    }
    else
    {
        return -1;
    }
}

void DealMes::deal_09(int handle,QTcpSocket * tcpsocket)
{

    QSqlQuery query;//数据库操作者
    QString  str_1=getID(handle);

    //读取所有聊天内容
    QString cmd_3=QString("select * from allmessage where sender='%1' or receiver='%2'").arg(str_1).arg(str_1);
    query.exec(cmd_3);
    QString str_6="#09#";
    while(query.next())
    {
        str_6+="/"+query.value(0).toString()+"/"+query.value(1).toString()+"/"+query.value(2).toString()+"/"+query.value(3).toString();
    }
    tcpsocket->write(str_6.toUtf8().data());
    tcpsocket->flush();

}
QString DealMes::getID(int handle)
{
    QSqlQuery query;//数据库操作者
    QString str=QString("select * from onlineclient where handle=%1").arg(handle);
    query.exec(str);
    if(query.next())
    {
        return query.value(1).toString();
    }
    else
    {
        return "";
    }
}
