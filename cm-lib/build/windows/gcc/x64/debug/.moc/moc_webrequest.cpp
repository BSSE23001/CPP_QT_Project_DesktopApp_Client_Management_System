/****************************************************************************
** Meta object code from reading C++ file 'webrequest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/networking/webrequest.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webrequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS = QtMocHelpers::stringData(
    "cm::networking::WebRequest",
    "replyDelegate",
    "",
    "sslErrorsDelegate",
    "QList<QSslError>",
    "_errors"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[27];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[17];
    char stringdata5[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS_t qt_meta_stringdata_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "cm::networking::WebRequest"
        QT_MOC_LITERAL(27, 13),  // "replyDelegate"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 17),  // "sslErrorsDelegate"
        QT_MOC_LITERAL(60, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(77, 7)   // "_errors"
    },
    "cm::networking::WebRequest",
    "replyDelegate",
    "",
    "sslErrorsDelegate",
    "QList<QSslError>",
    "_errors"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    1,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::networking::WebRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<IWebRequest::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WebRequest, std::true_type>,
        // method 'replyDelegate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sslErrorsDelegate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>
    >,
    nullptr
} };

void cm::networking::WebRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->replyDelegate(); break;
        case 1: _t->sslErrorsDelegate((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *cm::networking::WebRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::networking::WebRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEnetworkingSCOPEWebRequestENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return IWebRequest::qt_metacast(_clname);
}

int cm::networking::WebRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IWebRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
