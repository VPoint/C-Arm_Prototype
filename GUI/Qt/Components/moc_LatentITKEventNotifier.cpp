/****************************************************************************
** Meta object code from reading C++ file 'LatentITKEventNotifier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/LatentITKEventNotifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LatentITKEventNotifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LatentITKEventNotifierHelper_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LatentITKEventNotifierHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LatentITKEventNotifierHelper_t qt_meta_stringdata_LatentITKEventNotifierHelper = {
    {
QT_MOC_LITERAL(0, 0, 28), // "LatentITKEventNotifierHelper"
QT_MOC_LITERAL(1, 29, 8), // "itkEvent"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "dispatchEvent"
QT_MOC_LITERAL(4, 53, 11), // "EventBucket"
QT_MOC_LITERAL(5, 65, 6), // "bucket"
QT_MOC_LITERAL(6, 72, 13) // "onQueuedEvent"

    },
    "LatentITKEventNotifierHelper\0itkEvent\0"
    "\0dispatchEvent\0EventBucket\0bucket\0"
    "onQueuedEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LatentITKEventNotifierHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LatentITKEventNotifierHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LatentITKEventNotifierHelper *_t = static_cast<LatentITKEventNotifierHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itkEvent(); break;
        case 1: _t->dispatchEvent((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 2: _t->onQueuedEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LatentITKEventNotifierHelper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LatentITKEventNotifierHelper::itkEvent)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LatentITKEventNotifierHelper::*_t)(const EventBucket & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LatentITKEventNotifierHelper::dispatchEvent)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject LatentITKEventNotifierHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LatentITKEventNotifierHelper.data,
      qt_meta_data_LatentITKEventNotifierHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LatentITKEventNotifierHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LatentITKEventNotifierHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LatentITKEventNotifierHelper.stringdata0))
        return static_cast<void*>(const_cast< LatentITKEventNotifierHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int LatentITKEventNotifierHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void LatentITKEventNotifierHelper::itkEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LatentITKEventNotifierHelper::dispatchEvent(const EventBucket & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_LatentITKEventNotifierCleanup_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LatentITKEventNotifierCleanup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LatentITKEventNotifierCleanup_t qt_meta_stringdata_LatentITKEventNotifierCleanup = {
    {
QT_MOC_LITERAL(0, 0, 29) // "LatentITKEventNotifierCleanup"

    },
    "LatentITKEventNotifierCleanup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LatentITKEventNotifierCleanup[] = {

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

void LatentITKEventNotifierCleanup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject LatentITKEventNotifierCleanup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LatentITKEventNotifierCleanup.data,
      qt_meta_data_LatentITKEventNotifierCleanup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LatentITKEventNotifierCleanup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LatentITKEventNotifierCleanup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LatentITKEventNotifierCleanup.stringdata0))
        return static_cast<void*>(const_cast< LatentITKEventNotifierCleanup*>(this));
    return QObject::qt_metacast(_clname);
}

int LatentITKEventNotifierCleanup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
