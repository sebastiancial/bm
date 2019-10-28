#-------------------------------------------------
#
# Project created by QtCreator 2017-06-20T16:43:37
#
#-------------------------------------------------

QT       += core gui sql widgets charts network


TARGET = bm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        querywindow.cpp \
        jschart.cpp \
        deletefrdb.cpp \
    addtodb.cpp

HEADERS  += mainwindow.h \
            querywindow.h \
            jschart.h \
            deletefrdb.h \
    addtodb.h

FORMS    += mainwindow.ui \
            querywindow.ui \
            jschart.ui \
            deletefrdb.ui \
    addtodb.ui

DISTFILES +=

