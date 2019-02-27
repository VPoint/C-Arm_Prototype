/****************************************************************************
** Meta object code from reading C++ file 'MainControlPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Windows/MainControlPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainControlPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainControlPanel_t {
    QByteArrayData data[16];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainControlPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainControlPanel_t qt_meta_stringdata_MainControlPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MainControlPanel"
QT_MOC_LITERAL(1, 17, 13), // "onModelUpdate"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "EventBucket"
QT_MOC_LITERAL(4, 44, 6), // "bucket"
QT_MOC_LITERAL(5, 51, 21), // "onDrawingButtonAction"
QT_MOC_LITERAL(6, 73, 8), // "QAction*"
QT_MOC_LITERAL(7, 82, 29), // "on_btnCursorInspector_clicked"
QT_MOC_LITERAL(8, 112, 7), // "checked"
QT_MOC_LITERAL(9, 120, 27), // "on_btnZoomInspector_clicked"
QT_MOC_LITERAL(10, 148, 30), // "on_btnDisplayInspector_clicked"
QT_MOC_LITERAL(11, 179, 27), // "on_btnSyncInspector_clicked"
QT_MOC_LITERAL(12, 207, 30), // "on_btnPolygonInspector_clicked"
QT_MOC_LITERAL(13, 238, 33), // "on_btnPaintbrushInspector_cli..."
QT_MOC_LITERAL(14, 272, 28), // "on_btnSnakeInspector_clicked"
QT_MOC_LITERAL(15, 301, 31) // "on_btnAnnotateInspector_clicked"

    },
    "MainControlPanel\0onModelUpdate\0\0"
    "EventBucket\0bucket\0onDrawingButtonAction\0"
    "QAction*\0on_btnCursorInspector_clicked\0"
    "checked\0on_btnZoomInspector_clicked\0"
    "on_btnDisplayInspector_clicked\0"
    "on_btnSyncInspector_clicked\0"
    "on_btnPolygonInspector_clicked\0"
    "on_btnPaintbrushInspector_clicked\0"
    "on_btnSnakeInspector_clicked\0"
    "on_btnAnnotateInspector_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainControlPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x09 /* Protected */,
       5,    1,   67,    2, 0x09 /* Protected */,
       7,    1,   70,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,
      14,    1,   88,    2, 0x08 /* Private */,
      15,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void MainControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainControlPanel *_t = static_cast<MainControlPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 1: _t->onDrawingButtonAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->on_btnCursorInspector_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_btnZoomInspector_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_btnDisplayInspector_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_btnSyncInspector_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_btnPolygonInspector_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_btnPaintbrushInspector_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_btnSnakeInspector_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_btnAnnotateInspector_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainControlPanel::staticMetaObject = {
    { &SNAPComponent::staticMetaObject, qt_meta_stringdata_MainControlPanel.data,
      qt_meta_data_MainControlPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainControlPanel.stringdata0))
        return static_cast<void*>(const_cast< MainControlPanel*>(this));
    return SNAPComponent::qt_metacast(_clname);
}

int MainControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SNAPComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
