/****************************************************************************
** Meta object code from reading C++ file 'updatever.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/mylibs/updatever.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatever.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_updatever[] = {

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
      11,   10,   10,   10, 0x0a,
      36,   25,   10,   10, 0x08,
      71,   50,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_updatever[] = {
    "updatever\0\0StartUpdate()\0percentage\0"
    "progress(int)\0_file,_Url,WriteFile\0"
    "finished(QString,QUrl,bool)\0"
};

void updatever::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        updatever *_t = static_cast<updatever *>(_o);
        switch (_id) {
        case 0: _t->StartUpdate(); break;
        case 1: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->finished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData updatever::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject updatever::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_updatever,
      qt_meta_data_updatever, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &updatever::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *updatever::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *updatever::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_updatever))
        return static_cast<void*>(const_cast< updatever*>(this));
    return QObject::qt_metacast(_clname);
}

int updatever::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
