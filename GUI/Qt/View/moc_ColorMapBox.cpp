/****************************************************************************
** Meta object code from reading C++ file 'ColorMapBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/View/ColorMapBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorMapBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColorMapBox_t {
    QByteArrayData data[5];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorMapBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorMapBox_t qt_meta_stringdata_ColorMapBox = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ColorMapBox"
QT_MOC_LITERAL(1, 12, 13), // "onModelUpdate"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "EventBucket"
QT_MOC_LITERAL(4, 39, 6) // "bucket"

    },
    "ColorMapBox\0onModelUpdate\0\0EventBucket\0"
    "bucket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorMapBox[] = {

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

void ColorMapBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorMapBox *_t = static_cast<ColorMapBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ColorMapBox::staticMetaObject = {
    { &QtAbstractOpenGLBox::staticMetaObject, qt_meta_stringdata_ColorMapBox.data,
      qt_meta_data_ColorMapBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorMapBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorMapBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorMapBox.stringdata0))
        return static_cast<void*>(const_cast< ColorMapBox*>(this));
    return QtAbstractOpenGLBox::qt_metacast(_clname);
}

int ColorMapBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractOpenGLBox::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ColorMapInteractionDelegate_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorMapInteractionDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorMapInteractionDelegate_t qt_meta_stringdata_ColorMapInteractionDelegate = {
    {
QT_MOC_LITERAL(0, 0, 27) // "ColorMapInteractionDelegate"

    },
    "ColorMapInteractionDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorMapInteractionDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ColorMapInteractionDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ColorMapInteractionDelegate::staticMetaObject = {
    { &QtInteractionDelegateWidget::staticMetaObject, qt_meta_stringdata_ColorMapInteractionDelegate.data,
      qt_meta_data_ColorMapInteractionDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorMapInteractionDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorMapInteractionDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorMapInteractionDelegate.stringdata0))
        return static_cast<void*>(const_cast< ColorMapInteractionDelegate*>(this));
    return QtInteractionDelegateWidget::qt_metacast(_clname);
}

int ColorMapInteractionDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtInteractionDelegateWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
