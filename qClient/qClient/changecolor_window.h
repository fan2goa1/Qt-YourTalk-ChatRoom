#ifndef CHANGECOLOR_WINDOW_H
#define CHANGECOLOR_WINDOW_H

#include <QDialog>
#include <QString>

namespace Ui {
class ChangeColor_Window;
}

class ChangeColor_Window : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeColor_Window(QWidget *parent = 0);
    ~ChangeColor_Window();

private:
    Ui::ChangeColor_Window *ui;

private slots:
    void on_blue_clicked();
    void on_yellow_clicked();
    void on_red_clicked();
    void on_black_clicked();


signals:
    void sig_color(QString color);
};

#endif // CHANGECOLOR_WINDOW_H
