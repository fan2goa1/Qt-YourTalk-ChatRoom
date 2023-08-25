#-------------------------------------------------
#
# Project created by QtCreator 2022-08-18T16:13:22
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qclient
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        cell_main.cpp \
    qnchatmessage.cpp \
    chat_windows.cpp \
    friend_windows.cpp \
    groupregster.cpp \
    groupchat_windows.cpp \
    notice_windows.cpp \
    regster_windows.cpp \
    signin_windows.cpp \
    mainwindow.cpp \
    add_friend.cpp \
    changecolor_window.cpp \
    expression.cpp \
    screen.cpp \
    myrect.cpp \
    controlwidget.cpp \
    qslabel.cpp

HEADERS  += cell_main.h \
    qnchatmessage.h \
    chat_windows.h \
    friend_windows.h \
    groupregster.h \
    groupchat_windows.h \
    notice_windows.h \
    regster_windows.h \
    signin_windows.h \
    mainwindow.h \
    add_friend.h \
    changecolor_window.h \
    expression.h \
    screen.h \
    myrect.h \
    controlwidget.h \
    qslabel.h

FORMS    += cell_main.ui \
    chat_windows.ui \
    friend_windows.ui \
    groupregster.ui \
    groupchat_windows.ui \
    notice_windows.ui \
    regster_windows.ui \
    signin_windows.ui \
    mainwindow.ui \
    add_friend.ui \
    changecolor_window.ui \
    expression.ui \
    controlwidget.ui

RESOURCES += \
    img.qrc

DISTFILES +=
