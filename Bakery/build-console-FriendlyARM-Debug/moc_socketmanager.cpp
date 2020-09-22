/****************************************************************************
** Meta object code from reading C++ file 'socketmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/mylibs/socketmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SocketManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   14,   14,   14, 0x0a,
      48,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SocketManager[] = {
    "SocketManager\0\0YoueHaveARequest()\0"
    "readTcpData()\0SocketDisconnect()\0"
};

void SocketManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SocketManager *_t = static_cast<SocketManager *>(_o);
        switch (_id) {
        case 0: _t->YoueHaveARequest(); break;
        case 1: _t->readTcpData(); break;
        case 2: _t->SocketDisconnect(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SocketManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SocketManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SocketManager,
      qt_meta_data_SocketManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SocketManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SocketManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SocketManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SocketManager))
        return static_cast<void*>(const_cast< SocketManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SocketManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SocketManager::YoueHaveARequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
