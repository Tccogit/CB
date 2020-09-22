/****************************************************************************
** Meta object code from reading C++ file 'gsm.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/mylibs/gsm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gsm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GSM[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x05,
      21,    4,    4,    4, 0x05,
      33,    4,    4,    4, 0x05,
      48,    4,    4,    4, 0x05,
      65,    4,    4,    4, 0x05,
      91,   85,    4,    4, 0x05,
     117,   85,    4,    4, 0x05,
     146,    4,    4,    4, 0x05,
     169,    4,    4,    4, 0x05,
     192,    4,    4,    4, 0x05,
     214,    4,    4,    4, 0x05,
     235,    4,    4,    4, 0x05,
     245,    4,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
     271,  266,  261,    4, 0x0a,
     306,    4,  261,    4, 0x0a,
     316,    4,  261,    4, 0x0a,
     327,    4,  261,    4, 0x0a,
     340,    4,    4,    4, 0x0a,
     351,    4,    4,    4, 0x0a,
     383,    4,  372,    4, 0x08,
     394,    4,    4,    4, 0x08,
     410,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GSM[] = {
    "GSM\0\0error_Recived()\0connectOk()\0"
    "rial_Recived()\0SendOk_Recived()\0"
    "SimCharge_Changed()\0value\0"
    "GsmAntena_Changed(quint8)\0"
    "BattryValue_Changed(quint16)\0"
    "GsmState_Changed(bool)\0GpsState_Changed(bool)\0"
    "New_pppIp_Available()\0closeMySql_request()\0"
    "ringing()\0Start_Updater()\0bool\0mode\0"
    "setConnectionMode(CONNECTION_MODE)\0"
    "powerOn()\0powerOff()\0powerReset()\0"
    "reconfig()\0answerIncomingCall()\0"
    "QByteArray\0ReadUart()\0ActionProcess()\0"
    "_Configuration()\0"
};

void GSM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GSM *_t = static_cast<GSM *>(_o);
        switch (_id) {
        case 0: _t->error_Recived(); break;
        case 1: _t->connectOk(); break;
        case 2: _t->rial_Recived(); break;
        case 3: _t->SendOk_Recived(); break;
        case 4: _t->SimCharge_Changed(); break;
        case 5: _t->GsmAntena_Changed((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->BattryValue_Changed((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 7: _t->GsmState_Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->GpsState_Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->New_pppIp_Available(); break;
        case 10: _t->closeMySql_request(); break;
        case 11: _t->ringing(); break;
        case 12: _t->Start_Updater(); break;
        case 13: { bool _r = _t->setConnectionMode((*reinterpret_cast< CONNECTION_MODE(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->powerOn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->powerOff();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->powerReset();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->reconfig(); break;
        case 18: _t->answerIncomingCall(); break;
        case 19: { QByteArray _r = _t->ReadUart();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 20: _t->ActionProcess(); break;
        case 21: _t->_Configuration(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GSM::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GSM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GSM,
      qt_meta_data_GSM, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GSM::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GSM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GSM::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GSM))
        return static_cast<void*>(const_cast< GSM*>(this));
    return QObject::qt_metacast(_clname);
}

int GSM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void GSM::error_Recived()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GSM::connectOk()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GSM::rial_Recived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GSM::SendOk_Recived()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GSM::SimCharge_Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GSM::GsmAntena_Changed(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GSM::BattryValue_Changed(quint16 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GSM::GsmState_Changed(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GSM::GpsState_Changed(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GSM::New_pppIp_Available()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void GSM::closeMySql_request()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void GSM::ringing()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void GSM::Start_Updater()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}
QT_END_MOC_NAMESPACE
