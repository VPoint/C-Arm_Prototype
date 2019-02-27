/****************************************************************************
** Meta object code from reading C++ file 'LabelSelectionButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/LabelSelectionButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LabelSelectionButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabelSelectionButtonPopupMenu_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabelSelectionButtonPopupMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabelSelectionButtonPopupMenu_t qt_meta_stringdata_LabelSelectionButtonPopupMenu = {
    {
QT_MOC_LITERAL(0, 0, 29), // "LabelSelectionButtonPopupMenu"
QT_MOC_LITERAL(1, 30, 13), // "onModelUpdate"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "EventBucket"
QT_MOC_LITERAL(4, 57, 6), // "bucket"
QT_MOC_LITERAL(5, 64, 18), // "onForegroundAction"
QT_MOC_LITERAL(6, 83, 8), // "QAction*"
QT_MOC_LITERAL(7, 92, 6), // "action"
QT_MOC_LITERAL(8, 99, 18) // "onBackgroundAction"

    },
    "LabelSelectionButtonPopupMenu\0"
    "onModelUpdate\0\0EventBucket\0bucket\0"
    "onForegroundAction\0QAction*\0action\0"
    "onBackgroundAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabelSelectionButtonPopupMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       8,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void LabelSelectionButtonPopupMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabelSelectionButtonPopupMenu *_t = static_cast<LabelSelectionButtonPopupMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 1: _t->onForegroundAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->onBackgroundAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject LabelSelectionButtonPopupMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_LabelSelectionButtonPopupMenu.data,
      qt_meta_data_LabelSelectionButtonPopupMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LabelSelectionButtonPopupMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabelSelectionButtonPopupMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LabelSelectionButtonPopupMenu.stringdata0))
        return static_cast<void*>(const_cast< LabelSelectionButtonPopupMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int LabelSelectionButtonPopupMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_LabelSelectionButton_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabelSelectionButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabelSelectionButton_t qt_meta_stringdata_LabelSelectionButton = {
    {
QT_MOC_LITERAL(0, 0, 20), // "LabelSelectionButton"
QT_MOC_LITERAL(1, 21, 13), // "onModelUpdate"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "EventBucket"
QT_MOC_LITERAL(4, 48, 6) // "bucket"

    },
    "LabelSelectionButton\0onModelUpdate\0\0"
    "EventBucket\0bucket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabelSelectionButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void LabelSelectionButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabelSelectionButton *_t = static_cast<LabelSelectionButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LabelSelectionButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_LabelSelectionButton.data,
      qt_meta_data_LabelSelectionButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LabelSelectionButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabelSelectionButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LabelSelectionButton.stringdata0))
        return static_cast<void*>(const_cast< LabelSelectionButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int LabelSelectionButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
