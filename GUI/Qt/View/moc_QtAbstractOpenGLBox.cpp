/****************************************************************************
** Meta object code from reading C++ file 'QtAbstractOpenGLBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/View/QtAbstractOpenGLBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtAbstractOpenGLBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAbstractOpenGLBox_t {
    QByteArrayData data[5];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAbstractOpenGLBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAbstractOpenGLBox_t qt_meta_stringdata_QtAbstractOpenGLBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QtAbstractOpenGLBox"
QT_MOC_LITERAL(1, 20, 13), // "onModelUpdate"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "EventBucket"
QT_MOC_LITERAL(4, 47, 6) // "bucket"

    },
    "QtAbstractOpenGLBox\0onModelUpdate\0\0"
    "EventBucket\0bucket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAbstractOpenGLBox[] = {

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

void QtAbstractOpenGLBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtAbstractOpenGLBox *_t = static_cast<QtAbstractOpenGLBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtAbstractOpenGLBox::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_QtAbstractOpenGLBox.data,
      qt_meta_data_QtAbstractOpenGLBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtAbstractOpenGLBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAbstractOpenGLBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtAbstractOpenGLBox.stringdata0))
        return static_cast<void*>(const_cast< QtAbstractOpenGLBox*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int QtAbstractOpenGLBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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
