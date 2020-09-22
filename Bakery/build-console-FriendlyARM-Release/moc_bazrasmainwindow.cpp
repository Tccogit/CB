/****************************************************************************
** Meta object code from reading C++ file 'bazrasmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/ui/bazrasmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bazrasmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BazrasMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   18,   17,   17, 0x08,
      91,   84,   17,   17, 0x08,
     125,  114,   17,   17, 0x08,
     193,  188,   17,   17, 0x08,
     254,   17,   17,   17, 0x08,
     265,   17,   17,   17, 0x08,
     279,   17,   17,   17, 0x08,
     291,   17,   17,   17, 0x08,
     313,   17,   17,   17, 0x08,
     327,   17,   17,   17, 0x08,
     341,   17,   17,   17, 0x08,
     357,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BazrasMainWindow[] = {
    "BazrasMainWindow\0\0CardType,Pass,CardData\0"
    "ActionOnNewCardtype(quint8,qint16,quint32)\0"
    "serial\0driverLogined(quint64)\0serial,,,,\0"
    "driverLogined(quint64,QDateTime,QDateTime,QDateTime,QDateTime)\0"
    ",,,,\0SaveOldPath(quint64,QDateTime,QDateTime,QDateTime,QDateTime)\0"
    "ShowTime()\0SaveService()\0SaveEvent()\0"
    "modificationChanged()\0CancelEvent()\0"
    "updateSharj()\0CheckSendData()\0"
    "FilterBusState()\0"
};

void BazrasMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BazrasMainWindow *_t = static_cast<BazrasMainWindow *>(_o);
        switch (_id) {
        case 0: _t->ActionOnNewCardtype((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 1: _t->driverLogined((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 2: _t->driverLogined((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QDateTime(*)>(_a[4])),(*reinterpret_cast< QDateTime(*)>(_a[5]))); break;
        case 3: _t->SaveOldPath((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QDateTime(*)>(_a[4])),(*reinterpret_cast< QDateTime(*)>(_a[5]))); break;
        case 4: _t->ShowTime(); break;
        case 5: _t->SaveService(); break;
        case 6: _t->SaveEvent(); break;
        case 7: _t->modificationChanged(); break;
        case 8: _t->CancelEvent(); break;
        case 9: _t->updateSharj(); break;
        case 10: _t->CheckSendData(); break;
        case 11: _t->FilterBusState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BazrasMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BazrasMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BazrasMainWindow,
      qt_meta_data_BazrasMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BazrasMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BazrasMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BazrasMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BazrasMainWindow))
        return static_cast<void*>(const_cast< BazrasMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BazrasMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
