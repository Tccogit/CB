/****************************************************************************
** Meta object code from reading C++ file 'messegebox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bakery/ui/messegebox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messegebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessegeBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x0a,
      38,   33,   11,   11, 0x0a,
      51,   11,   11,   11, 0x0a,
      58,   11,   11,   11, 0x0a,
      74,   68,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MessegeBox[] = {
    "MessegeBox\0\0str\0setText(QString)\0time\0"
    "Show(quint8)\0Show()\0endShow()\0icone\0"
    "setIcon(QPixmap)\0"
};

void MessegeBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessegeBox *_t = static_cast<MessegeBox *>(_o);
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Show((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->Show(); break;
        case 3: _t->endShow(); break;
        case 4: _t->setIcon((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MessegeBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessegeBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MessegeBox,
      qt_meta_data_MessegeBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessegeBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessegeBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessegeBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessegeBox))
        return static_cast<void*>(const_cast< MessegeBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int MessegeBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
