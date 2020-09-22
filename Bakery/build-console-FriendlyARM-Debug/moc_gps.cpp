/****************************************************************************
** Meta object code from reading C++ file 'gps.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/mylibs/gps.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GPS[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x05,
      31,    4,    4,    4, 0x05,
      63,   54,    4,    4, 0x05,
      86,    4,    4,    4, 0x05,
      97,    4,    4,    4, 0x05,
     107,    4,    4,    4, 0x05,
     124,    4,    4,    4, 0x05,
     166,    4,    4,    4, 0x05,
     211,    4,    4,    4, 0x05,
     228,    4,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
     246,    4,    4,    4, 0x0a,
     278,    4,  267,    4, 0x08,
     289,    4,    4,    4, 0x08,
     305,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GPS[] = {
    "GPS\0\0GpsAntena_Changed(quint8)\0"
    "GpsState_Changed(bool)\0dateTime\0"
    "newDateTime(QDateTime)\0BusMoved()\0"
    "BusStop()\0dataNotRecived()\0"
    "BusPassingStation(Station::StationRecord)\0"
    "BusMoveToNextStation(Station::StationRecord)\0"
    "BusNearStation()\0changeDirection()\0"
    "ResstGPSConfig(bool)\0QByteArray\0"
    "ReadUart()\0ActionProcess()\0"
    "ActionProcessSimulation()\0"
};

void GPS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GPS *_t = static_cast<GPS *>(_o);
        switch (_id) {
        case 0: _t->GpsAntena_Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->GpsState_Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->newDateTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 3: _t->BusMoved(); break;
        case 4: _t->BusStop(); break;
        case 5: _t->dataNotRecived(); break;
        case 6: _t->BusPassingStation((*reinterpret_cast< Station::StationRecord(*)>(_a[1]))); break;
        case 7: _t->BusMoveToNextStation((*reinterpret_cast< Station::StationRecord(*)>(_a[1]))); break;
        case 8: _t->BusNearStation(); break;
        case 9: _t->changeDirection(); break;
        case 10: _t->ResstGPSConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { QByteArray _r = _t->ReadUart();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 12: _t->ActionProcess(); break;
        case 13: _t->ActionProcessSimulation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GPS::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GPS::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GPS,
      qt_meta_data_GPS, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GPS::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GPS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GPS::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GPS))
        return static_cast<void*>(const_cast< GPS*>(this));
    return QObject::qt_metacast(_clname);
}

int GPS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void GPS::GpsAntena_Changed(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPS::GpsState_Changed(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPS::newDateTime(QDateTime _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPS::BusMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GPS::BusStop()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GPS::dataNotRecived()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void GPS::BusPassingStation(Station::StationRecord _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GPS::BusMoveToNextStation(Station::StationRecord _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GPS::BusNearStation()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void GPS::changeDirection()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
