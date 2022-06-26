#-------------------------------------------------
#
# Project created by QtCreator 2017-04-09T21:46:11
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Opcionables
TEMPLATE = app


SOURCES += main.cpp\
        principal.cpp \
    datamanager.cpp \
    question.cpp \
    indexedbutton.cpp \
    image.cpp \
    login.cpp

HEADERS  += principal.h \
    datamanager.hpp \
    question.hpp \
    indexedbutton.hpp \
    image.hpp \
    login.hpp

FORMS    += principal.ui \
    question.ui \
    login.ui

RESOURCES += \
    resources.qrc
