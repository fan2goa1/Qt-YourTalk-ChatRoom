/********************************************************************************
** Form generated from reading UI file 'signin_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_WINDOWS_H
#define UI_SIGNIN_WINDOWS_H

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

class Ui_Signin_Windows
{
public:
    QWidget *widget;
    QTextEdit *textEdit;
    QPushButton *logo;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *widget_5;
    QWidget *widget_2;
    QPushButton *pushButtonRegster;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonLogin;
    QSpacerItem *horizontalSpacer_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Signin_Windows)
    {
        if (Signin_Windows->objectName().isEmpty())
            Signin_Windows->setObjectName(QStringLiteral("Signin_Windows"));
        Signin_Windows->resize(742, 575);
        Signin_Windows->setStyleSheet(QLatin1String("QWidget{\n"
"    background:rgb(245,245,245);\n"
"    \n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	background:rgb(235,235,235);\n"
"}\n"
""));
        widget = new QWidget(Signin_Windows);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 751, 171));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QLatin1String("background-color: rgb(7,193,96);\n"
""));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(300, 50, 281, 81));
        QFont font;
        font.setFamily(QStringLiteral("Eras Bold ITC"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QLatin1String("border:none;\n"
"font: 9pt \"Eras Bold ITC\";"));
        logo = new QPushButton(widget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(210, 50, 70, 70));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(50, 50));
        logo->setMaximumSize(QSize(70, 70));
        logo->setMouseTracking(false);
        logo->setIconSize(QSize(20, 20));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 0, 120, 80));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(0, 0, 181, 161));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(0, 0, 741, 161));
        widget_2 = new QWidget(Signin_Windows);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(-20, 120, 761, 471));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        pushButtonRegster = new QPushButton(widget_2);
        pushButtonRegster->setObjectName(QStringLiteral("pushButtonRegster"));
        pushButtonRegster->setGeometry(QRect(30, 410, 91, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setUnderline(false);
        pushButtonRegster->setFont(font1);
        pushButtonRegster->setStyleSheet(QLatin1String("border:none;\n"
"color: rgb(82, 82, 82);\n"
"background:rgb(245,245,245);"));
        horizontalLayoutWidget = new QWidget(widget_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 300, 741, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonLogin = new QPushButton(horizontalLayoutWidget);
        pushButtonLogin->setObjectName(QStringLiteral("pushButtonLogin"));
        sizePolicy.setHeightForWidth(pushButtonLogin->sizePolicy().hasHeightForWidth());
        pushButtonLogin->setSizePolicy(sizePolicy);
        pushButtonLogin->setMinimumSize(QSize(150, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        pushButtonLogin->setFont(font2);
        pushButtonLogin->setStyleSheet(QLatin1String("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border-radiux: 505px"));

        horizontalLayout->addWidget(pushButtonLogin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayoutWidget_2 = new QWidget(widget_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 70, 741, 231));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEditUsername = new QLineEdit(horizontalLayoutWidget_2);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));
        sizePolicy.setHeightForWidth(lineEditUsername->sizePolicy().hasHeightForWidth());
        lineEditUsername->setSizePolicy(sizePolicy);
        lineEditUsername->setMinimumSize(QSize(350, 50));
        lineEditUsername->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(lineEditUsername);

        lineEditPassword = new QLineEdit(horizontalLayoutWidget_2);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        sizePolicy.setHeightForWidth(lineEditPassword->sizePolicy().hasHeightForWidth());
        lineEditPassword->setSizePolicy(sizePolicy);
        lineEditPassword->setMinimumSize(QSize(350, 50));
        lineEditPassword->setStyleSheet(QStringLiteral(""));
        lineEditPassword->setFrame(true);
        lineEditPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditPassword);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        widget_2->raise();
        widget->raise();

        retranslateUi(Signin_Windows);

        QMetaObject::connectSlotsByName(Signin_Windows);
    } // setupUi

    void retranslateUi(QWidget *Signin_Windows)
    {
        Signin_Windows->setWindowTitle(QApplication::translate("Signin_Windows", "Form", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Signin_Windows", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Eras Bold ITC'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; color:#ffffff;\">YourTalk</span></p></body></html>", Q_NULLPTR));
        logo->setText(QString());
        pushButtonRegster->setText(QApplication::translate("Signin_Windows", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        pushButtonLogin->setText(QApplication::translate("Signin_Windows", "\347\231\273 \345\275\225", Q_NULLPTR));
        lineEditUsername->setInputMask(QString());
        lineEditUsername->setText(QString());
        lineEditUsername->setPlaceholderText(QApplication::translate("Signin_Windows", "\350\264\246\345\217\267", Q_NULLPTR));
        lineEditPassword->setInputMask(QString());
        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QApplication::translate("Signin_Windows", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Signin_Windows: public Ui_Signin_Windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_WINDOWS_H
