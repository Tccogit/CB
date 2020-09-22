/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/ui/settingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      44,   15,   15,   15, 0x05,
      67,   64,   15,   15, 0x05,
      93,   64,   15,   15, 0x05,
     123,   64,   15,   15, 0x05,
     160,  154,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     192,   15,   15,   15, 0x08,
     213,   15,   15,   15, 0x08,
     227,  154,   15,   15, 0x08,
     251,   15,   15,   15, 0x08,
     280,  275,   15,   15, 0x08,
     307,   15,   15,   15, 0x08,
     329,   15,   15,   15, 0x08,
     358,  349,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SettingsDialog[] = {
    "SettingsDialog\0\0newReaderSettingAvailable()\0"
    "readerIdAvailable()\0id\0readerIdAvailable(quint8)\0"
    "ReaderFormatAvailable(quint8)\0"
    "ReaderVersionAvailable(quint8)\0count\0"
    "newReaderCountAvailable(quint8)\0"
    "On_Buttons_Clicked()\0setKeyboard()\0"
    "ReaderCountChanged(int)\0ConsoleModelChange(int)\0"
    "item\0mobileOperatorChanged(int)\0"
    "StartRecoveryReader()\0EndRecoveryReader()\0"
    "dateTime\0setDateTime(QDateTime)\0"
};

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SettingsDialog *_t = static_cast<SettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->newReaderSettingAvailable(); break;
        case 1: _t->readerIdAvailable(); break;
        case 2: _t->readerIdAvailable((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 3: _t->ReaderFormatAvailable((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->ReaderVersionAvailable((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 5: _t->newReaderCountAvailable((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->On_Buttons_Clicked(); break;
        case 7: _t->setKeyboard(); break;
        case 8: _t->ReaderCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->ConsoleModelChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->mobileOperatorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->StartRecoveryReader(); break;
        case 12: _t->EndRecoveryReader(); break;
        case 13: _t->setDateTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SettingsDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingsDialog,
      qt_meta_data_SettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDialog))
        return static_cast<void*>(const_cast< SettingsDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SettingsDialog::newReaderSettingAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SettingsDialog::readerIdAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SettingsDialog::readerIdAvailable(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingsDialog::ReaderFormatAvailable(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SettingsDialog::ReaderVersionAvailable(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SettingsDialog::newReaderCountAvailable(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
