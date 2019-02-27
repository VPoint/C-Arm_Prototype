/****************************************************************************
** Meta object code from reading C++ file 'CursorInspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/CursorInspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CursorInspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CursorInspector_t {
    QByteArrayData data[9];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CursorInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CursorInspector_t qt_meta_stringdata_CursorInspector = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CursorInspector"
QT_MOC_LITERAL(1, 16, 22), // "onContextMenuRequested"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "pos"
QT_MOC_LITERAL(4, 44, 13), // "onModelUpdate"
QT_MOC_LITERAL(5, 58, 11), // "EventBucket"
QT_MOC_LITERAL(6, 70, 6), // "bucket"
QT_MOC_LITERAL(7, 77, 32), // "on_tableVoxelUnderCursor_clicked"
QT_MOC_LITERAL(8, 110, 5) // "index"

    },
    "CursorInspector\0onContextMenuRequested\0"
    "\0pos\0onModelUpdate\0EventBucket\0bucket\0"
    "on_tableVoxelUnderCursor_clicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CursorInspector[] = {

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
       4,    1,   32,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QModelIndex,    8,

       0        // eod
};

void CursorInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CursorInspector *_t = static_cast<CursorInspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 2: _t->on_tableVoxelUnderCursor_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CursorInspector::staticMetaObject = {
    { &SNAPComponent::staticMetaObject, qt_meta_stringdata_CursorInspector.data,
      qt_meta_data_CursorInspector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CursorInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CursorInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CursorInspector.stringdata0))
        return static_cast<void*>(const_cast< CursorInspector*>(this));
    return SNAPComponent::qt_metacast(_clname);
}

int CursorInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
