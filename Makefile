#############################################################################
# Makefile for building: GateWay
# Generated by qmake (2.01a) (Qt 4.5.0) on: ?? 7? 16 20:42:19 2016
# Project:  GateWay.pro
# Template: app
# Command: /opt/qt-embedded-linux-opensource-src-4.5.0/bin/qmake-arm -unix -o Makefile GateWay.pro
#############################################################################

####### Compiler, tools and options

CC            = arm-linux-gcc
CXX           = arm-linux-g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/qws/linux-arm-g++ -I. -I/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/include/QtCore -I/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/include/QtNetwork -I/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/include/QtGui -I/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/include -I. -I.
LINK          = arm-linux-g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/usr/local/Trolltech/QtEmbedded-4.5.0-arm-linux/lib
LIBS          = $(SUBLIBS)  -L/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/lib -lQtGui -L/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/lib -lQtNetwork -lQtCore -lm -lrt -ldl -lpthread
AR            = arm-linux-ar cqs
RANLIB        = 
QMAKE         = /opt/qt-embedded-linux-opensource-src-4.5.0/bin/qmake-arm
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
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
		enddevice.cpp moc_mainwindow.cpp \
		moc_qextserialbase.cpp \
		moc_socketservice.cpp \
		moc_serialservice.cpp \
		moc_enddevice.cpp
OBJECTS       = main.o \
		mainwindow.o \
		posix_qextserialport.o \
		qextserialbase.o \
		socketservice.o \
		serialservice.o \
		temp_humi_light.o \
		motor.o \
		relays.o \
		touch.o \
		smoke.o \
		infray.o \
		shake.o \
		pwm.o \
		ultra.o \
		enddevice.o \
		moc_mainwindow.o \
		moc_qextserialbase.o \
		moc_socketservice.o \
		moc_serialservice.o \
		moc_enddevice.o
DIST          = /usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/g++.conf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/unix.conf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/linux.conf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/qws.conf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/qconfig.pri \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/release.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/qt.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/moc.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/resources.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/uic.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/lex.prf \
		GateWay.pro
QMAKE_TARGET  = GateWay
DESTDIR       = 
TARGET        = GateWay

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: GateWay.pro  /usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/qws/linux-arm-g++/qmake.conf /usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/g++.conf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/unix.conf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/linux.conf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/qws.conf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/qconfig.pri \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/release.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/qt.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/moc.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/resources.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/uic.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/lex.prf \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/lib/libQtGui.prl \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/lib/libQtNetwork.prl \
		/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/lib/libQtCore.prl
	$(QMAKE) -unix -o Makefile GateWay.pro
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/g++.conf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/unix.conf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/linux.conf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/common/qws.conf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/qconfig.pri:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/qt_functions.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/qt_config.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/exclusive_builds.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/default_pre.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/release.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/default_post.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/warn_on.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/qt.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/unix/thread.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/moc.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/resources.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/uic.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/yacc.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/mkspecs/features/lex.prf:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/lib/libQtGui.prl:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/lib/libQtNetwork.prl:
/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile GateWay.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/GateWay1.0.0 || $(MKDIR) .tmp/GateWay1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/GateWay1.0.0/ && $(COPY_FILE) --parents mainwindow.h posix_qextserialport.h qextserialbase.h socketservice.h serialservice.h temp_humi_light.h motor.h relays.h touch.h smoke.h infray.h shake.h pwm.h ultra.h enddevice.h .tmp/GateWay1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp posix_qextserialport.cpp qextserialbase.cpp socketservice.cpp serialservice.cpp temp_humi_light.cpp motor.cpp relays.cpp touch.cpp smoke.cpp infray.cpp shake.cpp pwm.cpp ultra.cpp enddevice.cpp .tmp/GateWay1.0.0/ && $(COPY_FILE) --parents mainwindow.ui .tmp/GateWay1.0.0/ && (cd `dirname .tmp/GateWay1.0.0` && $(TAR) GateWay1.0.0.tar GateWay1.0.0 && $(COMPRESS) GateWay1.0.0.tar) && $(MOVE) `dirname .tmp/GateWay1.0.0`/GateWay1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/GateWay1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_qextserialbase.cpp moc_socketservice.cpp moc_serialservice.cpp moc_enddevice.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_qextserialbase.cpp moc_socketservice.cpp moc_serialservice.cpp moc_enddevice.cpp
moc_mainwindow.cpp: serialservice.h \
		posix_qextserialport.h \
		qextserialbase.h \
		socketservice.h \
		temp_humi_light.h \
		enddevice.h \
		motor.h \
		relays.h \
		touch.h \
		smoke.h \
		infray.h \
		shake.h \
		pwm.h \
		ultra.h \
		mainwindow.h
	/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_qextserialbase.cpp: qextserialbase.h
	/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/bin/moc $(DEFINES) $(INCPATH) qextserialbase.h -o moc_qextserialbase.cpp

moc_socketservice.cpp: socketservice.h
	/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/bin/moc $(DEFINES) $(INCPATH) socketservice.h -o moc_socketservice.cpp

moc_serialservice.cpp: posix_qextserialport.h \
		qextserialbase.h \
		serialservice.h
	/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/bin/moc $(DEFINES) $(INCPATH) serialservice.h -o moc_serialservice.cpp

moc_enddevice.cpp: enddevice.h
	/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/bin/moc $(DEFINES) $(INCPATH) enddevice.h -o moc_enddevice.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: mainwindow.ui
	/usr/local/Trolltech/QtEmbedded-4.5.0-arm-embedded/bin/uic mainwindow.ui -o ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		serialservice.h \
		posix_qextserialport.h \
		qextserialbase.h \
		socketservice.h \
		temp_humi_light.h \
		enddevice.h \
		motor.h \
		relays.h \
		touch.h \
		smoke.h \
		infray.h \
		shake.h \
		pwm.h \
		ultra.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		serialservice.h \
		posix_qextserialport.h \
		qextserialbase.h \
		socketservice.h \
		temp_humi_light.h \
		enddevice.h \
		motor.h \
		relays.h \
		touch.h \
		smoke.h \
		infray.h \
		shake.h \
		pwm.h \
		ultra.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

posix_qextserialport.o: posix_qextserialport.cpp posix_qextserialport.h \
		qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o posix_qextserialport.o posix_qextserialport.cpp

qextserialbase.o: qextserialbase.cpp qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qextserialbase.o qextserialbase.cpp

socketservice.o: socketservice.cpp socketservice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o socketservice.o socketservice.cpp

serialservice.o: serialservice.cpp serialservice.h \
		posix_qextserialport.h \
		qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o serialservice.o serialservice.cpp

temp_humi_light.o: temp_humi_light.cpp temp_humi_light.h \
		enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o temp_humi_light.o temp_humi_light.cpp

motor.o: motor.cpp motor.h \
		enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o motor.o motor.cpp

relays.o: relays.cpp relays.h \
		enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o relays.o relays.cpp

touch.o: touch.cpp touch.h \
		enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o touch.o touch.cpp

smoke.o: smoke.cpp smoke.h \
		enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o smoke.o smoke.cpp

infray.o: infray.cpp infray.h \
		enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o infray.o infray.cpp

shake.o: shake.cpp shake.h \
		enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o shake.o shake.cpp

pwm.o: pwm.cpp pwm.h \
		enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o pwm.o pwm.cpp

ultra.o: ultra.cpp ultra.h \
		enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ultra.o ultra.cpp

enddevice.o: enddevice.cpp enddevice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o enddevice.o enddevice.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_qextserialbase.o: moc_qextserialbase.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qextserialbase.o moc_qextserialbase.cpp

moc_socketservice.o: moc_socketservice.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_socketservice.o moc_socketservice.cpp

moc_serialservice.o: moc_serialservice.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_serialservice.o moc_serialservice.cpp

moc_enddevice.o: moc_enddevice.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_enddevice.o moc_enddevice.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

