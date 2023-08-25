/****************************************************************************
** Meta object code from reading C++ file 'friend_windows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../friend_windows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friend_windows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Friend_Windows_t {
    QByteArrayData data[16];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Friend_Windows_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Friend_Windows_t qt_meta_stringdata_Friend_Windows = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Friend_Windows"
QT_MOC_LITERAL(1, 15, 13), // "select_friend"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "Chat_windows*"
QT_MOC_LITERAL(4, 44, 3), // "win"
QT_MOC_LITERAL(5, 48, 5), // "cname"
QT_MOC_LITERAL(6, 54, 12), // "select_group"
QT_MOC_LITERAL(7, 67, 18), // "Groupchat_windows*"
QT_MOC_LITERAL(8, 86, 12), // "sig_clickAdd"
QT_MOC_LITERAL(9, 99, 37), // "on_listWidgetFriend_itemDoubl..."
QT_MOC_LITERAL(10, 137, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 154, 4), // "item"
QT_MOC_LITERAL(12, 159, 36), // "on_listWidgetGroup_itemDouble..."
QT_MOC_LITERAL(13, 196, 38), // "on_listWidgetNewNote_itemDoub..."
QT_MOC_LITERAL(14, 235, 21), // "on_changeHead_clicked"
QT_MOC_LITERAL(15, 257, 14) // "on_bt1_clicked"

    },
    "Friend_Windows\0select_friend\0\0"
    "Chat_windows*\0win\0cname\0select_group\0"
    "Groupchat_windows*\0sig_clickAdd\0"
    "on_listWidgetFriend_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0"
    "on_listWidgetGroup_itemDoubleClicked\0"
    "on_listWidgetNewNote_itemDoubleClicked\0"
    "on_changeHead_clicked\0on_bt1_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Friend_Windows[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    2,   59,    2, 0x06 /* Public */,
       8,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   65,    2, 0x08 /* Private */,
      12,    1,   68,    2, 0x08 /* Private */,
      13,    1,   71,    2, 0x08 /* Private */,
      14,    0,   74,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Friend_Windows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Friend_Windows *_t = static_cast<Friend_Windows *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->select_friend((*reinterpret_cast< Chat_windows*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->select_group((*reinterpret_cast< Groupchat_windows*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->sig_clickAdd(); break;
        case 3: _t->on_listWidgetFriend_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_listWidgetGroup_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_listWidgetNewNote_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_changeHead_clicked(); break;
        case 7: _t->on_bt1_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Chat_windows* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Groupchat_windows* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Friend_Windows::*_t)(Chat_windows * , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Friend_Windows::select_friend)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Friend_Windows::*_t)(Groupchat_windows * , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Friend_Windows::select_group)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Friend_Windows::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Friend_Windows::sig_clickAdd)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Friend_Windows::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Friend_Windows.data,
      qt_meta_data_Friend_Windows,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Friend_Windows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Friend_Windows::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Friend_Windows.stringdata0))
        return static_cast<void*>(const_cast< Friend_Windows*>(this));
    return QWidget::qt_metacast(_clname);
}

int Friend_Windows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Friend_Windows::select_friend(Chat_windows * _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Friend_Windows::select_group(Groupchat_windows * _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Friend_Windows::sig_clickAdd()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
