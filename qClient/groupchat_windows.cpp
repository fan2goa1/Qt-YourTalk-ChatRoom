#include "groupchat_windows.h"
#include "ui_groupchat_windows.h"

Groupchat_windows::Groupchat_windows(QTcpSocket * tcpsocket):
    ui(new Ui::Groupchat_windows),tcpSocket(tcpsocket)
{
    ui->setupUi(this);

    //设置工具栏图标
    ui->send_file->setIcon(QIcon(":/new/prefix1/img/folder.svg"));
    ui->emoji->setIcon(QIcon(":/new/prefix1/img/emoji.svg"));
    ui->prtsc->setIcon(QIcon(":/new/prefix1/img/prtsc.svg"));
    ui->history->setIcon(QIcon(":/new/prefix1/img/history.svg"));
    QShortcut *key=new QShortcut(QKeySequence(Qt::Key_Return),this);//创建一个快捷键"Key_Return"键
    connect(key,SIGNAL(activated()),this,SLOT(on_pushButton_clicked()));//连接到指定槽函数
}

Groupchat_windows::~Groupchat_windows()
{
    delete ui;
}

//变换颜色
void Groupchat_windows::ChangeColor(QString color)
{
    if(color == "blue")
    {
        ui->listWidget->setStyleSheet("background-color:rgb(231,230,249);"
                                      "border:none;");
        ui->textEditWrite->setStyleSheet("background-color:rgb(231,230,249);"
                                    "border:none;");
        ui->widget->setStyleSheet("background-color:rgb(231,230,249)");
        ui->widget_2->setStyleSheet("background-color:rgb(231,230,249)");
        ui->widget_3->setStyleSheet("background-color:rgb(231,230,249)");
        ui->listWidgetGroupNumbers->setStyleSheet("background-color:rgb(231,230,249);"
                                                  "border:none;"
                                                  "font: 16pt \"Eras Demi ITC\";");
        ui->pushButton->setStyleSheet("QPushButton#pushButton{"
                                "font: 11pt \"幼圆\";"
                                "color:rgb(54,46,205);"
                                "background-color: rgb(202,200,242);"
                                "border:none;"
                                "}"
                                "QPushButton#pushButton:hover{"
                                "background-color: rgb(183, 183, 183);"
                                "}");
    }
    if(color == "red")
    {
        ui->listWidget->setStyleSheet("background-color:rgb(249,223,227);"
                                      "border:none;");
        ui->textEditWrite->setStyleSheet("background-color:rgb(249,223,227);"
                                    "border:none;");
        ui->widget->setStyleSheet("background-color:rgb(249,223,227)");
        ui->widget_2->setStyleSheet("background-color:rgb(249,223,227)");
        ui->widget_3->setStyleSheet("background-color:rgb(249,223,227)");
        ui->listWidgetGroupNumbers->setStyleSheet("background-color:rgb(249,223,227);"
                                                  "border:none;"
                                                  "font: 16pt \"Eras Demi ITC\";");
        ui->pushButton->setStyleSheet("QPushButton#pushButton{"
                                "font: 11pt \"幼圆\";"
                                "color:rgb(188,35,62);"
                                "background-color: rgb(244,198,205);"
                                "border:none;"
                                "}"
                                "QPushButton#pushButton:hover{"
                                "background-color: rgb(183, 183, 183);"
                                "}");
    }
    if(color == "yellow")
    {
        ui->listWidget->setStyleSheet("background-color:rgb(255,247,183);"
                                      "border:none;");
        ui->textEditWrite->setStyleSheet("background-color:rgb(255,247,183);"
                                    "border:none;");
        ui->widget->setStyleSheet("background-color:rgb(255,247,183)");
        ui->widget_2->setStyleSheet("background-color:rgb(255,247,183)");
        ui->widget_3->setStyleSheet("background-color:rgb(255,247,183)");
        ui->listWidgetGroupNumbers->setStyleSheet("background-color:rgb(255,247,183);"
                                                  "border:none;"
                                                  "font: 16pt \"Eras Demi ITC\";");
        ui->pushButton->setStyleSheet("QPushButton#pushButton{"
                                "font: 11pt \"幼圆\";"
                                "color:rgb(176,138,23);"
                                "background-color: rgb(244,220,123);"
                                "border:none;"
                                "}"
                                "QPushButton#pushButton:hover{"
                                "background-color: rgb(183, 183, 183);"
                                "}");
    }
    if(color == "black")
    {
        ui->listWidget->setStyleSheet("background-color:rgb(245,245,245);"
                                      "border:none;");
        ui->textEditWrite->setStyleSheet("background-color:rgb(245,245,245);"
                                    "border:none;");
        ui->widget->setStyleSheet("background-color:rgb(245,245,245)");
        ui->widget_2->setStyleSheet("background-color:rgb(245,245,245)");
        ui->widget_3->setStyleSheet("background-color:rgb(245,245,245)");
        ui->listWidgetGroupNumbers->setStyleSheet("background-color:rgb(245,245,245);"
                                                  "border:none;"
                                                  "font: 16pt \"Eras Demi ITC\";");
        ui->pushButton->setStyleSheet("QPushButton#pushButton{"
                                "font: 11pt \"幼圆\";"
                                "color:rgb(40,199,123);"
                                "background-color: rgb(233,233,233);"
                                "border:none;"
                                "}"
                                "QPushButton#pushButton:hover{"
                                "background-color: rgb(183, 183, 183);"
                                "}");
    }
}

void Groupchat_windows::set3LineEidt(QString groupname,QString managername,QString yourid)
{
    group_name = groupname;
    manager_name = managername;
    your_id = yourid;
}
void Groupchat_windows::addgroupmember(QString yourid)
{
    QListWidgetItem * item=new QListWidgetItem;
    item->setText(yourid);
    ui->listWidgetGroupNumbers->addItem(item);
}

void Groupchat_windows::on_pushButton_clicked()
{
    QString  groupname=group_name;
    QString  sendername=your_id;
    QString  message=ui->textEditWrite->toPlainText();
    QString  nowtime=(QDateTime::currentDateTime()).toString("yyyy-MM-dd hh:mm::ss");
    QString  str="#25#/"+groupname+"/"+sendername+"/"+message+"/"+nowtime;
    tcpSocket->write(str.toUtf8().data());

    this->addMessageToTextEdit(message,QNChatMessage::User_Me,1,headPhotoNumber);
    ui->textEditWrite->clear();
}
 void Groupchat_windows::addMessageToReadText(QString str)
 {
     QString str_1=str.section('/',1,1);//群名
     QString str_2=str.section('/',2,2);//发送者名字
     QString str_3=str.section('/',3,3);//消息
     QString str_4=str.section('/',4,4);//时间
 }
 void Groupchat_windows::dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type)
 {
     messageW->setFixedWidth(this->width());
     QSize size = messageW->fontRect(text,0);
     item->setSizeHint(size);
     messageW->setText(text, time, size, type);
     ui->listWidget->setItemWidget(item, messageW);
 }
 void Groupchat_windows::dealMessageTime(QString curMsgTime)
 {
     bool isShowTime = false;
     if(ui->listWidget->count() > 0) {
         QListWidgetItem* lastItem = ui->listWidget->item(ui->listWidget->count() - 1);
         QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(lastItem);
         int lastTime = messageW->time().toInt();
         int curTime = curMsgTime.toInt();
         qDebug() << "curTime lastTime:" << curTime - lastTime;
         isShowTime = ((curTime - lastTime) > 60); // 两个消息相差一分钟
     } else {
         isShowTime = true;
     }
     if(isShowTime) {
         QNChatMessage* messageTime = new QNChatMessage(ui->listWidget->parentWidget());
         QListWidgetItem* itemTime = new QListWidgetItem(ui->listWidget);

         QSize size = QSize(this->width(), 40);
         messageTime->resize(size);
         itemTime->setSizeHint(size);
         messageTime->setText(curMsgTime, curMsgTime, size, QNChatMessage::User_Time);
         ui->listWidget->setItemWidget(itemTime, messageTime);
     }
 }
 void Groupchat_windows::addMessageToTextEdit(QString str,QNChatMessage::User_Type type,int leftphoto,int rightphoto)
 {
     QString msg = str;

     QString time = QString::number(QDateTime::currentDateTime().toTime_t()); //时间戳

     bool isSending = true; // 发送中

     qDebug()<<"addMessage" << msg << time << ui->listWidget->count();
     if(type==QNChatMessage::User_Me)
     {
         if(isSending)
         {
             dealMessageTime(time);

             QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
             QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

             QString str_left=returnPhotoPath(leftphoto);
             QString str_right=returnPhotoPath(rightphoto);
             messageW->m_leftPixmap=QPixmap(str_left);
             messageW->m_rightPixmap=QPixmap(str_right);

             dealMessage(messageW, item, msg, time, QNChatMessage::User_Me);
         }
         else
         {
             bool isOver = true;
             for(int i = ui->listWidget->count() - 1; i > 0; i--)
             {
                 QNChatMessage* messageW = (QNChatMessage*)ui->listWidget->itemWidget(ui->listWidget->item(i));
                 if(messageW->text() == msg)
                 {
                     isOver = false;
                 }
             }
             if(isOver)
             {
                 dealMessageTime(time);

                 QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
                 QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

                 QString str_left=returnPhotoPath(leftphoto);
                 QString str_right=returnPhotoPath(rightphoto);
                 messageW->m_leftPixmap=QPixmap(str_left);
                 messageW->m_rightPixmap=QPixmap(str_right);

                 dealMessage(messageW, item, msg, time, QNChatMessage::User_Me);
             }
         }
     }
     else if(type==QNChatMessage::User_She)
     {
         if(msg != "")
         {
             dealMessageTime(time);
             QNChatMessage* messageW = new QNChatMessage(ui->listWidget->parentWidget());
             QListWidgetItem* item = new QListWidgetItem(ui->listWidget);

             QString str_left=returnPhotoPath(leftphoto);
             QString str_right=returnPhotoPath(rightphoto);
             messageW->m_leftPixmap=QPixmap(str_left);
             messageW->m_rightPixmap=QPixmap(str_right);

             dealMessage(messageW, item, msg, time, QNChatMessage::User_She);
         }
     }
     ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
 }

QString Groupchat_windows::returnPhotoPath(int i)
{
    return ":/new/prefix1/img/head.jpg";
}
