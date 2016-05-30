#-------------------------------------------------
#
# Project created by QtCreator 2016-05-25T11:00:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bomberman
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gameboard.cpp

HEADERS  += mainwindow.h \
    gameboard.h

FORMS    += mainwindow.ui \
    gameboard.ui
