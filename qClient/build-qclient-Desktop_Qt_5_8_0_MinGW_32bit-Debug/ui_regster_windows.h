/********************************************************************************
** Form generated from reading UI file 'regster_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGSTER_WINDOWS_H
#define UI_REGSTER_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regster_Windows
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonRegster;
    QSpacerItem *horizontalSpacer;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditPassword_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QTextEdit *textEdit;
    QPushButton *logo;
    QWidget *widget_2;

    void setupUi(QWidget *Regster_Windows)
    {
        if (Regster_Windows->objectName().isEmpty())
            Regster_Windows->setObjectName(QStringLiteral("Regster_Windows"));
        Regster_Windows->resize(500, 400);
        Regster_Windows->setStyleSheet(QLatin1String("QWidget{\n"
"    background:rgb(245,245,245);\n"
"    \n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	background:rgb(235,235,235);\n"
"}"));
        horizontalLayoutWidget = new QWidget(Regster_Windows);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 320, 501, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonRegster = new QPushButton(horizontalLayoutWidget);
        pushButtonRegster->setObjectName(QStringLiteral("pushButtonRegster"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonRegster->sizePolicy().hasHeightForWidth());
        pushButtonRegster->setSizePolicy(sizePolicy);
        pushButtonRegster->setMinimumSize(QSize(100, 40));
        pushButtonRegster->setMaximumSize(QSize(100, 40));
        pushButtonRegster->setStyleSheet(QLatin1String("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border:none;"));

        horizontalLayout->addWidget(pushButtonRegster);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayoutWidget_2 = new QWidget(Regster_Windows);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 150, 501, 151));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEditUsername = new QLineEdit(horizontalLayoutWidget_2);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditUsername->sizePolicy().hasHeightForWidth());
        lineEditUsername->setSizePolicy(sizePolicy1);
        lineEditUsername->setMinimumSize(QSize(300, 40));
        lineEditUsername->setStyleSheet(QStringLiteral("border-bottom-color:black;"));

        verticalLayout->addWidget(lineEditUsername);

        lineEditPassword = new QLineEdit(horizontalLayoutWidget_2);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        sizePolicy.setHeightForWidth(lineEditPassword->sizePolicy().hasHeightForWidth());
        lineEditPassword->setSizePolicy(sizePolicy);
        lineEditPassword->setMinimumSize(QSize(300, 40));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditPassword);

        lineEditPassword_2 = new QLineEdit(horizontalLayoutWidget_2);
        lineEditPassword_2->setObjectName(QStringLiteral("lineEditPassword_2"));
        sizePolicy.setHeightForWidth(lineEditPassword_2->sizePolicy().hasHeightForWidth());
        lineEditPassword_2->setSizePolicy(sizePolicy);
        lineEditPassword_2->setMinimumSize(QSize(300, 40));
        lineEditPassword_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditPassword_2);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        widget = new QWidget(Regster_Windows);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 501, 131));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QLatin1String("background-color: rgb(7,193,96);\n"
""));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 20, 151, 51));
        textEdit->setStyleSheet(QLatin1String("border:none;\n"
"font: 9pt \"Eras Bold ITC\";"));
        logo = new QPushButton(widget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(20, 20, 50, 50));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(50, 50));
        logo->setMaximumSize(QSize(50, 50));
        widget_2 = new QWidget(Regster_Windows);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(-1, 110, 501, 301));
        widget_2->raise();
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        widget->raise();

        retranslateUi(Regster_Windows);

        QMetaObject::connectSlotsByName(Regster_Windows);
    } // setupUi

    void retranslateUi(QWidget *Regster_Windows)
    {
        Regster_Windows->setWindowTitle(QApplication::translate("Regster_Windows", "Form", Q_NULLPTR));
        pushButtonRegster->setText(QApplication::translate("Regster_Windows", "\346\263\250\345\206\214", Q_NULLPTR));
        lineEditUsername->setPlaceholderText(QApplication::translate("Regster_Windows", "\350\264\246\345\217\267", Q_NULLPTR));
        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QApplication::translate("Regster_Windows", "\345\257\206\347\240\201", Q_NULLPTR));
        lineEditPassword_2->setText(QString());
        lineEditPassword_2->setPlaceholderText(QApplication::translate("Regster_Windows", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Regster_Windows", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Eras Bold ITC'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">YourTalk</span></p></body></html>", Q_NULLPTR));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Regster_Windows: public Ui_Regster_Windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGSTER_WINDOWS_H
