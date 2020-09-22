/****************************************************************************
** Meta object code from reading C++ file 'gpio.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bakery/mylibs/gpio.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GPIO[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,    6,    5, 0x0a,
      48,   32,    6,    5, 0x0a,
      71,    5,    6,    5, 0x0a,
      85,    5,    6,    5, 0x0a,
     103,   93,    6,    5, 0x0a,
     118,    5,    6,    5, 0x0a,
     128,    5,    6,    5, 0x0a,
     137,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GPIO[] = {
    "GPIO\0\0bool\0state\0setValue(bool)\0"
    "state,pinNumber\0setValue(bool,quint16)\0"
    "Chaeckvalue()\0value()\0pinNumber\0"
    "value(quint16)\0setHigh()\0setLow()\0"
    "ActionProcess()\0"
};

void GPIO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GPIO *_t = static_cast<GPIO *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->setValue((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->setValue((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->Chaeckvalue();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->value();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->value((*reinterpret_cast< quint16(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->setHigh();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->setLow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->ActionProcess(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GPIO::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GPIO::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GPIO,
      qt_meta_data_GPIO, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GPIO::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GPIO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GPIO::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GPIO))
        return static_cast<void*>(const_cast< GPIO*>(this));
    return QObject::qt_metacast(_clname);
}

int GPIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
