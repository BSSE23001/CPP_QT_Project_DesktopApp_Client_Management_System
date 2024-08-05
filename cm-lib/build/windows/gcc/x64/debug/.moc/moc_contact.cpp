/****************************************************************************
** Meta object code from reading C++ file 'contact.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/models/contact.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contact.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEContactENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEContactENDCLASS = QtMocHelpers::stringData(
    "cm::models::Contact",
    "ui_address",
    "data::StringDecorator*",
    "ui_contactType",
    "data::EnumeratorDecorator*",
    "ui_contactTypeDropDown",
    "cm::data::DropDown*",
    "ui_fullContactDetails"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEContactENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[20];
    char stringdata1[11];
    char stringdata2[23];
    char stringdata3[15];
    char stringdata4[27];
    char stringdata5[23];
    char stringdata6[20];
    char stringdata7[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEContactENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEContactENDCLASS_t qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEContactENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "cm::models::Contact"
        QT_MOC_LITERAL(20, 10),  // "ui_address"
        QT_MOC_LITERAL(31, 22),  // "data::StringDecorator*"
        QT_MOC_LITERAL(54, 14),  // "ui_contactType"
        QT_MOC_LITERAL(69, 26),  // "data::EnumeratorDecorator*"
        QT_MOC_LITERAL(96, 22),  // "ui_contactTypeDropDown"
        QT_MOC_LITERAL(119, 19),  // "cm::data::DropDown*"
        QT_MOC_LITERAL(139, 21)   // "ui_fullContactDetails"
    },
    "cm::models::Contact",
    "ui_address",
    "data::StringDecorator*",
    "ui_contactType",
    "data::EnumeratorDecorator*",
    "ui_contactTypeDropDown",
    "cm::data::DropDown*",
    "ui_fullContactDetails"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEmodelsSCOPEContactENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015409, uint(-1), 0,
       7, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::models::Contact::staticMetaObject = { {
    QMetaObject::SuperData::link<data::Entity::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEContactENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEmodelsSCOPEContactENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEContactENDCLASS_t,
        // property 'ui_address'
        QtPrivate::TypeAndForceComplete<data::StringDecorator*, std::true_type>,
        // property 'ui_contactType'
        QtPrivate::TypeAndForceComplete<data::EnumeratorDecorator*, std::true_type>,
        // property 'ui_contactTypeDropDown'
        QtPrivate::TypeAndForceComplete<cm::data::DropDown*, std::true_type>,
        // property 'ui_fullContactDetails'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Contact, std::true_type>
    >,
    nullptr
} };

void cm::models::Contact::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cm::data::DropDown* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Contact *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< data::StringDecorator**>(_v) = _t->address; break;
        case 1: *reinterpret_cast< data::EnumeratorDecorator**>(_v) = _t->contactType; break;
        case 2: *reinterpret_cast< cm::data::DropDown**>(_v) = _t->contactTypeDropDown; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->fullContactDetails(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *cm::models::Contact::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::models::Contact::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEContactENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return data::Entity::qt_metacast(_clname);
}

int cm::models::Contact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = data::Entity::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
