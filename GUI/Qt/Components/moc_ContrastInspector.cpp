/****************************************************************************
** Meta object code from reading C++ file 'ContrastInspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/ContrastInspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContrastInspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ContrastInspector_t {
    QByteArrayData data[9];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContrastInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContrastInspector_t qt_meta_stringdata_ContrastInspector = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ContrastInspector"
QT_MOC_LITERAL(1, 18, 27), // "on_btnRemoveControl_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 24), // "on_btnAddControl_clicked"
QT_MOC_LITERAL(4, 72, 19), // "on_btnReset_clicked"
QT_MOC_LITERAL(5, 92, 13), // "onModelUpdate"
QT_MOC_LITERAL(6, 106, 11), // "EventBucket"
QT_MOC_LITERAL(7, 118, 1), // "b"
QT_MOC_LITERAL(8, 120, 18) // "on_btnAuto_clicked"

    },
    "ContrastInspector\0on_btnRemoveControl_clicked\0"
    "\0on_btnAddControl_clicked\0on_btnReset_clicked\0"
    "onModelUpdate\0EventBucket\0b\0"
    "on_btnAuto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContrastInspector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void ContrastInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContrastInspector *_t = static_cast<ContrastInspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnRemoveControl_clicked(); break;
        case 1: _t->on_btnAddControl_clicked(); break;
        case 2: _t->on_btnReset_clicked(); break;
        case 3: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 4: _t->on_btnAuto_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ContrastInspector::staticMetaObject = {
    { &SNAPComponent::staticMetaObject, qt_meta_stringdata_ContrastInspector.data,
      qt_meta_data_ContrastInspector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ContrastInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContrastInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ContrastInspector.stringdata0))
        return static_cast<void*>(const_cast< ContrastInspector*>(this));
    return SNAPComponent::qt_metacast(_clname);
}

int ContrastInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SNAPComponent::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
