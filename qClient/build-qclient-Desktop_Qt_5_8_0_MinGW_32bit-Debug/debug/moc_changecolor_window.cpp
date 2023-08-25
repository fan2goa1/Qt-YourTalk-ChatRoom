/****************************************************************************
** Meta object code from reading C++ file 'changecolor_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../changecolor_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changecolor_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChangeColor_Window_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChangeColor_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChangeColor_Window_t qt_meta_stringdata_ChangeColor_Window = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ChangeColor_Window"
QT_MOC_LITERAL(1, 19, 9), // "sig_color"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "color"
QT_MOC_LITERAL(4, 36, 15), // "on_blue_clicked"
QT_MOC_LITERAL(5, 52, 17), // "on_yellow_clicked"
QT_MOC_LITERAL(6, 70, 14), // "on_red_clicked"
QT_MOC_LITERAL(7, 85, 16) // "on_black_clicked"

    },
    "ChangeColor_Window\0sig_color\0\0color\0"
    "on_blue_clicked\0on_yellow_clicked\0"
    "on_red_clicked\0on_black_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChangeColor_Window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChangeColor_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChangeColor_Window *_t = static_cast<ChangeColor_Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_color((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_blue_clicked(); break;
        case 2: _t->on_yellow_clicked(); break;
        case 3: _t->on_red_clicked(); break;
        case 4: _t->on_black_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChangeColor_Window::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChangeColor_Window::sig_color)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ChangeColor_Window::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangeColor_Window.data,
      qt_meta_data_ChangeColor_Window,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChangeColor_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChangeColor_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeColor_Window.stringdata0))
        return static_cast<void*>(const_cast< ChangeColor_Window*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChangeColor_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ChangeColor_Window::sig_color(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
