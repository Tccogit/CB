/****************************************************************************
** Meta object code from reading C++ file 'wathchdog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bakery/mylibs/wathchdog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wathchdog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WathchDog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   10,   11,   10, 0x0a,
      23,   10,   10,   10, 0x0a,
      40,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WathchDog[] = {
    "WathchDog\0\0bool\0Kick()\0startWhatching()\0"
    "stopWhatching()\0"
};

void WathchDog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WathchDog *_t = static_cast<WathchDog *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->Kick();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->startWhatching(); break;
        case 2: _t->stopWhatching(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WathchDog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WathchDog::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WathchDog,
      qt_meta_data_WathchDog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WathchDog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WathchDog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WathchDog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WathchDog))
        return static_cast<void*>(const_cast< WathchDog*>(this));
    return QThread::qt_metacast(_clname);
}

int WathchDog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
