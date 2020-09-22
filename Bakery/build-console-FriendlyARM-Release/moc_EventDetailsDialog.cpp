/****************************************************************************
** Meta object code from reading C++ file 'EventDetailsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/ui/EventDetailsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EventDetailsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EventDetailsDialog[] = {

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
      20,   19,   19,   19, 0x08,
      49,   19,   19,   19, 0x08,
      73,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EventDetailsDialog[] = {
    "EventDetailsDialog\0\0On_Buttons_Clicked(QWidget*)\0"
    "On_BackButton_Clicked()\0"
    "On_Timer_TimedOut(QWidget*)\0"
};

void EventDetailsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EventDetailsDialog *_t = static_cast<EventDetailsDialog *>(_o);
        switch (_id) {
        case 0: _t->On_Buttons_Clicked((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->On_BackButton_Clicked(); break;
        case 2: _t->On_Timer_TimedOut((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EventDetailsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EventDetailsDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EventDetailsDialog,
      qt_meta_data_EventDetailsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EventDetailsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EventDetailsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EventDetailsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EventDetailsDialog))
        return static_cast<void*>(const_cast< EventDetailsDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int EventDetailsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
