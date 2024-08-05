/****************************************************************************
** Meta object code from reading C++ file 'datetimedecorator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/data/datetimedecorator.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datetimedecorator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS = QtMocHelpers::stringData(
    "cm::data::DateTimeDecorator",
    "valueChanged",
    "",
    "ui_value",
    "ui_iso8601String",
    "ui_prettyDateString",
    "ui_prettyTimeString",
    "ui_prettyString"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[28];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[17];
    char stringdata5[20];
    char stringdata6[20];
    char stringdata7[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS_t qt_meta_stringdata_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "cm::data::DateTimeDecorator"
        QT_MOC_LITERAL(28, 12),  // "valueChanged"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 8),  // "ui_value"
        QT_MOC_LITERAL(51, 16),  // "ui_iso8601String"
        QT_MOC_LITERAL(68, 19),  // "ui_prettyDateString"
        QT_MOC_LITERAL(88, 19),  // "ui_prettyTimeString"
        QT_MOC_LITERAL(108, 15)   // "ui_prettyString"
    },
    "cm::data::DateTimeDecorator",
    "valueChanged",
    "",
    "ui_value",
    "ui_iso8601String",
    "ui_prettyDateString",
    "ui_prettyTimeString",
    "ui_prettyString"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QDateTime, 0x00015003, uint(0), 0,
       4, QMetaType::QString, 0x00015001, uint(0), 0,
       5, QMetaType::QString, 0x00015001, uint(0), 0,
       6, QMetaType::QString, 0x00015001, uint(0), 0,
       7, QMetaType::QString, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::data::DateTimeDecorator::staticMetaObject = { {
    QMetaObject::SuperData::link<DataDecorator::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS_t,
        // property 'ui_value'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'ui_iso8601String'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ui_prettyDateString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ui_prettyTimeString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ui_prettyString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DateTimeDecorator, std::true_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void cm::data::DateTimeDecorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DateTimeDecorator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DateTimeDecorator::*)();
            if (_t _q_method = &DateTimeDecorator::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DateTimeDecorator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDateTime*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->toIso8601String(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->toPrettyDateString(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->toPrettyTimeString(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->toPrettyString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DateTimeDecorator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< QDateTime*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *cm::data::DateTimeDecorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::data::DateTimeDecorator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEdataSCOPEDateTimeDecoratorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DataDecorator::qt_metacast(_clname);
}

int cm::data::DateTimeDecorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DataDecorator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void cm::data::DateTimeDecorator::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
