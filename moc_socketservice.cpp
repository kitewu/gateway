/****************************************************************************
** Meta object code from reading C++ file 'socketservice.h'
**
** Created: Sat Jul 16 20:42:33 2016
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "socketservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SocketService[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   14,   14,   14, 0x0a,
      55,   14,   14,   14, 0x0a,
      65,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SocketService[] = {
    "SocketService\0\0receiveMsgFromSocket(QString)\0"
    "readMsg()\0sendMsg()\0acceptConnection()\0"
};

const QMetaObject SocketService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SocketService,
      qt_meta_data_SocketService, 0 }
};

const QMetaObject *SocketService::metaObject() const
{
    return &staticMetaObject;
}

void *SocketService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SocketService))
        return static_cast<void*>(const_cast< SocketService*>(this));
    return QObject::qt_metacast(_clname);
}

int SocketService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: receiveMsgFromSocket((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: readMsg(); break;
        case 2: sendMsg(); break;
        case 3: acceptConnection(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SocketService::receiveMsgFromSocket(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
