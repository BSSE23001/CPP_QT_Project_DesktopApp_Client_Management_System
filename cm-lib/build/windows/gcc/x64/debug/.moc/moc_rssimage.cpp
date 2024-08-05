/****************************************************************************
** Meta object code from reading C++ file 'rssimage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/rss/rssimage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rssimage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPErssSCOPERssImageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPErssSCOPERssImageENDCLASS = QtMocHelpers::stringData(
    "cm::rss::RssImage",
    "ui_height",
    "ui_width",
    "ui_link",
    "ui_title",
    "ui_url"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPErssSCOPERssImageENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[18];
    char stringdata1[10];
    char stringdata2[9];
    char stringdata3[8];
    char stringdata4[9];
    char stringdata5[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPErssSCOPERssImageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPErssSCOPERssImageENDCLASS_t qt_meta_stringdata_CLASScmSCOPErssSCOPERssImageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "cm::rss::RssImage"
        QT_MOC_LITERAL(18, 9),  // "ui_height"
        QT_MOC_LITERAL(28, 8),  // "ui_width"
        QT_MOC_LITERAL(37, 7),  // "ui_link"
        QT_MOC_LITERAL(45, 8),  // "ui_title"
        QT_MOC_LITERAL(54, 6)   // "ui_url"
    },
    "cm::rss::RssImage",
    "ui_height",
    "ui_width",
    "ui_link",
    "ui_title",
    "ui_url"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPErssSCOPERssImageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::UShort, 0x00015401, uint(-1), 0,
       2, QMetaType::UShort, 0x00015401, uint(-1), 0,
       3, QMetaType::QString, 0x00015401, uint(-1), 0,
       4, QMetaType::QString, 0x00015401, uint(-1), 0,
       5, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::rss::RssImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPErssSCOPERssImageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPErssSCOPERssImageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPErssSCOPERssImageENDCLASS_t,
        // property 'ui_height'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'ui_width'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'ui_link'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ui_title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ui_url'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RssImage, std::true_type>
    >,
    nullptr
} };

void cm::rss::RssImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RssImage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->height(); break;
        case 1: *reinterpret_cast< quint16*>(_v) = _t->width(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->link(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->url(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *cm::rss::RssImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::rss::RssImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPErssSCOPERssImageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cm::rss::RssImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
