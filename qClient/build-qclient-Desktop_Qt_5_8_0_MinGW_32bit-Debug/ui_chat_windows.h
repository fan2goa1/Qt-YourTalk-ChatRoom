/********************************************************************************
** Form generated from reading UI file 'chat_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_WINDOWS_H
#define UI_CHAT_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat_windows
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QPushButton *emoji;
    QPushButton *send_file;
    QPushButton *send_img;
    QPushButton *prtsc;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *Send;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *textEdit;

    void setupUi(QWidget *Chat_windows)
    {
        if (Chat_windows->objectName().isEmpty())
            Chat_windows->setObjectName(QStringLiteral("Chat_windows"));
        Chat_windows->resize(651, 521);
        gridLayout_2 = new QGridLayout(Chat_windows);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(1);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(Chat_windows);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QLatin1String("border:none;\n"
"background-color: rgb(245,245,245);\n"
""));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        widget_2 = new QWidget(Chat_windows);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 220));
        widget_2->setMaximumSize(QSize(16777215, 220));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(245,245,245);"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(0, 50));
        widget_3->setMaximumSize(QSize(16777215, 50));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(245,245,245);"));
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(10, 0, 0, 0);
        emoji = new QPushButton(widget_3);
        emoji->setObjectName(QStringLiteral("emoji"));
        emoji->setMinimumSize(QSize(50, 50));
        emoji->setMaximumSize(QSize(50, 50));
        emoji->setStyleSheet(QLatin1String("QPushButton#emoji{\n"
"border:none;\n"
"}\n"
"QPushButton#emoji:hover{\n"
"background-color: rgb(208, 208, 208);\n"
"border:none;\n"
"}\n"
"QPushiButton#emoji:pressed{\n"
"background-color: rgb(157, 157, 157);\n"
"border:none;\n"
"}"));

        gridLayout_4->addWidget(emoji, 0, 0, 1, 1);

        send_file = new QPushButton(widget_3);
        send_file->setObjectName(QStringLiteral("send_file"));
        send_file->setMinimumSize(QSize(50, 50));
        send_file->setMaximumSize(QSize(50, 50));
        send_file->setStyleSheet(QLatin1String("QPushButton#send_file{\n"
"border:none;\n"
"}\n"
"QPushButton#send_file:hover{\n"
"background-color: rgb(208, 208, 208);\n"
"border:none;\n"
"}\n"
"QPushiButton#send_file:pressed{\n"
"background-color: rgb(157, 157, 157);\n"
"border:none;\n"
"}"));

        gridLayout_4->addWidget(send_file, 0, 1, 1, 1);

        send_img = new QPushButton(widget_3);
        send_img->setObjectName(QStringLiteral("send_img"));
        send_img->setMinimumSize(QSize(50, 50));
        send_img->setMaximumSize(QSize(50, 50));
        send_img->setStyleSheet(QLatin1String("QPushButton#send_img{\n"
"border:none;\n"
"}\n"
"QPushButton#send_img:hover{\n"
"background-color: rgb(208, 208, 208);\n"
"border:none;\n"
"}\n"
"QPushiButton#send_img:pressed{\n"
"background-color: rgb(157, 157, 157);\n"
"border:none;\n"
"}"));

        gridLayout_4->addWidget(send_img, 0, 2, 1, 1);

        prtsc = new QPushButton(widget_3);
        prtsc->setObjectName(QStringLiteral("prtsc"));
        prtsc->setMinimumSize(QSize(50, 50));
        prtsc->setMaximumSize(QSize(50, 50));
        prtsc->setStyleSheet(QLatin1String("QPushButton#prtsc{\n"
"border:none;\n"
"}\n"
"QPushButton#prtsc:hover{\n"
"background-color: rgb(208, 208, 208);\n"
"border:none;\n"
"}\n"
"QPushiButton#prtsc:pressed{\n"
"background-color: rgb(157, 157, 157);\n"
"border:none;\n"
"}"));

        gridLayout_4->addWidget(prtsc, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        gridLayout->addWidget(widget_3, 0, 0, 1, 2);

        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 50));
        widget->setMaximumSize(QSize(16777215, 50));
        widget->setStyleSheet(QLatin1String("QWidget#widget{background-color: rgb(245,245,245);}\n"
""));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 5, 20, 5);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        Send = new QPushButton(widget);
        Send->setObjectName(QStringLiteral("Send"));
        Send->setMinimumSize(QSize(100, 30));
        Send->setMaximumSize(QSize(100, 30));
        Send->setStyleSheet(QString::fromUtf8("QPushButton#Send{\n"
"font: 11pt \"\345\271\274\345\234\206\";\n"
"color:rgb(40,199,123);\n"
"background-color: rgb(233,233,233);\n"
"border:none;\n"
"}\n"
"QPushButton#Send:hover{\n"
"background-color: rgb(183, 183, 183);\n"
"}"));

        gridLayout_3->addWidget(Send, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 2, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(10);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QLatin1String("border:none;\n"
"background-color: rgb(245,245,245);\n"
"left-margin: 10px;"));

        gridLayout->addWidget(textEdit, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(Chat_windows);

        QMetaObject::connectSlotsByName(Chat_windows);
    } // setupUi

    void retranslateUi(QWidget *Chat_windows)
    {
        Chat_windows->setWindowTitle(QApplication::translate("Chat_windows", "Form", Q_NULLPTR));
        emoji->setText(QString());
        send_file->setText(QString());
        send_img->setText(QString());
        prtsc->setText(QString());
        Send->setText(QApplication::translate("Chat_windows", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Chat_windows: public Ui_Chat_windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_WINDOWS_H
