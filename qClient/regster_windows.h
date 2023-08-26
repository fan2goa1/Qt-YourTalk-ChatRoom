#ifndef REGSTER_WINDOWS_H
#define REGSTER_WINDOWS_H

#include <QWidget>
#include<QTcpSocket>
#include<QMessageBox>
#include <QShortcut>

namespace Ui {
class Regster_Windows;
}

class Regster_Windows : public QWidget
{
    Q_OBJECT

public:
    explicit Regster_Windows(QTcpSocket *tcpsocket);
    ~Regster_Windows();
    void regsterSuccess();
    void regterFailed();
private slots:
    void on_pushButtonRegster_clicked();

private:
    Ui::Regster_Windows *ui;
    QTcpSocket * tcpSocket;
};

#endif // REGSTER_WINDOWS_H
