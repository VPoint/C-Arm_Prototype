/****************************************************************************
** Meta object code from reading C++ file 'MetadataInspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/MetadataInspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MetadataInspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MetadataTableQtModel_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MetadataTableQtModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MetadataTableQtModel_t qt_meta_stringdata_MetadataTableQtModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MetadataTableQtModel"
QT_MOC_LITERAL(1, 21, 13), // "onModelUpdate"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "MetadataTableQtModel\0onModelUpdate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MetadataTableQtModel[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MetadataTableQtModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MetadataTableQtModel *_t = static_cast<MetadataTableQtModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModelUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MetadataTableQtModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_MetadataTableQtModel.data,
      qt_meta_data_MetadataTableQtModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MetadataTableQtModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MetadataTableQtModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MetadataTableQtModel.stringdata0))
        return static_cast<void*>(const_cast< MetadataTableQtModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int MetadataTableQtModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_MetadataInspector_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MetadataInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MetadataInspector_t qt_meta_stringdata_MetadataInspector = {
    {
QT_MOC_LITERAL(0, 0, 17) // "MetadataInspector"

    },
    "MetadataInspector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MetadataInspector[] = {

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

void MetadataInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MetadataInspector::staticMetaObject = {
    { &SNAPComponent::staticMetaObject, qt_meta_stringdata_MetadataInspector.data,
      qt_meta_data_MetadataInspector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MetadataInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MetadataInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MetadataInspector.stringdata0))
        return static_cast<void*>(const_cast< MetadataInspector*>(this));
    return SNAPComponent::qt_metacast(_clname);
}

int MetadataInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SNAPComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
