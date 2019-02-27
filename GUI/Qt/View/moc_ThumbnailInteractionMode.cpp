/****************************************************************************
** Meta object code from reading C++ file 'ThumbnailInteractionMode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/View/ThumbnailInteractionMode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThumbnailInteractionMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ThumbnailInteractionMode_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThumbnailInteractionMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThumbnailInteractionMode_t qt_meta_stringdata_ThumbnailInteractionMode = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ThumbnailInteractionMode"
QT_MOC_LITERAL(1, 25, 22), // "onContextMenuRequested"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 2), // "pt"
QT_MOC_LITERAL(4, 52, 13), // "onModelUpdate"
QT_MOC_LITERAL(5, 66, 11), // "EventBucket"
QT_MOC_LITERAL(6, 78, 6) // "bucket"

    },
    "ThumbnailInteractionMode\0"
    "onContextMenuRequested\0\0pt\0onModelUpdate\0"
    "EventBucket\0bucket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThumbnailInteractionMode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void ThumbnailInteractionMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThumbnailInteractionMode *_t = static_cast<ThumbnailInteractionMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ThumbnailInteractionMode::staticMetaObject = {
    { &SliceWindowInteractionDelegateWidget::staticMetaObject, qt_meta_stringdata_ThumbnailInteractionMode.data,
      qt_meta_data_ThumbnailInteractionMode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ThumbnailInteractionMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThumbnailInteractionMode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ThumbnailInteractionMode.stringdata0))
        return static_cast<void*>(const_cast< ThumbnailInteractionMode*>(this));
    return SliceWindowInteractionDelegateWidget::qt_metacast(_clname);
}

int ThumbnailInteractionMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SliceWindowInteractionDelegateWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
