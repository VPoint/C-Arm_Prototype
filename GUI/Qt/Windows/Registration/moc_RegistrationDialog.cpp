/****************************************************************************
** Meta object code from reading C++ file 'RegistrationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/Qt/Windows/Registration/RegistrationDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegistrationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RegistrationDialog_t {
    QByteArrayData data[17];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegistrationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegistrationDialog_t qt_meta_stringdata_RegistrationDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RegistrationDialog"
QT_MOC_LITERAL(1, 19, 14), // "wizardFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 57, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 81, 29), // "on_btnRunRegistration_clicked"
QT_MOC_LITERAL(6, 111, 18), // "on_btnLoad_clicked"
QT_MOC_LITERAL(7, 130, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(8, 149, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(9, 170, 16), // "QAbstractButton*"
QT_MOC_LITERAL(10, 187, 6), // "button"
QT_MOC_LITERAL(11, 194, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(12, 222, 5), // "index"
QT_MOC_LITERAL(13, 228, 21), // "on_btnReslice_clicked"
QT_MOC_LITERAL(14, 250, 32), // "on_actionImage_Centers_triggered"
QT_MOC_LITERAL(15, 283, 34), // "on_actionCenters_of_Mass_trig..."
QT_MOC_LITERAL(16, 318, 37) // "on_actionMoments_of_Inertia_t..."

    },
    "RegistrationDialog\0wizardFinished\0\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_btnRunRegistration_clicked\0"
    "on_btnLoad_clicked\0on_btnSave_clicked\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_tabWidget_currentChanged\0"
    "index\0on_btnReslice_clicked\0"
    "on_actionImage_Centers_triggered\0"
    "on_actionCenters_of_Mass_triggered\0"
    "on_actionMoments_of_Inertia_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegistrationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RegistrationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RegistrationDialog *_t = static_cast<RegistrationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wizardFinished(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_btnRunRegistration_clicked(); break;
        case 4: _t->on_btnLoad_clicked(); break;
        case 5: _t->on_btnSave_clicked(); break;
        case 6: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 7: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_btnReslice_clicked(); break;
        case 9: _t->on_actionImage_Centers_triggered(); break;
        case 10: _t->on_actionCenters_of_Mass_triggered(); break;
        case 11: _t->on_actionMoments_of_Inertia_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RegistrationDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegistrationDialog::wizardFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RegistrationDialog::staticMetaObject = {
    { &SNAPComponent::staticMetaObject, qt_meta_stringdata_RegistrationDialog.data,
      qt_meta_data_RegistrationDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RegistrationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegistrationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RegistrationDialog.stringdata0))
        return static_cast<void*>(const_cast< RegistrationDialog*>(this));
    return SNAPComponent::qt_metacast(_clname);
}

int RegistrationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SNAPComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void RegistrationDialog::wizardFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
