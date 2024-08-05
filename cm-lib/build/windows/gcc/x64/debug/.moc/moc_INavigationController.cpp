/****************************************************************************
** Meta object code from reading C++ file 'INavigationController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/controllers/INavigationController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'INavigationController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS = QtMocHelpers::stringData(
    "cm::controllers::INavigationController",
    "goCreateClientView",
    "",
    "goDashboardView",
    "goFindClientView",
    "goEditClientView",
    "cm::models::Client*",
    "client",
    "goRssView"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[39];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[17];
    char stringdata5[17];
    char stringdata6[20];
    char stringdata7[7];
    char stringdata8[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS_t qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 38),  // "cm::controllers::INavigationC..."
        QT_MOC_LITERAL(39, 18),  // "goCreateClientView"
        QT_MOC_LITERAL(58, 0),  // ""
        QT_MOC_LITERAL(59, 15),  // "goDashboardView"
        QT_MOC_LITERAL(75, 16),  // "goFindClientView"
        QT_MOC_LITERAL(92, 16),  // "goEditClientView"
        QT_MOC_LITERAL(109, 19),  // "cm::models::Client*"
        QT_MOC_LITERAL(129, 6),  // "client"
        QT_MOC_LITERAL(136, 9)   // "goRssView"
    },
    "cm::controllers::INavigationController",
    "goCreateClientView",
    "",
    "goDashboardView",
    "goFindClientView",
    "goEditClientView",
    "cm::models::Client*",
    "client",
    "goRssView"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    0,   46,    2, 0x06,    3 /* Public */,
       5,    1,   47,    2, 0x06,    4 /* Public */,
       8,    0,   50,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::controllers::INavigationController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<INavigationController, std::true_type>,
        // method 'goCreateClientView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goDashboardView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goFindClientView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goEditClientView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<cm::models::Client *, std::false_type>,
        // method 'goRssView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void cm::controllers::INavigationController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<INavigationController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->goCreateClientView(); break;
        case 1: _t->goDashboardView(); break;
        case 2: _t->goFindClientView(); break;
        case 3: _t->goEditClientView((*reinterpret_cast< std::add_pointer_t<cm::models::Client*>>(_a[1]))); break;
        case 4: _t->goRssView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< cm::models::Client* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (INavigationController::*)();
            if (_t _q_method = &INavigationController::goCreateClientView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (INavigationController::*)();
            if (_t _q_method = &INavigationController::goDashboardView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (INavigationController::*)();
            if (_t _q_method = &INavigationController::goFindClientView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (INavigationController::*)(cm::models::Client * );
            if (_t _q_method = &INavigationController::goEditClientView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (INavigationController::*)();
            if (_t _q_method = &INavigationController::goRssView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *cm::controllers::INavigationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::controllers::INavigationController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEINavigationControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cm::controllers::INavigationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void cm::controllers::INavigationController::goCreateClientView()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void cm::controllers::INavigationController::goDashboardView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void cm::controllers::INavigationController::goFindClientView()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void cm::controllers::INavigationController::goEditClientView(cm::models::Client * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void cm::controllers::INavigationController::goRssView()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
