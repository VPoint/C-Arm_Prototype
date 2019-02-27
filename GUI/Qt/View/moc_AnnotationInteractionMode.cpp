/****************************************************************************
** Meta object code from reading C++ file 'AnnotationInteractionMode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/View/AnnotationInteractionMode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnnotationInteractionMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AnnotationInteractionMode_t {
    QByteArrayData data[7];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnnotationInteractionMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnnotationInteractionMode_t qt_meta_stringdata_AnnotationInteractionMode = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AnnotationInteractionMode"
QT_MOC_LITERAL(1, 26, 14), // "onAcceptAction"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "onModelUpdate"
QT_MOC_LITERAL(4, 56, 11), // "EventBucket"
QT_MOC_LITERAL(5, 68, 6), // "bucket"
QT_MOC_LITERAL(6, 75, 20) // "onTextInputRequested"

    },
    "AnnotationInteractionMode\0onAcceptAction\0"
    "\0onModelUpdate\0EventBucket\0bucket\0"
    "onTextInputRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnnotationInteractionMode[] = {

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
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       6,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void AnnotationInteractionMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnnotationInteractionMode *_t = static_cast<AnnotationInteractionMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAcceptAction(); break;
        case 1: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 2: _t->onTextInputRequested(); break;
        default: ;
        }
    }
}

const QMetaObject AnnotationInteractionMode::staticMetaObject = {
    { &SliceWindowInteractionDelegateWidget::staticMetaObject, qt_meta_stringdata_AnnotationInteractionMode.data,
      qt_meta_data_AnnotationInteractionMode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AnnotationInteractionMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnnotationInteractionMode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AnnotationInteractionMode.stringdata0))
        return static_cast<void*>(const_cast< AnnotationInteractionMode*>(this));
    return SliceWindowInteractionDelegateWidget::qt_metacast(_clname);
}

int AnnotationInteractionMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SliceWindowInteractionDelegateWidget::qt_metacall(_c, _id, _a);
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
