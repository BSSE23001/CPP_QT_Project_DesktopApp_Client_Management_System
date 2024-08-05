/****************************************************************************
** Meta object code from reading C++ file 'intdecoratortests.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/data/intdecoratortests.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intdecoratortests.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS = QtMocHelpers::stringData(
    "cm::data::IntDecoratorTests",
    "constructor_givenNoParameters_setsDefaultProperties",
    "",
    "constructor_givenParameters_setsProperties",
    "setValue_givenNewValue_updatesValueAndEmitsSignal",
    "setValue_givenSameValue_takesNoAction",
    "jsonValue_whenDefaultValue_returnsJson",
    "jsonValue_whenValueSet_returnsJson",
    "update_whenPresentInJson_updatesValue",
    "update_whenNotPresentInJson_updatesValueToDefault"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[28];
    char stringdata1[52];
    char stringdata2[1];
    char stringdata3[43];
    char stringdata4[50];
    char stringdata5[38];
    char stringdata6[39];
    char stringdata7[35];
    char stringdata8[38];
    char stringdata9[50];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS_t qt_meta_stringdata_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "cm::data::IntDecoratorTests"
        QT_MOC_LITERAL(28, 51),  // "constructor_givenNoParameters..."
        QT_MOC_LITERAL(80, 0),  // ""
        QT_MOC_LITERAL(81, 42),  // "constructor_givenParameters_s..."
        QT_MOC_LITERAL(124, 49),  // "setValue_givenNewValue_update..."
        QT_MOC_LITERAL(174, 37),  // "setValue_givenSameValue_takes..."
        QT_MOC_LITERAL(212, 38),  // "jsonValue_whenDefaultValue_re..."
        QT_MOC_LITERAL(251, 34),  // "jsonValue_whenValueSet_return..."
        QT_MOC_LITERAL(286, 37),  // "update_whenPresentInJson_upda..."
        QT_MOC_LITERAL(324, 49)   // "update_whenNotPresentInJson_u..."
    },
    "cm::data::IntDecoratorTests",
    "constructor_givenNoParameters_setsDefaultProperties",
    "",
    "constructor_givenParameters_setsProperties",
    "setValue_givenNewValue_updatesValueAndEmitsSignal",
    "setValue_givenSameValue_takesNoAction",
    "jsonValue_whenDefaultValue_returnsJson",
    "jsonValue_whenValueSet_returnsJson",
    "update_whenPresentInJson_updatesValue",
    "update_whenNotPresentInJson_updatesValueToDefault"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject cm::data::IntDecoratorTests::staticMetaObject = { {
    QMetaObject::SuperData::link<TestSuite::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IntDecoratorTests, std::true_type>,
        // method 'constructor_givenNoParameters_setsDefaultProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'constructor_givenParameters_setsProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setValue_givenNewValue_updatesValueAndEmitsSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setValue_givenSameValue_takesNoAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'jsonValue_whenDefaultValue_returnsJson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'jsonValue_whenValueSet_returnsJson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_whenPresentInJson_updatesValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_whenNotPresentInJson_updatesValueToDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void cm::data::IntDecoratorTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IntDecoratorTests *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->constructor_givenNoParameters_setsDefaultProperties(); break;
        case 1: _t->constructor_givenParameters_setsProperties(); break;
        case 2: _t->setValue_givenNewValue_updatesValueAndEmitsSignal(); break;
        case 3: _t->setValue_givenSameValue_takesNoAction(); break;
        case 4: _t->jsonValue_whenDefaultValue_returnsJson(); break;
        case 5: _t->jsonValue_whenValueSet_returnsJson(); break;
        case 6: _t->update_whenPresentInJson_updatesValue(); break;
        case 7: _t->update_whenNotPresentInJson_updatesValueToDefault(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *cm::data::IntDecoratorTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::data::IntDecoratorTests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEdataSCOPEIntDecoratorTestsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TestSuite::qt_metacast(_clname);
}

int cm::data::IntDecoratorTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TestSuite::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
