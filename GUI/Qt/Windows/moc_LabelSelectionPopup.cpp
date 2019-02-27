/****************************************************************************
** Meta object code from reading C++ file 'LabelSelectionPopup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Windows/LabelSelectionPopup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LabelSelectionPopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabelSelectionPopup_t {
    QByteArrayData data[9];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabelSelectionPopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabelSelectionPopup_t qt_meta_stringdata_LabelSelectionPopup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LabelSelectionPopup"
QT_MOC_LITERAL(1, 20, 13), // "onModelUpdate"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "EventBucket"
QT_MOC_LITERAL(4, 47, 6), // "bucket"
QT_MOC_LITERAL(5, 54, 25), // "onForegroundToolbarAction"
QT_MOC_LITERAL(6, 80, 8), // "QAction*"
QT_MOC_LITERAL(7, 89, 6), // "action"
QT_MOC_LITERAL(8, 96, 25) // "onBackgroundToolbarAction"

    },
    "LabelSelectionPopup\0onModelUpdate\0\0"
    "EventBucket\0bucket\0onForegroundToolbarAction\0"
    "QAction*\0action\0onBackgroundToolbarAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabelSelectionPopup[] = {

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

void LabelSelectionPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabelSelectionPopup *_t = static_cast<LabelSelectionPopup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 1: _t->onForegroundToolbarAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->onBackgroundToolbarAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LabelSelectionPopup::staticMetaObject = {
    { &SNAPComponent::staticMetaObject, qt_meta_stringdata_LabelSelectionPopup.data,
      qt_meta_data_LabelSelectionPopup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LabelSelectionPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabelSelectionPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LabelSelectionPopup.stringdata0))
        return static_cast<void*>(const_cast< LabelSelectionPopup*>(this));
    return SNAPComponent::qt_metacast(_clname);
}

int LabelSelectionPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SNAPComponent::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
