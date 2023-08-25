/********************************************************************************
** Form generated from reading UI file 'add_friend.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_FRIEND_H
#define UI_ADD_FRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_friend
{
public:
    QWidget *widget;
    QPushButton *logo;
    QTextEdit *textEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditGroupId;
    QLineEdit *lineEditFriendId;
    QPushButton *pushButtonIntoGroup;
    QPushButton *pushButtonGetNewFriend;
    QPushButton *pushButtonCreateGroup;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *add_friend)
    {
        if (add_friend->objectName().isEmpty())
            add_friend->setObjectName(QStringLiteral("add_friend"));
        add_friend->resize(499, 345);
        add_friend->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border:none;\n"
"	background:rgb(235,235,235);\n"
"}"));
        widget = new QWidget(add_friend);
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
        gridLayoutWidget = new QWidget(add_friend);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 160, 451, 125));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditGroupId = new QLineEdit(gridLayoutWidget);
        lineEditGroupId->setObjectName(QStringLiteral("lineEditGroupId"));
        sizePolicy.setHeightForWidth(lineEditGroupId->sizePolicy().hasHeightForWidth());
        lineEditGroupId->setSizePolicy(sizePolicy);
        lineEditGroupId->setMinimumSize(QSize(300, 40));
        lineEditGroupId->setStyleSheet(QStringLiteral("border-bottom-color:rgb(245,245,245)"));
        lineEditGroupId->setInputMethodHints(Qt::ImhNone);
        lineEditGroupId->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditGroupId, 1, 0, 1, 1);

        lineEditFriendId = new QLineEdit(gridLayoutWidget);
        lineEditFriendId->setObjectName(QStringLiteral("lineEditFriendId"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditFriendId->sizePolicy().hasHeightForWidth());
        lineEditFriendId->setSizePolicy(sizePolicy1);
        lineEditFriendId->setMinimumSize(QSize(300, 40));
        lineEditFriendId->setStyleSheet(QStringLiteral("border-bottom-color:rgb(245,245,245)"));

        gridLayout->addWidget(lineEditFriendId, 0, 0, 1, 1);

        pushButtonIntoGroup = new QPushButton(gridLayoutWidget);
        pushButtonIntoGroup->setObjectName(QStringLiteral("pushButtonIntoGroup"));
        sizePolicy.setHeightForWidth(pushButtonIntoGroup->sizePolicy().hasHeightForWidth());
        pushButtonIntoGroup->setSizePolicy(sizePolicy);
        pushButtonIntoGroup->setMinimumSize(QSize(100, 35));
        pushButtonIntoGroup->setMaximumSize(QSize(90, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        pushButtonIntoGroup->setFont(font);
        pushButtonIntoGroup->setStyleSheet(QLatin1String("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border:none;"));

        gridLayout->addWidget(pushButtonIntoGroup, 1, 2, 1, 1);

        pushButtonGetNewFriend = new QPushButton(gridLayoutWidget);
        pushButtonGetNewFriend->setObjectName(QStringLiteral("pushButtonGetNewFriend"));
        sizePolicy.setHeightForWidth(pushButtonGetNewFriend->sizePolicy().hasHeightForWidth());
        pushButtonGetNewFriend->setSizePolicy(sizePolicy);
        pushButtonGetNewFriend->setMinimumSize(QSize(100, 35));
        pushButtonGetNewFriend->setMaximumSize(QSize(90, 35));
        pushButtonGetNewFriend->setFont(font);
        pushButtonGetNewFriend->setStyleSheet(QLatin1String("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border:none;"));

        gridLayout->addWidget(pushButtonGetNewFriend, 0, 2, 1, 1);

        pushButtonCreateGroup = new QPushButton(gridLayoutWidget);
        pushButtonCreateGroup->setObjectName(QStringLiteral("pushButtonCreateGroup"));
        sizePolicy.setHeightForWidth(pushButtonCreateGroup->sizePolicy().hasHeightForWidth());
        pushButtonCreateGroup->setSizePolicy(sizePolicy);
        pushButtonCreateGroup->setMinimumSize(QSize(100, 35));
        pushButtonCreateGroup->setMaximumSize(QSize(90, 35));
        pushButtonCreateGroup->setFont(font);
        pushButtonCreateGroup->setStyleSheet(QLatin1String("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border:none;"));

        gridLayout->addWidget(pushButtonCreateGroup, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(add_friend);

        QMetaObject::connectSlotsByName(add_friend);
    } // setupUi

    void retranslateUi(QWidget *add_friend)
    {
        add_friend->setWindowTitle(QApplication::translate("add_friend", "Form", Q_NULLPTR));
        logo->setText(QString());
        textEdit->setHtml(QApplication::translate("add_friend", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Eras Bold ITC'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">YourTalk</span></p></body></html>", Q_NULLPTR));
        lineEditGroupId->setText(QString());
        lineEditGroupId->setPlaceholderText(QApplication::translate("add_friend", "\347\276\244\350\201\212ID", Q_NULLPTR));
        lineEditFriendId->setPlaceholderText(QApplication::translate("add_friend", "\345\245\275\345\217\213ID", Q_NULLPTR));
        pushButtonIntoGroup->setText(QApplication::translate("add_friend", "\346\267\273\345\212\240\347\276\244\350\201\212", Q_NULLPTR));
        pushButtonGetNewFriend->setText(QApplication::translate("add_friend", "\346\267\273\345\212\240\345\245\275\345\217\213", Q_NULLPTR));
        pushButtonCreateGroup->setText(QApplication::translate("add_friend", "\345\210\233\345\273\272\347\276\244\350\201\212", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_friend: public Ui_add_friend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_FRIEND_H
