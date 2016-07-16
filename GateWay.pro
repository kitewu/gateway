#-------------------------------------------------
#
# Project created by QtCreator 2016-07-14T19:11:35
# @auther: wushaoling sdust China
# @desc:implements the function of control or read
#       temperature\light\humidity\ultrasound\relay\touch\smoke\motor\shake and so on
#       enddevice, using socket and serialport communication
# @linux version: Linux skzh 3.0.8-EmbedSky #7 PREEMPT Tue Sep 2 17:34:43 CST 2014 armv7l GNU/Linux
# @make: make clean qmake-arm make
# @running: ./GateWay -qws
# @version: 1.0
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
    ultra.cpp \
    enddevice.cpp

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
    ultra.h \
    enddevice.h

FORMS    += mainwindow.ui
