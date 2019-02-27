/****************************************************************************
** Meta object code from reading C++ file 'ImageIOWizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/GUI/Qt/Windows/ImageIOWizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageIOWizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_imageiowiz__AbstractPage_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imageiowiz__AbstractPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imageiowiz__AbstractPage_t qt_meta_stringdata_imageiowiz__AbstractPage = {
    {
QT_MOC_LITERAL(0, 0, 24) // "imageiowiz::AbstractPage"

    },
    "imageiowiz::AbstractPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imageiowiz__AbstractPage[] = {

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

void imageiowiz::AbstractPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject imageiowiz::AbstractPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_imageiowiz__AbstractPage.data,
      qt_meta_data_imageiowiz__AbstractPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imageiowiz::AbstractPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imageiowiz::AbstractPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imageiowiz__AbstractPage.stringdata0))
        return static_cast<void*>(const_cast< AbstractPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int imageiowiz::AbstractPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_imageiowiz__SelectFilePage_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imageiowiz__SelectFilePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imageiowiz__SelectFilePage_t qt_meta_stringdata_imageiowiz__SelectFilePage = {
    {
QT_MOC_LITERAL(0, 0, 26), // "imageiowiz::SelectFilePage"
QT_MOC_LITERAL(1, 27, 17), // "onFilenameChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 16), // "absoluteFilename"
QT_MOC_LITERAL(4, 63, 18), // "customFormatOracle"
QT_MOC_LITERAL(5, 82, 8) // "filename"

    },
    "imageiowiz::SelectFilePage\0onFilenameChanged\0"
    "\0absoluteFilename\0customFormatOracle\0"
    "filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imageiowiz__SelectFilePage[] = {

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
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    5,

       0        // eod
};

void imageiowiz::SelectFilePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectFilePage *_t = static_cast<SelectFilePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onFilenameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->customFormatOracle((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject imageiowiz::SelectFilePage::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_imageiowiz__SelectFilePage.data,
      qt_meta_data_imageiowiz__SelectFilePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imageiowiz::SelectFilePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imageiowiz::SelectFilePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imageiowiz__SelectFilePage.stringdata0))
        return static_cast<void*>(const_cast< SelectFilePage*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int imageiowiz::SelectFilePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_imageiowiz__SummaryPage_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imageiowiz__SummaryPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imageiowiz__SummaryPage_t qt_meta_stringdata_imageiowiz__SummaryPage = {
    {
QT_MOC_LITERAL(0, 0, 23) // "imageiowiz::SummaryPage"

    },
    "imageiowiz::SummaryPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imageiowiz__SummaryPage[] = {

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

void imageiowiz::SummaryPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject imageiowiz::SummaryPage::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_imageiowiz__SummaryPage.data,
      qt_meta_data_imageiowiz__SummaryPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imageiowiz::SummaryPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imageiowiz::SummaryPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imageiowiz__SummaryPage.stringdata0))
        return static_cast<void*>(const_cast< SummaryPage*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int imageiowiz::SummaryPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_imageiowiz__DICOMPage_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imageiowiz__DICOMPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imageiowiz__DICOMPage_t qt_meta_stringdata_imageiowiz__DICOMPage = {
    {
QT_MOC_LITERAL(0, 0, 21), // "imageiowiz::DICOMPage"
QT_MOC_LITERAL(1, 22, 21), // "processDicomDirectory"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11) // "updateTable"

    },
    "imageiowiz::DICOMPage\0processDicomDirectory\0"
    "\0updateTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imageiowiz__DICOMPage[] = {

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

void imageiowiz::DICOMPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DICOMPage *_t = static_cast<DICOMPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processDicomDirectory(); break;
        case 1: _t->updateTable(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject imageiowiz::DICOMPage::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_imageiowiz__DICOMPage.data,
      qt_meta_data_imageiowiz__DICOMPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imageiowiz::DICOMPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imageiowiz::DICOMPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imageiowiz__DICOMPage.stringdata0))
        return static_cast<void*>(const_cast< DICOMPage*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int imageiowiz::DICOMPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_imageiowiz__RawPage_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imageiowiz__RawPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imageiowiz__RawPage_t qt_meta_stringdata_imageiowiz__RawPage = {
    {
QT_MOC_LITERAL(0, 0, 19), // "imageiowiz::RawPage"
QT_MOC_LITERAL(1, 20, 18), // "onHeaderSizeChange"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "imageiowiz::RawPage\0onHeaderSizeChange\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imageiowiz__RawPage[] = {

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

void imageiowiz::RawPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RawPage *_t = static_cast<RawPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onHeaderSizeChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject imageiowiz::RawPage::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_imageiowiz__RawPage.data,
      qt_meta_data_imageiowiz__RawPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imageiowiz::RawPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imageiowiz::RawPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imageiowiz__RawPage.stringdata0))
        return static_cast<void*>(const_cast< RawPage*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int imageiowiz::RawPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ImageIOWizard_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageIOWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageIOWizard_t qt_meta_stringdata_ImageIOWizard = {
    {
QT_MOC_LITERAL(0, 0, 13) // "ImageIOWizard"

    },
    "ImageIOWizard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageIOWizard[] = {

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

void ImageIOWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ImageIOWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_ImageIOWizard.data,
      qt_meta_data_ImageIOWizard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageIOWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageIOWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageIOWizard.stringdata0))
        return static_cast<void*>(const_cast< ImageIOWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int ImageIOWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
