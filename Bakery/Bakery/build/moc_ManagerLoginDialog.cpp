/****************************************************************************
** Meta object code from reading C++ file 'ManagerLoginDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bakery/ui/ManagerLoginDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManagerLoginDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ManagerLoginDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   19,   19,   19, 0x0a,
      49,   19,   19,   19, 0x08,
      63,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ManagerLoginDialog[] = {
    "ManagerLoginDialog\0\0logedIn(USER_TYPE1)\0"
    "logOut()\0setkeyboard()\0On_MainButtons_Clicked()\0"
};

void ManagerLoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ManagerLoginDialog *_t = static_cast<ManagerLoginDialog *>(_o);
        switch (_id) {
        case 0: _t->logedIn((*reinterpret_cast< USER_TYPE1(*)>(_a[1]))); break;
        case 1: _t->logOut(); break;
        case 2: _t->setkeyboard(); break;
        case 3: _t->On_MainButtons_Clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ManagerLoginDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ManagerLoginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ManagerLoginDialog,
      qt_meta_data_ManagerLoginDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ManagerLoginDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ManagerLoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ManagerLoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ManagerLoginDialog))
        return static_cast<void*>(const_cast< ManagerLoginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ManagerLoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ManagerLoginDialog::logedIn(USER_TYPE1 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
