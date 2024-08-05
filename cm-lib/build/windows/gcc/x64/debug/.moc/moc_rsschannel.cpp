/****************************************************************************
** Meta object code from reading C++ file 'rsschannel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/rss/rsschannel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rsschannel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPErssSCOPERssChannelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPErssSCOPERssChannelENDCLASS = QtMocHelpers::stringData(
    "cm::rss::RssChannel",
    "ui_description",
    "ui_link",
    "ui_title",
    "ui_image",
    "cm::rss::RssImage*",
    "ui_items",
    "QQmlListProperty<cm::rss::RssItem>"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPErssSCOPERssChannelENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[20];
    char stringdata1[15];
    char stringdata2[8];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[19];
    char stringdata6[9];
    char stringdata7[35];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPErssSCOPERssChannelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPErssSCOPERssChannelENDCLASS_t qt_meta_stringdata_CLASScmSCOPErssSCOPERssChannelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "cm::rss::RssChannel"
        QT_MOC_LITERAL(20, 14),  // "ui_description"
        QT_MOC_LITERAL(35, 7),  // "ui_link"
        QT_MOC_LITERAL(43, 8),  // "ui_title"
        QT_MOC_LITERAL(52, 8),  // "ui_image"
        QT_MOC_LITERAL(61, 18),  // "cm::rss::RssImage*"
        QT_MOC_LITERAL(80, 8),  // "ui_items"
        QT_MOC_LITERAL(89, 34)   // "QQmlListProperty<cm::rss::Rss..."
    },
    "cm::rss::RssChannel",
    "ui_description",
    "ui_link",
    "ui_title",
    "ui_image",
    "cm::rss::RssImage*",
    "ui_items",
    "QQmlListProperty<cm::rss::RssItem>"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPErssSCOPERssChannelENDCLASS[] = {

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
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, QMetaType::QString, 0x00015401, uint(-1), 0,
       3, QMetaType::QString, 0x00015401, uint(-1), 0,
       4, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 7, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::rss::RssChannel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPErssSCOPERssChannelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPErssSCOPERssChannelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPErssSCOPERssChannelENDCLASS_t,
        // property 'ui_description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ui_link'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ui_title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ui_image'
        QtPrivate::TypeAndForceComplete<cm::rss::RssImage*, std::true_type>,
        // property 'ui_items'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<cm::rss::RssItem>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RssChannel, std::true_type>
    >,
    nullptr
} };

void cm::rss::RssChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cm::rss::RssImage* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RssChannel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->link(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 3: *reinterpret_cast< cm::rss::RssImage**>(_v) = _t->image(); break;
        case 4: *reinterpret_cast< QQmlListProperty<cm::rss::RssItem>*>(_v) = _t->ui_items(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *cm::rss::RssChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::rss::RssChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPErssSCOPERssChannelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cm::rss::RssChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
