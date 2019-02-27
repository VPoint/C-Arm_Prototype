/****************************************************************************
** Meta object code from reading C++ file 'ColorWheel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/Qt/External/ColorWheel/ColorWheel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorWheel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColorWheel_t {
    QByteArrayData data[9];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorWheel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorWheel_t qt_meta_stringdata_ColorWheel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ColorWheel"
QT_MOC_LITERAL(1, 11, 11), // "colorChange"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "color"
QT_MOC_LITERAL(4, 30, 10), // "hueChanged"
QT_MOC_LITERAL(5, 41, 3), // "hue"
QT_MOC_LITERAL(6, 45, 9), // "svChanged"
QT_MOC_LITERAL(7, 55, 8), // "newcolor"
QT_MOC_LITERAL(8, 64, 10) // "wheelWidth"

    },
    "ColorWheel\0colorChange\0\0color\0hueChanged\0"
    "hue\0svChanged\0newcolor\0wheelWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorWheel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::QColor, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QColor,    7,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00095103,

       0        // eod
};

void ColorWheel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorWheel *_t = static_cast<ColorWheel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QColor _r = _t->colorChange((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 1: _t->hueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->svChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef QColor (ColorWheel::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorWheel::colorChange)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ColorWheel *_t = static_cast<ColorWheel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->wheelWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ColorWheel *_t = static_cast<ColorWheel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWheelWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ColorWheel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ColorWheel.data,
      qt_meta_data_ColorWheel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorWheel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorWheel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorWheel.stringdata0))
        return static_cast<void*>(const_cast< ColorWheel*>(this));
    return QWidget::qt_metacast(_clname);
}

int ColorWheel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
QColor ColorWheel::colorChange(const QColor & _t1)
{
    QColor _t0 = QColor();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
