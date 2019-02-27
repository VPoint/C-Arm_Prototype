/****************************************************************************
** Meta object code from reading C++ file 'ViewPanel3D.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/ViewPanel3D.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewPanel3D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewPanel3D_t {
    QByteArrayData data[20];
    char stringdata0[407];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewPanel3D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewPanel3D_t qt_meta_stringdata_ViewPanel3D = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ViewPanel3D"
QT_MOC_LITERAL(1, 12, 14), // "renderProgress"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "progress"
QT_MOC_LITERAL(4, 37, 13), // "onModelUpdate"
QT_MOC_LITERAL(5, 51, 11), // "EventBucket"
QT_MOC_LITERAL(6, 63, 6), // "bucket"
QT_MOC_LITERAL(7, 70, 24), // "on_btnUpdateMesh_clicked"
QT_MOC_LITERAL(8, 95, 24), // "on_btnScreenshot_clicked"
QT_MOC_LITERAL(9, 120, 20), // "on_btnAccept_clicked"
QT_MOC_LITERAL(10, 141, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(11, 162, 20), // "on_btnExpand_clicked"
QT_MOC_LITERAL(12, 183, 7), // "onTimer"
QT_MOC_LITERAL(13, 191, 34), // "on_actionReset_Viewpoint_trig..."
QT_MOC_LITERAL(14, 226, 33), // "on_actionSave_Viewpoint_trigg..."
QT_MOC_LITERAL(15, 260, 36), // "on_actionRestore_Viewpoint_tr..."
QT_MOC_LITERAL(16, 297, 36), // "on_actionContinuous_Update_tr..."
QT_MOC_LITERAL(17, 334, 18), // "on_btnMenu_pressed"
QT_MOC_LITERAL(18, 353, 18), // "on_btnFlip_clicked"
QT_MOC_LITERAL(19, 372, 34) // "on_actionClear_Rendering_trig..."

    },
    "ViewPanel3D\0renderProgress\0\0progress\0"
    "onModelUpdate\0EventBucket\0bucket\0"
    "on_btnUpdateMesh_clicked\0"
    "on_btnScreenshot_clicked\0on_btnAccept_clicked\0"
    "on_btnCancel_clicked\0on_btnExpand_clicked\0"
    "onTimer\0on_actionReset_Viewpoint_triggered\0"
    "on_actionSave_Viewpoint_triggered\0"
    "on_actionRestore_Viewpoint_triggered\0"
    "on_actionContinuous_Update_triggered\0"
    "on_btnMenu_pressed\0on_btnFlip_clicked\0"
    "on_actionClear_Rendering_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewPanel3D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   92,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ViewPanel3D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewPanel3D *_t = static_cast<ViewPanel3D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->renderProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 2: _t->on_btnUpdateMesh_clicked(); break;
        case 3: _t->on_btnScreenshot_clicked(); break;
        case 4: _t->on_btnAccept_clicked(); break;
        case 5: _t->on_btnCancel_clicked(); break;
        case 6: _t->on_btnExpand_clicked(); break;
        case 7: _t->onTimer(); break;
        case 8: _t->on_actionReset_Viewpoint_triggered(); break;
        case 9: _t->on_actionSave_Viewpoint_triggered(); break;
        case 10: _t->on_actionRestore_Viewpoint_triggered(); break;
        case 11: _t->on_actionContinuous_Update_triggered(); break;
        case 12: _t->on_btnMenu_pressed(); break;
        case 13: _t->on_btnFlip_clicked(); break;
        case 14: _t->on_actionClear_Rendering_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ViewPanel3D::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewPanel3D::renderProgress)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ViewPanel3D::staticMetaObject = {
    { &SNAPComponent::staticMetaObject, qt_meta_stringdata_ViewPanel3D.data,
      qt_meta_data_ViewPanel3D,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ViewPanel3D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewPanel3D::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ViewPanel3D.stringdata0))
        return static_cast<void*>(const_cast< ViewPanel3D*>(this));
    return SNAPComponent::qt_metacast(_clname);
}

int ViewPanel3D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void ViewPanel3D::renderProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
