/****************************************************************************
** Meta object code from reading C++ file 'RecentHistoryItemsView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/RecentHistoryItemsView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RecentHistoryItemsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RecentHistoryItemsView_t {
    QByteArrayData data[9];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecentHistoryItemsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecentHistoryItemsView_t qt_meta_stringdata_RecentHistoryItemsView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RecentHistoryItemsView"
QT_MOC_LITERAL(1, 23, 18), // "RecentItemSelected"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "filename"
QT_MOC_LITERAL(4, 52, 27), // "OnRemoveRecentImageListItem"
QT_MOC_LITERAL(5, 80, 21), // "on_listRecent_clicked"
QT_MOC_LITERAL(6, 102, 5), // "index"
QT_MOC_LITERAL(7, 108, 40), // "on_listRecent_customContextMe..."
QT_MOC_LITERAL(8, 149, 3) // "pos"

    },
    "RecentHistoryItemsView\0RecentItemSelected\0"
    "\0filename\0OnRemoveRecentImageListItem\0"
    "on_listRecent_clicked\0index\0"
    "on_listRecent_customContextMenuRequested\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecentHistoryItemsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       7,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QPoint,    8,

       0        // eod
};

void RecentHistoryItemsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RecentHistoryItemsView *_t = static_cast<RecentHistoryItemsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RecentItemSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->OnRemoveRecentImageListItem(); break;
        case 2: _t->on_listRecent_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_listRecent_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RecentHistoryItemsView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RecentHistoryItemsView::RecentItemSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RecentHistoryItemsView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RecentHistoryItemsView.data,
      qt_meta_data_RecentHistoryItemsView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RecentHistoryItemsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecentHistoryItemsView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RecentHistoryItemsView.stringdata0))
        return static_cast<void*>(const_cast< RecentHistoryItemsView*>(this));
    return QWidget::qt_metacast(_clname);
}

int RecentHistoryItemsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RecentHistoryItemsView::RecentItemSelected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
