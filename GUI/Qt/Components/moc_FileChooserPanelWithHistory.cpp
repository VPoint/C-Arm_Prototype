/****************************************************************************
** Meta object code from reading C++ file 'FileChooserPanelWithHistory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Components/FileChooserPanelWithHistory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileChooserPanelWithHistory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileChooserPanelWithHistory_t {
    QByteArrayData data[14];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileChooserPanelWithHistory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileChooserPanelWithHistory_t qt_meta_stringdata_FileChooserPanelWithHistory = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FileChooserPanelWithHistory"
QT_MOC_LITERAL(1, 28, 23), // "absoluteFilenameChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4), // "text"
QT_MOC_LITERAL(4, 58, 19), // "activeFormatChanged"
QT_MOC_LITERAL(5, 78, 16), // "onFilenameAccept"
QT_MOC_LITERAL(6, 95, 15), // "setActiveFormat"
QT_MOC_LITERAL(7, 111, 6), // "format"
QT_MOC_LITERAL(8, 118, 20), // "on_btnBrowse_clicked"
QT_MOC_LITERAL(9, 139, 18), // "onHistorySelection"
QT_MOC_LITERAL(10, 158, 25), // "on_inFilename_textChanged"
QT_MOC_LITERAL(11, 184, 16), // "absoluteFilename"
QT_MOC_LITERAL(12, 201, 12), // "activeFormat"
QT_MOC_LITERAL(13, 214, 9) // "errorTest"

    },
    "FileChooserPanelWithHistory\0"
    "absoluteFilenameChanged\0\0text\0"
    "activeFormatChanged\0onFilenameAccept\0"
    "setActiveFormat\0format\0on_btnBrowse_clicked\0"
    "onHistorySelection\0on_inFilename_textChanged\0"
    "absoluteFilename\0activeFormat\0errorTest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileChooserPanelWithHistory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   55,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       8,    0,   59,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::QString, 0x00095003,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void FileChooserPanelWithHistory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileChooserPanelWithHistory *_t = static_cast<FileChooserPanelWithHistory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->absoluteFilenameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->activeFormatChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onFilenameAccept(); break;
        case 3: _t->setActiveFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_btnBrowse_clicked(); break;
        case 5: _t->onHistorySelection(); break;
        case 6: _t->on_inFilename_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileChooserPanelWithHistory::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileChooserPanelWithHistory::absoluteFilenameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FileChooserPanelWithHistory::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileChooserPanelWithHistory::activeFormatChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FileChooserPanelWithHistory *_t = static_cast<FileChooserPanelWithHistory *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->absoluteFilename(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->activeFormat(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errorText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FileChooserPanelWithHistory *_t = static_cast<FileChooserPanelWithHistory *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setErrorText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FileChooserPanelWithHistory::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FileChooserPanelWithHistory.data,
      qt_meta_data_FileChooserPanelWithHistory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileChooserPanelWithHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileChooserPanelWithHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileChooserPanelWithHistory.stringdata0))
        return static_cast<void*>(const_cast< FileChooserPanelWithHistory*>(this));
    return QWidget::qt_metacast(_clname);
}

int FileChooserPanelWithHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FileChooserPanelWithHistory::absoluteFilenameChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileChooserPanelWithHistory::activeFormatChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
