/****************************************************************************
** Meta object code from reading C++ file 'antenawidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bakery/ui/antenawidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'antenawidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AntenaWidget[] = {

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
      14,   13,   13,   13, 0x08,
      31,   25,   13,   13, 0x0a,
      55,   48,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AntenaWidget[] = {
    "AntenaWidget\0\0showHide()\0value\0"
    "SetValue(quint8)\0active\0setFixShow(bool)\0"
};

void AntenaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AntenaWidget *_t = static_cast<AntenaWidget *>(_o);
        switch (_id) {
        case 0: _t->showHide(); break;
        case 1: _t->SetValue((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->setFixShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AntenaWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AntenaWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AntenaWidget,
      qt_meta_data_AntenaWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AntenaWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AntenaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AntenaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AntenaWidget))
        return static_cast<void*>(const_cast< AntenaWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AntenaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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