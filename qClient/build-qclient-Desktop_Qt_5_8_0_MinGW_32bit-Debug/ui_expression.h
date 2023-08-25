/********************************************************************************
** Form generated from reading UI file 'expression.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPRESSION_H
#define UI_EXPRESSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_expression
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QWidget *widget;
    QPushButton *logo;
    QTextEdit *textEdit;

    void setupUi(QWidget *expression)
    {
        if (expression->objectName().isEmpty())
            expression->setObjectName(QStringLiteral("expression"));
        expression->resize(400, 298);
        gridLayoutWidget = new QWidget(expression);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 80, 401, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(80, 80));
        pushButton_2->setMaximumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(80, 80));
        pushButton_6->setMaximumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(80, 80));
        pushButton_4->setMaximumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(80, 80));
        pushButton_1->setMaximumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(80, 80));
        pushButton_5->setMaximumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(80, 80));
        pushButton_3->setMaximumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        widget = new QWidget(expression);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 401, 71));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QLatin1String("background-color: rgb(7,193,96);\n"
""));
        logo = new QPushButton(widget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(20, 10, 50, 50));
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(50, 50));
        logo->setMaximumSize(QSize(50, 50));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 10, 151, 51));
        textEdit->setStyleSheet(QLatin1String("border:none;\n"
"font: 9pt \"Eras Bold ITC\";"));

        retranslateUi(expression);

        QMetaObject::connectSlotsByName(expression);
    } // setupUi

    void retranslateUi(QWidget *expression)
    {
        expression->setWindowTitle(QApplication::translate("expression", "Form", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton_6->setText(QString());
        pushButton_4->setText(QString());
        pushButton_1->setText(QString());
        pushButton_5->setText(QString());
        pushButton_3->setText(QString());
        logo->setText(QString());
        textEdit->setHtml(QApplication::translate("expression", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Eras Bold ITC'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffffff;\">YourTalk</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class expression: public Ui_expression {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPRESSION_H
