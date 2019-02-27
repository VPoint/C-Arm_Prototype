/****************************************************************************
** Meta object code from reading C++ file 'LabelEditorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Windows/LabelEditorDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LabelEditorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabelEditorDialog_t {
    QByteArrayData data[14];
    char stringdata0[362];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabelEditorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabelEditorDialog_t qt_meta_stringdata_LabelEditorDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LabelEditorDialog"
QT_MOC_LITERAL(1, 18, 19), // "on_btnClose_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "on_btnNew_clicked"
QT_MOC_LITERAL(4, 57, 23), // "on_btnDuplicate_clicked"
QT_MOC_LITERAL(5, 81, 20), // "on_btnDelete_clicked"
QT_MOC_LITERAL(6, 102, 28), // "on_inLabelId_editingFinished"
QT_MOC_LITERAL(7, 131, 30), // "on_actionResetLabels_triggered"
QT_MOC_LITERAL(8, 162, 28), // "on_inLabelFilter_textChanged"
QT_MOC_LITERAL(9, 191, 4), // "arg1"
QT_MOC_LITERAL(10, 196, 34), // "on_actionHide_all_labels_trig..."
QT_MOC_LITERAL(11, 231, 47), // "on_actionHide_all_labels_in_3..."
QT_MOC_LITERAL(12, 279, 34), // "on_actionShow_all_labels_trig..."
QT_MOC_LITERAL(13, 314, 47) // "on_actionShow_all_labels_in_3..."

    },
    "LabelEditorDialog\0on_btnClose_clicked\0"
    "\0on_btnNew_clicked\0on_btnDuplicate_clicked\0"
    "on_btnDelete_clicked\0on_inLabelId_editingFinished\0"
    "on_actionResetLabels_triggered\0"
    "on_inLabelFilter_textChanged\0arg1\0"
    "on_actionHide_all_labels_triggered\0"
    "on_actionHide_all_labels_in_3D_window_triggered\0"
    "on_actionShow_all_labels_triggered\0"
    "on_actionShow_all_labels_in_3D_window_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabelEditorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LabelEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabelEditorDialog *_t = static_cast<LabelEditorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnClose_clicked(); break;
        case 1: _t->on_btnNew_clicked(); break;
        case 2: _t->on_btnDuplicate_clicked(); break;
        case 3: _t->on_btnDelete_clicked(); break;
        case 4: _t->on_inLabelId_editingFinished(); break;
        case 5: _t->on_actionResetLabels_triggered(); break;
        case 6: _t->on_inLabelFilter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_actionHide_all_labels_triggered(); break;
        case 8: _t->on_actionHide_all_labels_in_3D_window_triggered(); break;
        case 9: _t->on_actionShow_all_labels_triggered(); break;
        case 10: _t->on_actionShow_all_labels_in_3D_window_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject LabelEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LabelEditorDialog.data,
      qt_meta_data_LabelEditorDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LabelEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabelEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LabelEditorDialog.stringdata0))
        return static_cast<void*>(const_cast< LabelEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LabelEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
