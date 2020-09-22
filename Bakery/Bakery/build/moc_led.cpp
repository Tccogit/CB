/****************************************************************************
** Meta object code from reading C++ file 'led.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bakery/ui/led.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'led.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LED[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    5,    4,    4, 0x0a,
      53,    4,   37,    4, 0x0a,
      61,    4,    4,    4, 0x0a,
      69,    4,    4,    4, 0x0a,
      82,   78,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LED[] = {
    "LED\0\0color\0setColor(Qt::GlobalColor)\0"
    "Qt::GlobalColor\0color()\0setOn()\0"
    "setOff()\0cmd\0setOnOff(bool)\0"
};

void LED::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LED *_t = static_cast<LED *>(_o);
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< Qt::GlobalColor(*)>(_a[1]))); break;
        case 1: { Qt::GlobalColor _r = _t->color();
            if (_a[0]) *reinterpret_cast< Qt::GlobalColor*>(_a[0]) = _r; }  break;
        case 2: _t->setOn(); break;
        case 3: _t->setOff(); break;
        case 4: _t->setOnOff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LED::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LED::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LED,
      qt_meta_data_LED, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LED::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LED::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LED::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LED))
        return static_cast<void*>(const_cast< LED*>(this));
    return QWidget::qt_metacast(_clname);
}

int LED::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
