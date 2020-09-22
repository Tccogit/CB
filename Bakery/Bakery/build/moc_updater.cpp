/****************************************************************************
** Meta object code from reading C++ file 'updater.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bakery/mylibs/updater.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Updater[] = {

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
       9,    8,    8,    8, 0x0a,
      23,    8,    8,    8, 0x0a,
      62,   46,    8,    8, 0x08,
     103,   91,    8,    8, 0x08,
     143,  122,    8,    8, 0x08,
     193,  185,    8,    8, 0x08,
     226,  215,    8,    8, 0x08,
     247,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Updater[] = {
    "Updater\0\0startUpdate()\0CreateNewVersionFile()\0"
    "commandId,error\0ftpCommandFinished(int,bool)\0"
    "code,detail\0reply(int,QString)\0"
    "readBytes,totalBytes\0"
    "updateDataTransferProgress(qint64,qint64)\0"
    "urlInfo\0getListInfo(QUrlInfo)\0remotesize\0"
    "downloadFile(qint64)\0readRead()\0"
};

void Updater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Updater *_t = static_cast<Updater *>(_o);
        switch (_id) {
        case 0: _t->startUpdate(); break;
        case 1: _t->CreateNewVersionFile(); break;
        case 2: _t->ftpCommandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->reply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->updateDataTransferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->getListInfo((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 6: _t->downloadFile((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->readRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Updater::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Updater::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Updater,
      qt_meta_data_Updater, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Updater::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Updater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Updater::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Updater))
        return static_cast<void*>(const_cast< Updater*>(this));
    return QObject::qt_metacast(_clname);
}

int Updater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
