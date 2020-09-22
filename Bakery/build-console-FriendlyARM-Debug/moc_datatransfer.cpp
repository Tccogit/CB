/****************************************************************************
** Meta object code from reading C++ file 'datatransfer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/mylibs/datatransfer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datatransfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataTransfer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      39,   32,   13,   13, 0x05,
      61,   13,   13,   13, 0x05,
      82,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     106,   13,   13,   13, 0x0a,
     146,   13,  141,   13, 0x0a,
     173,   13,   13,   13, 0x0a,
     188,   13,   13,   13, 0x0a,
     201,   13,   13,   13, 0x0a,
     224,   13,  141,   13, 0x0a,
     256,  247,   13,   13, 0x0a,
     292,   13,   13,   13, 0x0a,
     313,   13,   13,   13, 0x0a,
     354,  352,   13,   13, 0x08,
     378,   13,  141,   13, 0x08,
     407,   13,  141,   13, 0x08,
     441,   13,  141,   13, 0x08,
     472,   13,  141,   13, 0x08,
     500,   13,   13,   13, 0x08,
     514,   13,   13,   13, 0x08,
     528,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DataTransfer[] = {
    "DataTransfer\0\0eTicketDB_Empty()\0status\0"
    "forceUnload_End(bool)\0SendTicketComplate()\0"
    "SendTicketNotComplate()\0"
    "Insert_pppIp_To_ServerDB_recuest()\0"
    "bool\0Insert_pppIp_To_ServerDB()\0"
    "closeMySqlDB()\0TimerStope()\0"
    "clearCardSendCounter()\0forceUnloade_Eticket()\0"
    "dateTime\0setDateTimeFromGMTThread(QDateTime)\0"
    "setDateTimeFromGMT()\0"
    "serviceRequestFinished(QNetworkReply*)\0"
    ",\0SetDate(QDateTime,bool)\0"
    "InsertCardData_To_ServerDB()\0"
    "InsertCardData_Custom_To_Server()\0"
    "InsertQuery_Custom_To_Server()\0"
    "InsertEventData_To_Server()\0SetSettings()\0"
    "PingProcess()\0HaveARequest()\0"
};

void DataTransfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataTransfer *_t = static_cast<DataTransfer *>(_o);
        switch (_id) {
        case 0: _t->eTicketDB_Empty(); break;
        case 1: _t->forceUnload_End((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SendTicketComplate(); break;
        case 3: _t->SendTicketNotComplate(); break;
        case 4: _t->Insert_pppIp_To_ServerDB_recuest(); break;
        case 5: { bool _r = _t->Insert_pppIp_To_ServerDB();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->closeMySqlDB(); break;
        case 7: _t->TimerStope(); break;
        case 8: _t->clearCardSendCounter(); break;
        case 9: { bool _r = _t->forceUnloade_Eticket();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->setDateTimeFromGMTThread((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 11: _t->setDateTimeFromGMT(); break;
        case 12: _t->serviceRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->SetDate((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: { bool _r = _t->InsertCardData_To_ServerDB();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->InsertCardData_Custom_To_Server();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->InsertQuery_Custom_To_Server();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->InsertEventData_To_Server();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->SetSettings(); break;
        case 19: _t->PingProcess(); break;
        case 20: _t->HaveARequest(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataTransfer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataTransfer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataTransfer,
      qt_meta_data_DataTransfer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataTransfer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataTransfer))
        return static_cast<void*>(const_cast< DataTransfer*>(this));
    return QObject::qt_metacast(_clname);
}

int DataTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void DataTransfer::eTicketDB_Empty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DataTransfer::forceUnload_End(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataTransfer::SendTicketComplate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DataTransfer::SendTicketNotComplate()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_DataTransfer_Thread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      43,   20,   20,   20, 0x05,
      64,   20,   20,   20, 0x05,
      95,   20,   20,   20, 0x05,
     116,   20,   20,   20, 0x05,
     140,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     170,   20,   20,   20, 0x08,
     193,   20,   20,   20, 0x08,
     219,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DataTransfer_Thread[] = {
    "DataTransfer_Thread\0\0New_pppIp_Available()\0"
    "closeMySql_request()\0"
    "clearCardSendCounter_request()\0"
    "SendTicketComplate()\0SendTicketNotComplate()\0"
    "setDateTimeFromGMT(QDateTime)\0"
    "SendTicketIsComplate()\0SendTicketIsNotComplate()\0"
    "reStartThread()\0"
};

void DataTransfer_Thread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataTransfer_Thread *_t = static_cast<DataTransfer_Thread *>(_o);
        switch (_id) {
        case 0: _t->New_pppIp_Available(); break;
        case 1: _t->closeMySql_request(); break;
        case 2: _t->clearCardSendCounter_request(); break;
        case 3: _t->SendTicketComplate(); break;
        case 4: _t->SendTicketNotComplate(); break;
        case 5: _t->setDateTimeFromGMT((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 6: _t->SendTicketIsComplate(); break;
        case 7: _t->SendTicketIsNotComplate(); break;
        case 8: _t->reStartThread(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataTransfer_Thread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataTransfer_Thread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DataTransfer_Thread,
      qt_meta_data_DataTransfer_Thread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataTransfer_Thread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataTransfer_Thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataTransfer_Thread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataTransfer_Thread))
        return static_cast<void*>(const_cast< DataTransfer_Thread*>(this));
    return QThread::qt_metacast(_clname);
}

int DataTransfer_Thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DataTransfer_Thread::New_pppIp_Available()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DataTransfer_Thread::closeMySql_request()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DataTransfer_Thread::clearCardSendCounter_request()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DataTransfer_Thread::SendTicketComplate()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DataTransfer_Thread::SendTicketNotComplate()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void DataTransfer_Thread::setDateTimeFromGMT(QDateTime _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
