/****************************************************************************
** Meta object code from reading C++ file 'clienttests.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/models/clienttests.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clienttests.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS = QtMocHelpers::stringData(
    "cm::models::ClientTests",
    "constructor_givenParent_setsParentAndDefaultProperties",
    "",
    "constructor_givenParentAndJsonObject_setsParentAndProperties",
    "toJson_withDefaultProperties_constructsJson",
    "toJson_withSetProperties_constructsJson",
    "update_givenJsonObject_updatesProperties",
    "update_givenEmptyJsonObject_updatesPropertiesToDefault",
    "id_givenPrimaryKeyWithNoValue_returnsUuid",
    "id_givenPrimaryKeyWithValue_returnsPrimaryKey"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[24];
    char stringdata1[55];
    char stringdata2[1];
    char stringdata3[61];
    char stringdata4[44];
    char stringdata5[40];
    char stringdata6[41];
    char stringdata7[55];
    char stringdata8[42];
    char stringdata9[46];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS_t qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "cm::models::ClientTests"
        QT_MOC_LITERAL(24, 54),  // "constructor_givenParent_setsP..."
        QT_MOC_LITERAL(79, 0),  // ""
        QT_MOC_LITERAL(80, 60),  // "constructor_givenParentAndJso..."
        QT_MOC_LITERAL(141, 43),  // "toJson_withDefaultProperties_..."
        QT_MOC_LITERAL(185, 39),  // "toJson_withSetProperties_cons..."
        QT_MOC_LITERAL(225, 40),  // "update_givenJsonObject_update..."
        QT_MOC_LITERAL(266, 54),  // "update_givenEmptyJsonObject_u..."
        QT_MOC_LITERAL(321, 41),  // "id_givenPrimaryKeyWithNoValue..."
        QT_MOC_LITERAL(363, 45)   // "id_givenPrimaryKeyWithValue_r..."
    },
    "cm::models::ClientTests",
    "constructor_givenParent_setsParentAndDefaultProperties",
    "",
    "constructor_givenParentAndJsonObject_setsParentAndProperties",
    "toJson_withDefaultProperties_constructsJson",
    "toJson_withSetProperties_constructsJson",
    "update_givenJsonObject_updatesProperties",
    "update_givenEmptyJsonObject_updatesPropertiesToDefault",
    "id_givenPrimaryKeyWithNoValue_returnsUuid",
    "id_givenPrimaryKeyWithValue_returnsPrimaryKey"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject cm::models::ClientTests::staticMetaObject = { {
    QMetaObject::SuperData::link<TestSuite::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientTests, std::true_type>,
        // method 'constructor_givenParent_setsParentAndDefaultProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'constructor_givenParentAndJsonObject_setsParentAndProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_withDefaultProperties_constructsJson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_withSetProperties_constructsJson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_givenJsonObject_updatesProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_givenEmptyJsonObject_updatesPropertiesToDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'id_givenPrimaryKeyWithNoValue_returnsUuid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'id_givenPrimaryKeyWithValue_returnsPrimaryKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void cm::models::ClientTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientTests *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->constructor_givenParent_setsParentAndDefaultProperties(); break;
        case 1: _t->constructor_givenParentAndJsonObject_setsParentAndProperties(); break;
        case 2: _t->toJson_withDefaultProperties_constructsJson(); break;
        case 3: _t->toJson_withSetProperties_constructsJson(); break;
        case 4: _t->update_givenJsonObject_updatesProperties(); break;
        case 5: _t->update_givenEmptyJsonObject_updatesPropertiesToDefault(); break;
        case 6: _t->id_givenPrimaryKeyWithNoValue_returnsUuid(); break;
        case 7: _t->id_givenPrimaryKeyWithValue_returnsPrimaryKey(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *cm::models::ClientTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::models::ClientTests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientTestsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TestSuite::qt_metacast(_clname);
}

int cm::models::ClientTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
