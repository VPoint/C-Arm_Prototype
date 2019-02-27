/****************************************************************************
** Meta object code from reading C++ file 'LayerInspectorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Windows/LayerInspectorDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayerInspectorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LayerInspectorDialog_t {
    QByteArrayData data[15];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerInspectorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerInspectorDialog_t qt_meta_stringdata_LayerInspectorDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "LayerInspectorDialog"
QT_MOC_LITERAL(1, 21, 14), // "layerListHover"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "onModelUpdate"
QT_MOC_LITERAL(4, 51, 11), // "EventBucket"
QT_MOC_LITERAL(5, 63, 6), // "bucket"
QT_MOC_LITERAL(6, 70, 13), // "layerSelected"
QT_MOC_LITERAL(7, 84, 28), // "onContrastInspectorRequested"
QT_MOC_LITERAL(8, 113, 28), // "onColorMapInspectorRequested"
QT_MOC_LITERAL(9, 142, 10), // "advanceTab"
QT_MOC_LITERAL(10, 153, 38), // "on_actionSaveSelectedLayerAs_..."
QT_MOC_LITERAL(11, 192, 31), // "on_actionLayoutToggle_triggered"
QT_MOC_LITERAL(12, 224, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(13, 246, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(14, 268, 28) // "on_actionOpenLayer_triggered"

    },
    "LayerInspectorDialog\0layerListHover\0"
    "\0onModelUpdate\0EventBucket\0bucket\0"
    "layerSelected\0onContrastInspectorRequested\0"
    "onColorMapInspectorRequested\0advanceTab\0"
    "on_actionSaveSelectedLayerAs_triggered\0"
    "on_actionLayoutToggle_triggered\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
    "on_actionOpenLayer_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerInspectorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   72,    2, 0x0a /* Public */,
       6,    1,   75,    2, 0x0a /* Public */,
       7,    0,   78,    2, 0x0a /* Public */,
       8,    0,   79,    2, 0x0a /* Public */,
       9,    0,   80,    2, 0x0a /* Public */,
      10,    0,   81,    2, 0x08 /* Private */,
      11,    1,   82,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LayerInspectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayerInspectorDialog *_t = static_cast<LayerInspectorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerListHover((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 2: _t->layerSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onContrastInspectorRequested(); break;
        case 4: _t->onColorMapInspectorRequested(); break;
        case 5: _t->advanceTab(); break;
        case 6: _t->on_actionSaveSelectedLayerAs_triggered(); break;
        case 7: _t->on_actionLayoutToggle_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_buttonBox_accepted(); break;
        case 9: _t->on_buttonBox_rejected(); break;
        case 10: _t->on_actionOpenLayer_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LayerInspectorDialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerInspectorDialog::layerListHover)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LayerInspectorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LayerInspectorDialog.data,
      qt_meta_data_LayerInspectorDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LayerInspectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerInspectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LayerInspectorDialog.stringdata0))
        return static_cast<void*>(const_cast< LayerInspectorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LayerInspectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void LayerInspectorDialog::layerListHover(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
