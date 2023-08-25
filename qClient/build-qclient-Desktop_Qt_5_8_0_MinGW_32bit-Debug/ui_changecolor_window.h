/********************************************************************************
** Form generated from reading UI file 'changecolor_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECOLOR_WINDOW_H
#define UI_CHANGECOLOR_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeColor_Window
{
public:
    QWidget *widget;
    QPushButton *logo;
    QTextEdit *textEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *black;
    QPushButton *blue;
    QPushButton *yellow;
    QPushButton *red;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *ChangeColor_Window)
    {
        if (ChangeColor_Window->objectName().isEmpty())
            ChangeColor_Window->setObjectName(QStringLiteral("ChangeColor_Window"));
        ChangeColor_Window->resize(500, 400);
        ChangeColor_Window->setMinimumSize(QSize(500, 400));
        ChangeColor_Window->setMaximumSize(QSize(500, 400));
        ChangeColor_Window->setStyleSheet(QStringLiteral("background:rgb(245,245,245);"));
        widget = new QWidget(ChangeColor_Window);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 501, 131));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QLatin1String("background-color: rgb(7,193,96);\n"
""));
        logo = new QPushButton(widget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(30, 20, 50, 50));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(50, 50));
        logo->setMaximumSize(QSize(50, 50));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(100, 20, 151, 51));
        textEdit->setStyleSheet(QLatin1String("border:none;\n"
"font: 9pt \"Eras Bold ITC\";"));
        gridLayoutWidget = new QWidget(ChangeColor_Window);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 160, 501, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        black = new QPushButton(gridLayoutWidget);
        black->setObjectName(QStringLiteral("black"));
        black->setMinimumSize(QSize(81, 81));
        black->setMaximumSize(QSize(81, 81));
        black->setStyleSheet(QStringLiteral("background-color: rgb(46,46,46);"));

        gridLayout->addWidget(black, 0, 1, 1, 1);

        blue = new QPushButton(gridLayoutWidget);
        blue->setObjectName(QStringLiteral("blue"));
        blue->setMinimumSize(QSize(81, 81));
        blue->setMaximumSize(QSize(81, 81));
        blue->setStyleSheet(QStringLiteral("background-color: rgb(94, 97, 255);"));

        gridLayout->addWidget(blue, 0, 3, 1, 1);

        yellow = new QPushButton(gridLayoutWidget);
        yellow->setObjectName(QStringLiteral("yellow"));
        yellow->setMinimumSize(QSize(81, 81));
        yellow->setMaximumSize(QSize(81, 81));
        yellow->setStyleSheet(QStringLiteral("background-color: rgb(247, 255, 90);"));

        gridLayout->addWidget(yellow, 0, 5, 1, 1);

        red = new QPushButton(gridLayoutWidget);
        red->setObjectName(QStringLiteral("red"));
        red->setMinimumSize(QSize(81, 81));
        red->setMaximumSize(QSize(81, 81));
        red->setStyleSheet(QStringLiteral("background-color:rgb(255, 105, 105);"));

        gridLayout->addWidget(red, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 8, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(100, 16777215));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\261\211\344\273\252\345\260\232\345\267\215\346\211\213\344\271\246W\";"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\261\211\344\273\252\345\260\232\345\267\215\346\211\213\344\271\246W\";"));

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\261\211\344\273\252\345\260\232\345\267\215\346\211\213\344\271\246W\";"));

        gridLayout->addWidget(label_3, 1, 5, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\261\211\344\273\252\345\260\232\345\267\215\346\211\213\344\271\246W\";"));

        gridLayout->addWidget(label_4, 1, 7, 1, 1);


        retranslateUi(ChangeColor_Window);

        QMetaObject::connectSlotsByName(ChangeColor_Window);
    } // setupUi

    void retranslateUi(QDialog *ChangeColor_Window)
    {
        ChangeColor_Window->setWindowTitle(QApplication::translate("ChangeColor_Window", "Dialog", Q_NULLPTR));
        logo->setText(QString());
        textEdit->setHtml(QApplication::translate("ChangeColor_Window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Eras Bold ITC'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">YourTalk</span></p></body></html>", Q_NULLPTR));
        black->setText(QString());
        blue->setText(QString());
        yellow->setText(QString());
        red->setText(QString());
        label->setText(QApplication::translate("ChangeColor_Window", "<html><head/><body><p align=\"center\">\347\273\217</p><p align=\"center\">\345\205\270</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChangeColor_Window", "<html><head/><body><p align=\"center\">\346\230\237</p><p align=\"center\">\347\251\272</p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChangeColor_Window", "<html><head/><body><p align=\"center\">\347\233\233</p><p align=\"center\">\345\244\217</p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("ChangeColor_Window", "<html><head/><body><p align=\"center\">\345\205\203</p><p align=\"center\">\346\260\224</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeColor_Window: public Ui_ChangeColor_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECOLOR_WINDOW_H
