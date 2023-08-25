/****************************************************************************
** Meta object code from reading C++ file 'signin_windows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../signin_windows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signin_windows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Signin_Windows_t {
    QByteArrayData data[5];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Signin_Windows_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Signin_Windows_t qt_meta_stringdata_Signin_Windows = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Signin_Windows"
QT_MOC_LITERAL(1, 15, 16), // "sig_clickRegster"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 26), // "on_pushButtonLogin_clicked"
QT_MOC_LITERAL(4, 60, 28) // "on_pushButtonRegster_clicked"

    },
    "Signin_Windows\0sig_clickRegster\0\0"
    "on_pushButtonLogin_clicked\0"
    "on_pushButtonRegster_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Signin_Windows[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Signin_Windows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Signin_Windows *_t = static_cast<Signin_Windows *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_clickRegster(); break;
        case 1: _t->on_pushButtonLogin_clicked(); break;
        case 2: _t->on_pushButtonRegster_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Signin_Windows::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Signin_Windows::sig_clickRegster)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Signin_Windows::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Signin_Windows.data,
      qt_meta_data_Signin_Windows,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Signin_Windows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Signin_Windows::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Signin_Windows.stringdata0))
        return static_cast<void*>(const_cast< Signin_Windows*>(this));
    return QWidget::qt_metacast(_clname);
}

int Signin_Windows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Signin_Windows::sig_clickRegster()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
