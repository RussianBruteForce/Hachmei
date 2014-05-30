#-------------------------------------------------
#
# Project created by QtCreator 2014-05-30T16:04:39
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Hachmei
TEMPLATE = app


SOURCES += main.cpp\
        Hachmei.cpp \
    password.cpp

HEADERS  += Hachmei.h \
    password.h

FORMS    += Hachmei.ui \
    password.ui

RESOURCES += \
    resources.qrc
