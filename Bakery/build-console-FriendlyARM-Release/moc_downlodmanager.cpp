/****************************************************************************
** Meta object code from reading C++ file 'downlodmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/mylibs/downlodmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downlodmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DownlodManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   16,   15,   15, 0x05,
      83,   72,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   97,   15,   15, 0x0a,
     128,   15,   15,   15, 0x0a,
     136,   15,   15,   15, 0x0a,
     153,  145,   15,   15, 0x08,
     180,   15,   15,   15, 0x08,
     216,  191,   15,   15, 0x08,
     253,  248,   15,   15, 0x08,
     288,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DownlodManager[] = {
    "DownlodManager\0\0File,_Url,WriteFile\0"
    "downloadComplete(QString,QUrl,bool)\0"
    "percentage\0progress(int)\0url,resume\0"
    "download(QUrl,bool)\0pause()\0resume()\0"
    "request\0download(QNetworkRequest&)\0"
    "finished()\0bytesReceived,bytesTotal\0"
    "downloadProgress(qint64,qint64)\0code\0"
    "error(QNetworkReply::NetworkError)\0"
    "readyRead()\0"
};

void DownlodManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DownlodManager *_t = static_cast<DownlodManager *>(_o);
        switch (_id) {
        case 0: _t->downloadComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->download((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->pause(); break;
        case 4: _t->resume(); break;
        case 5: _t->download((*reinterpret_cast< QNetworkRequest(*)>(_a[1]))); break;
        case 6: _t->finished(); break;
        case 7: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 9: _t->readyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DownlodManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DownlodManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DownlodManager,
      qt_meta_data_DownlodManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DownlodManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DownlodManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DownlodManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownlodManager))
        return static_cast<void*>(const_cast< DownlodManager*>(this));
    return QObject::qt_metacast(_clname);
}

int DownlodManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DownlodManager::downloadComplete(QString _t1, QUrl _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DownlodManager::progress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
