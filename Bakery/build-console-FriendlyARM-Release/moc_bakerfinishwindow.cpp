/****************************************************************************
** Meta object code from reading C++ file 'bakerfinishwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MyFirstProject1.8/ui/bakerfinishwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bakerfinishwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BakerFinishWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      31,   18,   18,   18, 0x0a,
      46,   18,   18,   18, 0x0a,
      62,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BakerFinishWindow[] = {
    "BakerFinishWindow\0\0readyRead()\0"
    "clickedPrice()\0clickedCancel()\0"
    "BlinkErrorDo()\0"
};

void BakerFinishWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BakerFinishWindow *_t = static_cast<BakerFinishWindow *>(_o);
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->clickedPrice(); break;
        case 2: _t->clickedCancel(); break;
        case 3: _t->BlinkErrorDo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BakerFinishWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BakerFinishWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BakerFinishWindow,
      qt_meta_data_BakerFinishWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BakerFinishWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BakerFinishWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BakerFinishWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BakerFinishWindow))
        return static_cast<void*>(const_cast< BakerFinishWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BakerFinishWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
