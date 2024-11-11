QT += core
QT -= gui

CONFIG += c++11

TARGET = Ivan_task
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    point.cpp \
    poligon.cpp \
    triangle.cpp \
    rectangle.cpp \
    square.cpp \
    circle.cpp \
    scene.cpp \
    infomenu.cpp \
    figureutils.cpp

HEADERS += \
    point.h \
    figure.h \
    poligon.h \
    triangle.h \
    rectangle.h \
    square.h \
    circle.h \
    scene.h \
    infomenu.h \
    figureutils.h
