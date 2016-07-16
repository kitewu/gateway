/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Jul 16 20:42:32 2016
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   11,   11,   11, 0x08,
      61,   11,   11,   11, 0x08,
      90,   11,   11,   11, 0x08,
     107,   11,   11,   11, 0x08,
     137,   11,   11,   11, 0x08,
     162,   11,   11,   11, 0x08,
     187,   11,   11,   11, 0x08,
     215,   11,   11,   11, 0x08,
     244,   11,   11,   11, 0x08,
     274,   11,   11,   11, 0x08,
     301,   11,   11,   11, 0x08,
     327,   11,   11,   11, 0x08,
     349,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0addLog(QString)\0"
    "processMsgFromSerial(QByteArray)\0"
    "on_btn_open_serial_clicked()\0"
    "showLog(QString)\0on_btn_close_serial_clicked()\0"
    "on_btn_motor_f_clicked()\0"
    "on_btn_motor_b_clicked()\0"
    "on_btn_motor_stop_clicked()\0"
    "on_btn_relay1_open_clicked()\0"
    "on_btn_relay1_close_clicked()\0"
    "on_btn_pwm_close_clicked()\0"
    "on_btn_pwm_open_clicked()\0"
    "onPwmValueChange(int)\0"
    "processMsgFromSocket(QString)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: processMsgFromSerial((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: on_btn_open_serial_clicked(); break;
        case 3: showLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: on_btn_close_serial_clicked(); break;
        case 5: on_btn_motor_f_clicked(); break;
        case 6: on_btn_motor_b_clicked(); break;
        case 7: on_btn_motor_stop_clicked(); break;
        case 8: on_btn_relay1_open_clicked(); break;
        case 9: on_btn_relay1_close_clicked(); break;
        case 10: on_btn_pwm_close_clicked(); break;
        case 11: on_btn_pwm_open_clicked(); break;
        case 12: onPwmValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: processMsgFromSocket((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::addLog(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
