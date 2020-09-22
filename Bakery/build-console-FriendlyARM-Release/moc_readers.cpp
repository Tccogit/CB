/****************************************************************************
** Meta object code from reading C++ file 'readers.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/mylibs/readers.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Readers[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      31,    8,    8,    8, 0x05,
      78,    8,    8,    8, 0x05,
      98,    8,    8,    8, 0x05,
     118,    8,    8,    8, 0x05,
     135,    8,    8,    8, 0x05,
     163,  158,    8,    8, 0x05,
     226,    8,    8,    8, 0x05,
     247,    8,    8,    8, 0x05,
     264,    8,    8,    8, 0x05,
     284,  281,    8,    8, 0x05,
     322,    8,    8,    8, 0x05,
     364,    8,    8,    8, 0x05,
     384,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     419,  413,  406,    8, 0x0a,
     441,    8,    8,    8, 0x0a,
     452,    8,    8,    8, 0x0a,
     473,    8,    8,    8, 0x0a,
     489,    8,    8,    8, 0x0a,
     517,  511,    8,    8, 0x0a,
     558,  549,    8,    8, 0x0a,
     579,  549,    8,    8, 0x0a,
     617,    8,  612,    8, 0x08,
     641,  631,    8,    8, 0x08,
     660,    8,    8,    8, 0x08,
     683,    8,    8,    8, 0x08,
     700,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Readers[] = {
    "Readers\0\0readyRead(QByteArray)\0"
    "newCardData_Recived(QList<Readers::CARD_INFO>)\0"
    "startDownloading1()\0startDownloading2()\0"
    "endDownloading()\0driverLogined(quint64)\0"
    ",,,,\0"
    "driverLogined(quint64,QDateTime,QDateTime,QDateTime,QDateTime)\0"
    "readerIdSent(quint8)\0FormatOk(quint8)\0"
    "ConfigOk(quint8)\0,,\0"
    "ManagerLogined(quint8,qint16,quint32)\0"
    "GetReaderVersion(Readers::READER_VERSION)\0"
    "EndRecoveryReader()\0StartRecoveryReader()\0"
    "qint64\0array\0WriteUart(QByteArray)\0"
    "ReadUart()\0newConfigAvailable()\0"
    "applyReaderId()\0applyReaderId(quint8)\0"
    "count\0newReaderCountAvailable(quint8)\0"
    "readerId\0formatReader(quint8)\0"
    "RequestVersionFromReader(quint8)\0bool\0"
    "sendRequest()\0direction\0setDirection(bool)\0"
    "setDirectionToRecive()\0commandTimeOut()\0"
    "ConfigReaders()\0"
};

void Readers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Readers *_t = static_cast<Readers *>(_o);
        switch (_id) {
        case 0: _t->readyRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->newCardData_Recived((*reinterpret_cast< QList<Readers::CARD_INFO>(*)>(_a[1]))); break;
        case 2: _t->startDownloading1(); break;
        case 3: _t->startDownloading2(); break;
        case 4: _t->endDownloading(); break;
        case 5: _t->driverLogined((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 6: _t->driverLogined((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< QDateTime(*)>(_a[4])),(*reinterpret_cast< QDateTime(*)>(_a[5]))); break;
        case 7: _t->readerIdSent((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->FormatOk((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 9: _t->ConfigOk((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->ManagerLogined((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 11: _t->GetReaderVersion((*reinterpret_cast< Readers::READER_VERSION(*)>(_a[1]))); break;
        case 12: _t->EndRecoveryReader(); break;
        case 13: _t->StartRecoveryReader(); break;
        case 14: { qint64 _r = _t->WriteUart((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 15: _t->ReadUart(); break;
        case 16: _t->newConfigAvailable(); break;
        case 17: _t->applyReaderId(); break;
        case 18: _t->applyReaderId((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 19: _t->newReaderCountAvailable((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 20: _t->formatReader((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 21: _t->RequestVersionFromReader((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 22: { bool _r = _t->sendRequest();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: _t->setDirection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setDirectionToRecive(); break;
        case 25: _t->commandTimeOut(); break;
        case 26: _t->ConfigReaders(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Readers::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Readers::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Readers,
      qt_meta_data_Readers, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Readers::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Readers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Readers::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Readers))
        return static_cast<void*>(const_cast< Readers*>(this));
    return QObject::qt_metacast(_clname);
}

int Readers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void Readers::readyRead(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Readers::newCardData_Recived(QList<Readers::CARD_INFO> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Readers::startDownloading1()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Readers::startDownloading2()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Readers::endDownloading()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Readers::driverLogined(quint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Readers::driverLogined(quint64 _t1, QDateTime _t2, QDateTime _t3, QDateTime _t4, QDateTime _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Readers::readerIdSent(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Readers::FormatOk(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Readers::ConfigOk(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Readers::ManagerLogined(quint8 _t1, qint16 _t2, quint32 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Readers::GetReaderVersion(Readers::READER_VERSION _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Readers::EndRecoveryReader()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void Readers::StartRecoveryReader()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}
QT_END_MOC_NAMESPACE
