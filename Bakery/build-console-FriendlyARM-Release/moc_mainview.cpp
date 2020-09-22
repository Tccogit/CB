/****************************************************************************
** Meta object code from reading C++ file 'mainview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/ui/mainview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   10,    9,    9, 0x05,
      34,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,    9,    9,    9, 0x08,
     101,   96,    9,    9, 0x08,
     150,  143,    9,    9, 0x08,
     176,  173,    9,    9, 0x08,
     197,  173,    9,    9, 0x08,
     221,  173,    9,    9, 0x08,
     251,  245,    9,    9, 0x08,
     274,  271,    9,    9, 0x08,
     333,  322,  317,    9, 0x08,
     352,    9,    9,    9, 0x08,
     368,    9,    9,    9, 0x08,
     407,    9,    9,    9, 0x08,
     422,    9,    9,    9, 0x08,
     437,    9,    9,    9, 0x08,
     444,    9,    9,    9, 0x08,
     458,    9,    9,    9, 0x08,
     479,    9,    9,    9, 0x08,
     503,    9,    9,    9, 0x08,
     519,    9,    9,    9, 0x08,
     550,    9,    9,    9, 0x08,
     570,    9,    9,    9, 0x08,
     580,    9,  317,    9, 0x08,
     608,    9,    9,    9, 0x08,
     630,    9,    9,    9, 0x08,
     651,    9,    9,    9, 0x08,
     669,    9,    9,    9, 0x08,
     711,    9,    9,    9, 0x08,
     731,    9,    9,    9, 0x08,
     751,    9,    9,    9, 0x08,
     773,    9,    9,    9, 0x08,
     793,    9,    9,    9, 0x08,
     816,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainView[] = {
    "MainView\0\0str\0newMessage(QString)\0"
    "newReaderSettingAvailableByManager()\0"
    "On_MainButtons_Clicked()\0info\0"
    "UpdateCounters(QList<Readers::CARD_INFO>)\0"
    "serial\0driverLogined(quint64)\0id\0"
    "readerIdSent(quint8)\0readerFormat_Ok(quint8)\0"
    "readerConfig_Ok(quint8)\0count\0"
    "newCardSent(quint8)\0,,\0"
    "ActionOnNewCardtype(quint8,qint16,quint32)\0"
    "bool\0reportType\0Report(ReportType)\0"
    "clearCounters()\0PassingStation(Station::StationRecord)\0"
    "updateValues()\0incomingCall()\0isOK()\0"
    "DriverAlert()\0SendTicketComplate()\0"
    "SendTicketNotComplate()\0ButtonAnimate()\0"
    "On_EventButtonTimer_TimedOut()\0"
    "on_TurnOn_Console()\0SetNews()\0"
    "InsertAvlData_To_ServerDB()\0"
    "changeDirectionSlot()\0driverLoginedError()\0"
    "ReaderTurnOffOn()\0"
    "GetReaderVersion(Readers::READER_VERSION)\0"
    "setFixGPSShow(bool)\0ShowGPSIsNotValid()\0"
    "StartRecoveryReader()\0EndRecoveryReader()\0"
    "SendSimNumber(QString)\0ShowMessageTime()\0"
};

void MainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainView *_t = static_cast<MainView *>(_o);
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->newReaderSettingAvailableByManager(); break;
        case 2: _t->On_MainButtons_Clicked(); break;
        case 3: _t->UpdateCounters((*reinterpret_cast< QList<Readers::CARD_INFO>(*)>(_a[1]))); break;
        case 4: _t->driverLogined((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 5: _t->readerIdSent((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->readerFormat_Ok((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 7: _t->readerConfig_Ok((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 8: _t->newCardSent((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 9: _t->ActionOnNewCardtype((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 10: { bool _r = _t->Report((*reinterpret_cast< ReportType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->clearCounters(); break;
        case 12: _t->PassingStation((*reinterpret_cast< Station::StationRecord(*)>(_a[1]))); break;
        case 13: _t->updateValues(); break;
        case 14: _t->incomingCall(); break;
        case 15: _t->isOK(); break;
        case 16: _t->DriverAlert(); break;
        case 17: _t->SendTicketComplate(); break;
        case 18: _t->SendTicketNotComplate(); break;
        case 19: _t->ButtonAnimate(); break;
        case 20: _t->On_EventButtonTimer_TimedOut(); break;
        case 21: _t->on_TurnOn_Console(); break;
        case 22: _t->SetNews(); break;
        case 23: { bool _r = _t->InsertAvlData_To_ServerDB();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: _t->changeDirectionSlot(); break;
        case 25: _t->driverLoginedError(); break;
        case 26: _t->ReaderTurnOffOn(); break;
        case 27: _t->GetReaderVersion((*reinterpret_cast< Readers::READER_VERSION(*)>(_a[1]))); break;
        case 28: _t->setFixGPSShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->ShowGPSIsNotValid(); break;
        case 30: _t->StartRecoveryReader(); break;
        case 31: _t->EndRecoveryReader(); break;
        case 32: _t->SendSimNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->ShowMessageTime(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainView::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainView,
      qt_meta_data_MainView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainView))
        return static_cast<void*>(const_cast< MainView*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void MainView::newMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainView::newReaderSettingAvailableByManager()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
