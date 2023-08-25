/********************************************************************************
** Form generated from reading UI file 'friend_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIEND_WINDOWS_H
#define UI_FRIEND_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Friend_Windows
{
public:
    QGridLayout *gridLayout;
    QPushButton *changeHead;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QListWidget *listWidgetFriend;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QListWidget *listWidgetGroup;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QListWidget *listWidgetNewNote;
    QLabel *labelID;

    void setupUi(QWidget *Friend_Windows)
    {
        if (Friend_Windows->objectName().isEmpty())
            Friend_Windows->setObjectName(QStringLiteral("Friend_Windows"));
        Friend_Windows->resize(400, 800);
        Friend_Windows->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(Friend_Windows);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        changeHead = new QPushButton(Friend_Windows);
        changeHead->setObjectName(QStringLiteral("changeHead"));
        changeHead->setMinimumSize(QSize(80, 80));
        changeHead->setMaximumSize(QSize(80, 80));

        gridLayout->addWidget(changeHead, 0, 0, 1, 1);

        tabWidget = new QTabWidget(Friend_Windows);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        listWidgetFriend = new QListWidget(tab);
        listWidgetFriend->setObjectName(QStringLiteral("listWidgetFriend"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        listWidgetFriend->setFont(font);
        listWidgetFriend->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/pintree.jpg);"));

        gridLayout_4->addWidget(listWidgetFriend, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        listWidgetGroup = new QListWidget(tab_2);
        listWidgetGroup->setObjectName(QStringLiteral("listWidgetGroup"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        listWidgetGroup->setFont(font1);
        listWidgetGroup->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/pintree.jpg);"));

        gridLayout_3->addWidget(listWidgetGroup, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidgetNewNote = new QListWidget(tab_3);
        listWidgetNewNote->setObjectName(QStringLiteral("listWidgetNewNote"));
        listWidgetNewNote->setFont(font1);
        listWidgetNewNote->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/pintree.jpg);"));

        gridLayout_2->addWidget(listWidgetNewNote, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 2);

        labelID = new QLabel(Friend_Windows);
        labelID->setObjectName(QStringLiteral("labelID"));
        labelID->setStyleSheet(QStringLiteral("background:rgba(225,225,225,0.5)"));

        gridLayout->addWidget(labelID, 0, 1, 1, 1);


        retranslateUi(Friend_Windows);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Friend_Windows);
    } // setupUi

    void retranslateUi(QWidget *Friend_Windows)
    {
        Friend_Windows->setWindowTitle(QApplication::translate("Friend_Windows", "Form", Q_NULLPTR));
        changeHead->setText(QApplication::translate("Friend_Windows", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Friend_Windows", "\346\234\213\345\217\213", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Friend_Windows", " \347\276\244\350\201\212", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Friend_Windows", "\346\226\260\346\266\210\346\201\257", Q_NULLPTR));
        labelID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Friend_Windows: public Ui_Friend_Windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIEND_WINDOWS_H
