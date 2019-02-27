/****************************************************************************
** Meta object code from reading C++ file 'SnakeWizardPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/SnakeWizardPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SnakeWizardPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BubbleItemModel_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BubbleItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BubbleItemModel_t qt_meta_stringdata_BubbleItemModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BubbleItemModel"
QT_MOC_LITERAL(1, 16, 18), // "onBubbleListUpdate"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20) // "onBubbleValuesUpdate"

    },
    "BubbleItemModel\0onBubbleListUpdate\0\0"
    "onBubbleValuesUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BubbleItemModel[] = {

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
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BubbleItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BubbleItemModel *_t = static_cast<BubbleItemModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBubbleListUpdate(); break;
        case 1: _t->onBubbleValuesUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BubbleItemModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_BubbleItemModel.data,
      qt_meta_data_BubbleItemModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BubbleItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BubbleItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BubbleItemModel.stringdata0))
        return static_cast<void*>(const_cast< BubbleItemModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int BubbleItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SnakeWizardPanel_t {
    QByteArrayData data[31];
    char stringdata0[765];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SnakeWizardPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SnakeWizardPanel_t qt_meta_stringdata_SnakeWizardPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SnakeWizardPanel"
QT_MOC_LITERAL(1, 17, 14), // "wizardFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 25), // "on_btnNextPreproc_clicked"
QT_MOC_LITERAL(4, 59, 23), // "on_btnAddBubble_clicked"
QT_MOC_LITERAL(5, 83, 26), // "on_btnRemoveBubble_clicked"
QT_MOC_LITERAL(6, 110, 24), // "on_btnBubbleNext_clicked"
QT_MOC_LITERAL(7, 135, 24), // "on_btnBubbleBack_clicked"
QT_MOC_LITERAL(8, 160, 23), // "on_stack_currentChanged"
QT_MOC_LITERAL(9, 184, 4), // "arg1"
QT_MOC_LITERAL(10, 189, 18), // "on_btnPlay_toggled"
QT_MOC_LITERAL(11, 208, 7), // "checked"
QT_MOC_LITERAL(12, 216, 12), // "idleCallback"
QT_MOC_LITERAL(13, 229, 24), // "on_btnSingleStep_clicked"
QT_MOC_LITERAL(14, 254, 27), // "on_btnEvolutionBack_clicked"
QT_MOC_LITERAL(15, 282, 27), // "on_btnEvolutionNext_clicked"
QT_MOC_LITERAL(16, 310, 20), // "on_btnRewind_clicked"
QT_MOC_LITERAL(17, 331, 33), // "on_btnEvolutionParameters_cli..."
QT_MOC_LITERAL(18, 365, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(19, 386, 39), // "on_actionIncreaseBubbleRadius..."
QT_MOC_LITERAL(20, 426, 39), // "on_actionDecreaseBubbleRadius..."
QT_MOC_LITERAL(21, 466, 28), // "on_btnClusterIterate_clicked"
QT_MOC_LITERAL(22, 495, 32), // "on_btnClusterIterateMany_clicked"
QT_MOC_LITERAL(23, 528, 33), // "on_btnClusterReinitialize_cli..."
QT_MOC_LITERAL(24, 562, 27), // "on_btnClassifyTrain_clicked"
QT_MOC_LITERAL(25, 590, 26), // "on_btnThreshDetail_clicked"
QT_MOC_LITERAL(26, 617, 27), // "on_btnClusterDetail_clicked"
QT_MOC_LITERAL(27, 645, 35), // "on_btnClassifyClearExamples_c..."
QT_MOC_LITERAL(28, 681, 29), // "onClassifyQuickLabelSelection"
QT_MOC_LITERAL(29, 711, 24), // "on_btnEdgeDetail_clicked"
QT_MOC_LITERAL(30, 736, 28) // "on_btnClassifyDetail_clicked"

    },
    "SnakeWizardPanel\0wizardFinished\0\0"
    "on_btnNextPreproc_clicked\0"
    "on_btnAddBubble_clicked\0"
    "on_btnRemoveBubble_clicked\0"
    "on_btnBubbleNext_clicked\0"
    "on_btnBubbleBack_clicked\0"
    "on_stack_currentChanged\0arg1\0"
    "on_btnPlay_toggled\0checked\0idleCallback\0"
    "on_btnSingleStep_clicked\0"
    "on_btnEvolutionBack_clicked\0"
    "on_btnEvolutionNext_clicked\0"
    "on_btnRewind_clicked\0"
    "on_btnEvolutionParameters_clicked\0"
    "on_btnCancel_clicked\0"
    "on_actionIncreaseBubbleRadius_triggered\0"
    "on_actionDecreaseBubbleRadius_triggered\0"
    "on_btnClusterIterate_clicked\0"
    "on_btnClusterIterateMany_clicked\0"
    "on_btnClusterReinitialize_clicked\0"
    "on_btnClassifyTrain_clicked\0"
    "on_btnThreshDetail_clicked\0"
    "on_btnClusterDetail_clicked\0"
    "on_btnClassifyClearExamples_clicked\0"
    "onClassifyQuickLabelSelection\0"
    "on_btnEdgeDetail_clicked\0"
    "on_btnClassifyDetail_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SnakeWizardPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  149,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  150,    2, 0x08 /* Private */,
       4,    0,  151,    2, 0x08 /* Private */,
       5,    0,  152,    2, 0x08 /* Private */,
       6,    0,  153,    2, 0x08 /* Private */,
       7,    0,  154,    2, 0x08 /* Private */,
       8,    1,  155,    2, 0x08 /* Private */,
      10,    1,  158,    2, 0x08 /* Private */,
      12,    0,  161,    2, 0x08 /* Private */,
      13,    0,  162,    2, 0x08 /* Private */,
      14,    0,  163,    2, 0x08 /* Private */,
      15,    0,  164,    2, 0x08 /* Private */,
      16,    0,  165,    2, 0x08 /* Private */,
      17,    0,  166,    2, 0x08 /* Private */,
      18,    0,  167,    2, 0x08 /* Private */,
      19,    0,  168,    2, 0x08 /* Private */,
      20,    0,  169,    2, 0x08 /* Private */,
      21,    0,  170,    2, 0x08 /* Private */,
      22,    0,  171,    2, 0x08 /* Private */,
      23,    0,  172,    2, 0x08 /* Private */,
      24,    0,  173,    2, 0x08 /* Private */,
      25,    0,  174,    2, 0x08 /* Private */,
      26,    0,  175,    2, 0x08 /* Private */,
      27,    0,  176,    2, 0x08 /* Private */,
      28,    0,  177,    2, 0x08 /* Private */,
      29,    0,  178,    2, 0x08 /* Private */,
      30,    0,  179,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SnakeWizardPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SnakeWizardPanel *_t = static_cast<SnakeWizardPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wizardFinished(); break;
        case 1: _t->on_btnNextPreproc_clicked(); break;
        case 2: _t->on_btnAddBubble_clicked(); break;
        case 3: _t->on_btnRemoveBubble_clicked(); break;
        case 4: _t->on_btnBubbleNext_clicked(); break;
        case 5: _t->on_btnBubbleBack_clicked(); break;
        case 6: _t->on_stack_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_btnPlay_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->idleCallback(); break;
        case 9: _t->on_btnSingleStep_clicked(); break;
        case 10: _t->on_btnEvolutionBack_clicked(); break;
        case 11: _t->on_btnEvolutionNext_clicked(); break;
        case 12: _t->on_btnRewind_clicked(); break;
        case 13: _t->on_btnEvolutionParameters_clicked(); break;
        case 14: _t->on_btnCancel_clicked(); break;
        case 15: _t->on_actionIncreaseBubbleRadius_triggered(); break;
        case 16: _t->on_actionDecreaseBubbleRadius_triggered(); break;
        case 17: _t->on_btnClusterIterate_clicked(); break;
        case 18: _t->on_btnClusterIterateMany_clicked(); break;
        case 19: _t->on_btnClusterReinitialize_clicked(); break;
        case 20: _t->on_btnClassifyTrain_clicked(); break;
        case 21: _t->on_btnThreshDetail_clicked(); break;
        case 22: _t->on_btnClusterDetail_clicked(); break;
        case 23: _t->on_btnClassifyClearExamples_clicked(); break;
        case 24: _t->onClassifyQuickLabelSelection(); break;
        case 25: _t->on_btnEdgeDetail_clicked(); break;
        case 26: _t->on_btnClassifyDetail_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SnakeWizardPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SnakeWizardPanel::wizardFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SnakeWizardPanel::staticMetaObject = {
    { &SNAPComponent::staticMetaObject, qt_meta_stringdata_SnakeWizardPanel.data,
      qt_meta_data_SnakeWizardPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SnakeWizardPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SnakeWizardPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SnakeWizardPanel.stringdata0))
        return static_cast<void*>(const_cast< SnakeWizardPanel*>(this));
    return SNAPComponent::qt_metacast(_clname);
}

int SnakeWizardPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SNAPComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void SnakeWizardPanel::wizardFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
