/****************************************************************************
** Meta object code from reading C++ file 'QtWidgetCoupling.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Coupling/QtWidgetCoupling.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtWidgetCoupling.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCouplingHelper_t {
    QByteArrayData data[6];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCouplingHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCouplingHelper_t qt_meta_stringdata_QtCouplingHelper = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QtCouplingHelper"
QT_MOC_LITERAL(1, 17, 18), // "onUserModification"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 22), // "onPropertyModification"
QT_MOC_LITERAL(4, 60, 11), // "EventBucket"
QT_MOC_LITERAL(5, 72, 6) // "bucket"

    },
    "QtCouplingHelper\0onUserModification\0"
    "\0onPropertyModification\0EventBucket\0"
    "bucket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCouplingHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void QtCouplingHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtCouplingHelper *_t = static_cast<QtCouplingHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onUserModification(); break;
        case 1: _t->onPropertyModification((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtCouplingHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCouplingHelper.data,
      qt_meta_data_QtCouplingHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCouplingHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCouplingHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCouplingHelper.stringdata0))
        return static_cast<void*>(const_cast< QtCouplingHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCouplingHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
