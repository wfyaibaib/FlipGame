#-------------------------------------------------
#
# Project created by QtCreator 2013-07-14T07:49:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FlipGame
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    flipbutton.cpp \
    gridboard.cpp

HEADERS  += mainwindow.h \
    flipbutton.h \
    gridboard.h

FORMS    += mainwindow.ui \
    gridboard.ui

RESOURCES += \
    res.qrc
