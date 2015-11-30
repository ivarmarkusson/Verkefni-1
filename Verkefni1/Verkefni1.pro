QT += core
QT -= gui

TARGET = Verkefni1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    people.cpp \
    data.cpp \
    userinterface.cpp

HEADERS += \
    people.h \
    data.h \
    userinterface.h

