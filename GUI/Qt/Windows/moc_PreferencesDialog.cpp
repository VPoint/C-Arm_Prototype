/****************************************************************************
** Meta object code from reading C++ file 'PreferencesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Windows/PreferencesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreferencesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PreferencesDialog_t {
    QByteArrayData data[11];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreferencesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreferencesDialog_t qt_meta_stringdata_PreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PreferencesDialog"
QT_MOC_LITERAL(1, 18, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(4, 75, 16), // "QAbstractButton*"
QT_MOC_LITERAL(5, 92, 6), // "button"
QT_MOC_LITERAL(6, 99, 26), // "on_btnElementReset_clicked"
QT_MOC_LITERAL(7, 126, 29), // "on_btnElementResetAll_clicked"
QT_MOC_LITERAL(8, 156, 13), // "onModelUpdate"
QT_MOC_LITERAL(9, 170, 11), // "EventBucket"
QT_MOC_LITERAL(10, 182, 6) // "bucket"

    },
    "PreferencesDialog\0on_listWidget_itemSelectionChanged\0"
    "\0on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_btnElementReset_clicked\0"
    "on_btnElementResetAll_clicked\0"
    "onModelUpdate\0EventBucket\0bucket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreferencesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreferencesDialog *_t = static_cast<PreferencesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listWidget_itemSelectionChanged(); break;
        case 1: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->on_btnElementReset_clicked(); break;
        case 3: _t->on_btnElementResetAll_clicked(); break;
        case 4: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PreferencesDialog.data,
      qt_meta_data_PreferencesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PreferencesDialog.stringdata0))
        return static_cast<void*>(const_cast< PreferencesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
