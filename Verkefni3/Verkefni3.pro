#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T15:06:19
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Verkefni3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    computer.cpp \
    connection.cpp \
    data.cpp \
    engine.cpp \
    scientist.cpp \
    displayscientistswindow.cpp \
    displaycomputerswindow.cpp \
    searchscientistswindow.cpp \
    searchcomputerswindow.cpp \
    editscientistswindow.cpp \
    editcomputerswindow.cpp \
    connectionswindow.cpp

HEADERS  += mainwindow.h \
    computer.h \
    connection.h \
    data.h \
    engine.h \
    scientist.h \
    globalstrings.h \
    displayscientistswindow.h \
    displaycomputerswindow.h \
    searchscientistswindow.h \
    searchcomputerswindow.h \
    editscientistswindow.h \
    editcomputerswindow.h \
    connectionswindow.h

FORMS    += mainwindow.ui \
    displayscientistswindow.ui \
    displaycomputerswindow.ui \
    searchscientistswindow.ui \
    searchcomputerswindow.ui \
    editscientistswindow.ui \
    editcomputerswindow.ui \
    connectionswindow.ui
