/****************************************************************************
** Meta object code from reading C++ file 'mastercontrollertests.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/controllers/mastercontrollertests.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mastercontrollertests.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS = QtMocHelpers::stringData(
    "cm::controllers::MasterControllerTests",
    "initTestCase",
    "",
    "cleanupTestCase",
    "init",
    "cleanup",
    "welcomeMessage_returnsCorrectMessage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[39];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[5];
    char stringdata5[8];
    char stringdata6[37];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS_t qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 38),  // "cm::controllers::MasterContro..."
        QT_MOC_LITERAL(39, 12),  // "initTestCase"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 15),  // "cleanupTestCase"
        QT_MOC_LITERAL(69, 4),  // "init"
        QT_MOC_LITERAL(74, 7),  // "cleanup"
        QT_MOC_LITERAL(82, 36)   // "welcomeMessage_returnsCorrect..."
    },
    "cm::controllers::MasterControllerTests",
    "initTestCase",
    "",
    "cleanupTestCase",
    "init",
    "cleanup",
    "welcomeMessage_returnsCorrectMessage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::controllers::MasterControllerTests::staticMetaObject = { {
    QMetaObject::SuperData::link<TestSuite::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MasterControllerTests, std::true_type>,
        // method 'initTestCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cleanupTestCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cleanup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'welcomeMessage_returnsCorrectMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void cm::controllers::MasterControllerTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MasterControllerTests *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->welcomeMessage_returnsCorrectMessage(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *cm::controllers::MasterControllerTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::controllers::MasterControllerTests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerTestsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return TestSuite::qt_metacast(_clname);
}

int cm::controllers::MasterControllerTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TestSuite::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
