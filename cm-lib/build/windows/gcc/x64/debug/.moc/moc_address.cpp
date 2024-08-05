/****************************************************************************
** Meta object code from reading C++ file 'address.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/models/address.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'address.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEAddressENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEAddressENDCLASS = QtMocHelpers::stringData(
    "cm::models::Address",
    "ui_building",
    "data::StringDecorator*",
    "ui_street",
    "ui_city",
    "ui_postcode",
    "ui_fullAddress"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEAddressENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[20];
    char stringdata1[12];
    char stringdata2[23];
    char stringdata3[10];
    char stringdata4[8];
    char stringdata5[12];
    char stringdata6[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEAddressENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEAddressENDCLASS_t qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEAddressENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "cm::models::Address"
        QT_MOC_LITERAL(20, 11),  // "ui_building"
        QT_MOC_LITERAL(32, 22),  // "data::StringDecorator*"
        QT_MOC_LITERAL(55, 9),  // "ui_street"
        QT_MOC_LITERAL(65, 7),  // "ui_city"
        QT_MOC_LITERAL(73, 11),  // "ui_postcode"
        QT_MOC_LITERAL(85, 14)   // "ui_fullAddress"
    },
    "cm::models::Address",
    "ui_building",
    "data::StringDecorator*",
    "ui_street",
    "ui_city",
    "ui_postcode",
    "ui_fullAddress"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEmodelsSCOPEAddressENDCLASS[] = {

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
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       6, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::models::Address::staticMetaObject = { {
    QMetaObject::SuperData::link<data::Entity::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEAddressENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEmodelsSCOPEAddressENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEAddressENDCLASS_t,
        // property 'ui_building'
        QtPrivate::TypeAndForceComplete<data::StringDecorator*, std::true_type>,
        // property 'ui_street'
        QtPrivate::TypeAndForceComplete<data::StringDecorator*, std::true_type>,
        // property 'ui_city'
        QtPrivate::TypeAndForceComplete<data::StringDecorator*, std::true_type>,
        // property 'ui_postcode'
        QtPrivate::TypeAndForceComplete<data::StringDecorator*, std::true_type>,
        // property 'ui_fullAddress'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Address, std::true_type>
    >,
    nullptr
} };

void cm::models::Address::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Address *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< data::StringDecorator**>(_v) = _t->building; break;
        case 1: *reinterpret_cast< data::StringDecorator**>(_v) = _t->street; break;
        case 2: *reinterpret_cast< data::StringDecorator**>(_v) = _t->city; break;
        case 3: *reinterpret_cast< data::StringDecorator**>(_v) = _t->postcode; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->fullAddress(); break;
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

const QMetaObject *cm::models::Address::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::models::Address::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEAddressENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return data::Entity::qt_metacast(_clname);
}

int cm::models::Address::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = data::Entity::qt_metacall(_c, _id, _a);
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
