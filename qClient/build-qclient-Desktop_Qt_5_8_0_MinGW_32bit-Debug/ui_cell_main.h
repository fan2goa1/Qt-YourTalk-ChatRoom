/********************************************************************************
** Form generated from reading UI file 'cell_main.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_MAIN_H
#define UI_CELL_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Main
{
public:
    QGridLayout *gridLayout_2;
    QWidget *main_widget;
    QGridLayout *gridLayout_5;
    QWidget *name_tag;
    QGridLayout *gridLayout_6;
    QPushButton *options;
    QPushButton *maximize;
    QPushButton *shutdown;
    QSpacerItem *verticalSpacer;
    QPushButton *minimize;
    QSpacerItem *horizontalSpacer_4;
    QLabel *name;
    QWidget *chat;
    QWidget *friend_2;
    QWidget *side_bar;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QPushButton *add;
    QSpacerItem *verticalSpacer_2;
    QPushButton *change_color;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Cell_Main)
    {
        if (Cell_Main->objectName().isEmpty())
            Cell_Main->setObjectName(QStringLiteral("Cell_Main"));
        Cell_Main->resize(950, 700);
        Cell_Main->setMinimumSize(QSize(950, 700));
        Cell_Main->setStyleSheet(QLatin1String("QWidget#Cell_Main{background-color: rgb(227,224,223);\n"
"}\n"
"QPushButton#maximize{\n"
"border:none;\n"
"}\n"
"QPushButton#maximize:hover{\n"
"background-color: rgb(227,224,223);\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(Cell_Main);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        main_widget = new QWidget(Cell_Main);
        main_widget->setObjectName(QStringLiteral("main_widget"));
        gridLayout_5 = new QGridLayout(main_widget);
        gridLayout_5->setSpacing(1);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(3, 3, 3, 3);
        name_tag = new QWidget(main_widget);
        name_tag->setObjectName(QStringLiteral("name_tag"));
        name_tag->setMinimumSize(QSize(0, 65));
        name_tag->setMaximumSize(QSize(16777215, 65));
        name_tag->setStyleSheet(QLatin1String("background-color: rgb(245,245,245);\n"
""));
        gridLayout_6 = new QGridLayout(name_tag);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(15, 0, 0, 0);
        options = new QPushButton(name_tag);
        options->setObjectName(QStringLiteral("options"));
        options->setMinimumSize(QSize(30, 30));
        options->setMaximumSize(QSize(30, 30));
        options->setStyleSheet(QLatin1String("QPushButton#options{\n"
"border:none;\n"
"}\n"
"QPushButton#options:hover{\n"
"background-color: rgb(208, 208, 208);\n"
"border:none;\n"
"}\n"
"QPushiButton#options:press{\n"
"background-color: rgb(157, 157, 157);\n"
"border:none;\n"
"}"));

        gridLayout_6->addWidget(options, 0, 2, 1, 1);

        maximize = new QPushButton(name_tag);
        maximize->setObjectName(QStringLiteral("maximize"));
        maximize->setMinimumSize(QSize(30, 30));
        maximize->setMaximumSize(QSize(30, 30));
        maximize->setStyleSheet(QLatin1String("QPushButton#maximize{\n"
"border:none;\n"
"}\n"
"QPushButton#maximize:hover{\n"
"background-color: rgb(208, 208, 208);\n"
"border:none;\n"
"}\n"
"QPushiButton#maximizee:pressed{\n"
"background-color: rgb(157, 157, 157);\n"
"border:none;\n"
"}"));

        gridLayout_6->addWidget(maximize, 0, 4, 1, 1);

        shutdown = new QPushButton(name_tag);
        shutdown->setObjectName(QStringLiteral("shutdown"));
        shutdown->setMinimumSize(QSize(30, 30));
        shutdown->setMaximumSize(QSize(30, 30));
        shutdown->setStyleSheet(QLatin1String("QPushButton#shutdown{border:none;}\n"
"QPushButton#shutdown:hover{\n"
"background-color:rgb(255, 0, 46);\n"
"border:none;\n"
"}\n"
""));

        gridLayout_6->addWidget(shutdown, 0, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 1, 4, 1, 1);

        minimize = new QPushButton(name_tag);
        minimize->setObjectName(QStringLiteral("minimize"));
        minimize->setMinimumSize(QSize(30, 30));
        minimize->setMaximumSize(QSize(30, 30));
        minimize->setStyleSheet(QLatin1String("QPushButton#minimize{\n"
"border:none;\n"
"}\n"
"QPushButton#minimize:hover{\n"
"background-color: rgb(208, 208, 208);\n"
"border:none;\n"
"}\n"
"QPushiButton#minimize:pressed{\n"
"background-color: rgb(157, 157, 157);\n"
"border:none;\n"
"}"));

        gridLayout_6->addWidget(minimize, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(437, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        name = new QLabel(name_tag);
        name->setObjectName(QStringLiteral("name"));
        name->setMinimumSize(QSize(400, 0));
        name->setStyleSheet(QStringLiteral("font: 24pt \"Eras Bold ITC\";"));

        gridLayout_6->addWidget(name, 0, 0, 2, 1);


        gridLayout_5->addWidget(name_tag, 0, 2, 1, 1);

        chat = new QWidget(main_widget);
        chat->setObjectName(QStringLiteral("chat"));

        gridLayout_5->addWidget(chat, 1, 2, 1, 1);

        friend_2 = new QWidget(main_widget);
        friend_2->setObjectName(QStringLiteral("friend_2"));
        friend_2->setMinimumSize(QSize(300, 0));
        friend_2->setMaximumSize(QSize(300, 16777215));

        gridLayout_5->addWidget(friend_2, 0, 1, 2, 1);

        side_bar = new QWidget(main_widget);
        side_bar->setObjectName(QStringLiteral("side_bar"));
        side_bar->setMinimumSize(QSize(55, 0));
        side_bar->setMaximumSize(QSize(55, 16777215));
        side_bar->setStyleSheet(QStringLiteral("background-color: rgb(46,46,46);"));
        verticalLayoutWidget = new QWidget(side_bar);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 61, 701));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        add = new QPushButton(verticalLayoutWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setMinimumSize(QSize(55, 55));
        add->setMaximumSize(QSize(55, 55));
        add->setStyleSheet(QLatin1String("QPushButton#add{border:none;}\n"
"QPushButton#add:hover{\n"
"border:none;\n"
"background-color: rgb(79, 79, 79);\n"
"}"));

        verticalLayout->addWidget(add);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        change_color = new QPushButton(verticalLayoutWidget);
        change_color->setObjectName(QStringLiteral("change_color"));
        change_color->setMinimumSize(QSize(55, 55));
        change_color->setMaximumSize(QSize(55, 55));
        change_color->setStyleSheet(QLatin1String("QPushButton#change_color{border:none;}\n"
"QPushButton#change_color:hover{\n"
"border:none;\n"
"background-color: rgb(79, 79, 79);\n"
"}"));

        verticalLayout->addWidget(change_color);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout_5->addWidget(side_bar, 0, 0, 2, 1);


        gridLayout_2->addWidget(main_widget, 0, 0, 1, 1);


        retranslateUi(Cell_Main);

        QMetaObject::connectSlotsByName(Cell_Main);
    } // setupUi

    void retranslateUi(QWidget *Cell_Main)
    {
        Cell_Main->setWindowTitle(QApplication::translate("Cell_Main", "Cell_Main", Q_NULLPTR));
        options->setText(QString());
        maximize->setText(QString());
        shutdown->setText(QString());
        minimize->setText(QString());
        name->setText(QApplication::translate("Cell_Main", "TextLabel", Q_NULLPTR));
        add->setText(QString());
        change_color->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Cell_Main: public Ui_Cell_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_MAIN_H
