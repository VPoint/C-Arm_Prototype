/****************************************************************************
** Meta object code from reading C++ file 'LayerInspectorRowDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/LayerInspectorRowDelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayerInspectorRowDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpacitySliderAction_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpacitySliderAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpacitySliderAction_t qt_meta_stringdata_OpacitySliderAction = {
    {
QT_MOC_LITERAL(0, 0, 19) // "OpacitySliderAction"

    },
    "OpacitySliderAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpacitySliderAction[] = {

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

void OpacitySliderAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OpacitySliderAction::staticMetaObject = {
    { &QWidgetAction::staticMetaObject, qt_meta_stringdata_OpacitySliderAction.data,
      qt_meta_data_OpacitySliderAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpacitySliderAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpacitySliderAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpacitySliderAction.stringdata0))
        return static_cast<void*>(const_cast< OpacitySliderAction*>(this));
    return QWidgetAction::qt_metacast(_clname);
}

int OpacitySliderAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_WidgetWithLabelAction_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetWithLabelAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetWithLabelAction_t qt_meta_stringdata_WidgetWithLabelAction = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WidgetWithLabelAction"
QT_MOC_LITERAL(1, 22, 9), // "onChanged"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "WidgetWithLabelAction\0onChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetWithLabelAction[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WidgetWithLabelAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetWithLabelAction *_t = static_cast<WidgetWithLabelAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WidgetWithLabelAction::staticMetaObject = {
    { &QWidgetAction::staticMetaObject, qt_meta_stringdata_WidgetWithLabelAction.data,
      qt_meta_data_WidgetWithLabelAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WidgetWithLabelAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetWithLabelAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetWithLabelAction.stringdata0))
        return static_cast<void*>(const_cast< WidgetWithLabelAction*>(this));
    return QWidgetAction::qt_metacast(_clname);
}

int WidgetWithLabelAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_LayerInspectorRowDelegate_t {
    QByteArrayData data[21];
    char stringdata0[452];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerInspectorRowDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerInspectorRowDelegate_t qt_meta_stringdata_LayerInspectorRowDelegate = {
    {
QT_MOC_LITERAL(0, 0, 25), // "LayerInspectorRowDelegate"
QT_MOC_LITERAL(1, 26, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 26), // "contrastInspectorRequested"
QT_MOC_LITERAL(4, 71, 26), // "colorMapInspectorRequested"
QT_MOC_LITERAL(5, 98, 11), // "setSelected"
QT_MOC_LITERAL(6, 110, 5), // "value"
QT_MOC_LITERAL(7, 116, 13), // "onModelUpdate"
QT_MOC_LITERAL(8, 130, 11), // "EventBucket"
QT_MOC_LITERAL(9, 142, 6), // "bucket"
QT_MOC_LITERAL(10, 149, 18), // "on_btnMenu_pressed"
QT_MOC_LITERAL(11, 168, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(12, 192, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(13, 217, 24), // "onColorMapPresetSelected"
QT_MOC_LITERAL(14, 242, 31), // "on_actionAutoContrast_triggered"
QT_MOC_LITERAL(15, 274, 34), // "on_actionTextureFeatures_trig..."
QT_MOC_LITERAL(16, 309, 28), // "on_actionPin_layer_triggered"
QT_MOC_LITERAL(17, 338, 30), // "on_actionUnpin_layer_triggered"
QT_MOC_LITERAL(18, 369, 37), // "on_actionContrast_Inspector_t..."
QT_MOC_LITERAL(19, 407, 35), // "on_actionColor_Map_Editor_tri..."
QT_MOC_LITERAL(20, 443, 8) // "selected"

    },
    "LayerInspectorRowDelegate\0selectionChanged\0"
    "\0contrastInspectorRequested\0"
    "colorMapInspectorRequested\0setSelected\0"
    "value\0onModelUpdate\0EventBucket\0bucket\0"
    "on_btnMenu_pressed\0on_actionSave_triggered\0"
    "on_actionClose_triggered\0"
    "onColorMapPresetSelected\0"
    "on_actionAutoContrast_triggered\0"
    "on_actionTextureFeatures_triggered\0"
    "on_actionPin_layer_triggered\0"
    "on_actionUnpin_layer_triggered\0"
    "on_actionContrast_Inspector_triggered\0"
    "on_actionColor_Map_Editor_triggered\0"
    "selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerInspectorRowDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       1,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    0,   92,    2, 0x06 /* Public */,
       4,    0,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   94,    2, 0x0a /* Public */,
       7,    1,   97,    2, 0x0a /* Public */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00595103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void LayerInspectorRowDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayerInspectorRowDelegate *_t = static_cast<LayerInspectorRowDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->contrastInspectorRequested(); break;
        case 2: _t->colorMapInspectorRequested(); break;
        case 3: _t->setSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 5: _t->on_btnMenu_pressed(); break;
        case 6: _t->on_actionSave_triggered(); break;
        case 7: _t->on_actionClose_triggered(); break;
        case 8: _t->onColorMapPresetSelected(); break;
        case 9: _t->on_actionAutoContrast_triggered(); break;
        case 10: _t->on_actionTextureFeatures_triggered(); break;
        case 11: _t->on_actionPin_layer_triggered(); break;
        case 12: _t->on_actionUnpin_layer_triggered(); break;
        case 13: _t->on_actionContrast_Inspector_triggered(); break;
        case 14: _t->on_actionColor_Map_Editor_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LayerInspectorRowDelegate::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerInspectorRowDelegate::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LayerInspectorRowDelegate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerInspectorRowDelegate::contrastInspectorRequested)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LayerInspectorRowDelegate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerInspectorRowDelegate::colorMapInspectorRequested)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LayerInspectorRowDelegate *_t = static_cast<LayerInspectorRowDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LayerInspectorRowDelegate *_t = static_cast<LayerInspectorRowDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject LayerInspectorRowDelegate::staticMetaObject = {
    { &SNAPComponent::staticMetaObject, qt_meta_stringdata_LayerInspectorRowDelegate.data,
      qt_meta_data_LayerInspectorRowDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LayerInspectorRowDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerInspectorRowDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LayerInspectorRowDelegate.stringdata0))
        return static_cast<void*>(const_cast< LayerInspectorRowDelegate*>(this));
    return SNAPComponent::qt_metacast(_clname);
}

int LayerInspectorRowDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SNAPComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
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
void LayerInspectorRowDelegate::selectionChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LayerInspectorRowDelegate::contrastInspectorRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void LayerInspectorRowDelegate::colorMapInspectorRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
