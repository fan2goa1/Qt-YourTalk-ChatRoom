#ifndef NOTICE_WINDOWS_H
#define NOTICE_WINDOWS_H

#include <QWidget>
#include"chat_windows.h"
namespace Ui {
class Notice_windows;
}

class Notice_windows : public QWidget
{
    Q_OBJECT

public:
    Notice_windows(Chat_windows * cw);
    ~Notice_windows();
    void setButtonText(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Notice_windows *ui;
    Chat_windows * chat_window;
};

#endif // NOTICE_WINDOWS_H
