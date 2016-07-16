#-------------------------------------------------
#
# Project created by QtCreator 2016-07-14T19:11:35
#
#-------------------------------------------------

QT       += core gui network

TARGET = GateWay
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    posix_qextserialport.cpp \
    qextserialbase.cpp \
    socketservice.cpp \
    serialservice.cpp \
    temp_humi_light.cpp \
    motor.cpp \
    relays.cpp \
    touch.cpp \
    smoke.cpp \
    infray.cpp \
    shake.cpp \
    pwm.cpp \
    ultra.cpp

HEADERS  += mainwindow.h \
    posix_qextserialport.h \
    qextserialbase.h \
    socketservice.h \
    serialservice.h \
    temp_humi_light.h \
    motor.h \
    relays.h \
    touch.h \
    smoke.h \
    infray.h \
    shake.h \
    pwm.h \
    ultra.h

FORMS    += mainwindow.ui
