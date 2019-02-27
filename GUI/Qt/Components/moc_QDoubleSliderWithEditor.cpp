/****************************************************************************
** Meta object code from reading C++ file 'QDoubleSliderWithEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/QDoubleSliderWithEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDoubleSliderWithEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDoubleSliderWithEditor_t {
    QByteArrayData data[11];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDoubleSliderWithEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDoubleSliderWithEditor_t qt_meta_stringdata_QDoubleSliderWithEditor = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QDoubleSliderWithEditor"
QT_MOC_LITERAL(1, 24, 12), // "valueChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "sliderValueChanged"
QT_MOC_LITERAL(4, 57, 19), // "spinnerValueChanged"
QT_MOC_LITERAL(5, 77, 6), // "stepUp"
QT_MOC_LITERAL(6, 84, 8), // "stepDown"
QT_MOC_LITERAL(7, 93, 5), // "value"
QT_MOC_LITERAL(8, 99, 7), // "minimum"
QT_MOC_LITERAL(9, 107, 7), // "maximum"
QT_MOC_LITERAL(10, 115, 10) // "singleStep"

    },
    "QDoubleSliderWithEditor\0valueChanged\0"
    "\0sliderValueChanged\0spinnerValueChanged\0"
    "stepUp\0stepDown\0value\0minimum\0maximum\0"
    "singleStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDoubleSliderWithEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   42,    2, 0x0a /* Public */,
       4,    1,   45,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Double, 0x00495103,
       8, QMetaType::Double, 0x00095103,
       9, QMetaType::Double, 0x00095103,
      10, QMetaType::Double, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void QDoubleSliderWithEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDoubleSliderWithEditor *_t = static_cast<QDoubleSliderWithEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->spinnerValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->stepUp(); break;
        case 4: _t->stepDown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDoubleSliderWithEditor::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDoubleSliderWithEditor::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDoubleSliderWithEditor *_t = static_cast<QDoubleSliderWithEditor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDoubleSliderWithEditor *_t = static_cast<QDoubleSliderWithEditor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDoubleSliderWithEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDoubleSliderWithEditor.data,
      qt_meta_data_QDoubleSliderWithEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDoubleSliderWithEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDoubleSliderWithEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDoubleSliderWithEditor.stringdata0))
        return static_cast<void*>(const_cast< QDoubleSliderWithEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDoubleSliderWithEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDoubleSliderWithEditor::valueChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
