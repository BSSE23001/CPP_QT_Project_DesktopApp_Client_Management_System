/****************************************************************************
** Meta object code from reading C++ file 'ICommandController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/controllers/ICommandController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ICommandController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS = QtMocHelpers::stringData(
    "cm::controllers::ICommandController",
    "onCreateClientSaveExecuted",
    "",
    "onFindClientSearchExecuted",
    "onEditClientSaveExecuted",
    "onEditClientDeleteExecuted",
    "onRssRefreshExecuted",
    "setSelectedClient",
    "cm::models::Client*",
    "client",
    "ui_createClientViewContextCommands",
    "QQmlListProperty<cm::framework::Command>",
    "ui_findClientViewContextCommands",
    "ui_editClientViewContextCommands",
    "ui_rssViewContextCommands"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[36];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[25];
    char stringdata5[27];
    char stringdata6[21];
    char stringdata7[18];
    char stringdata8[20];
    char stringdata9[7];
    char stringdata10[35];
    char stringdata11[41];
    char stringdata12[33];
    char stringdata13[33];
    char stringdata14[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS_t qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 35),  // "cm::controllers::ICommandCont..."
        QT_MOC_LITERAL(36, 26),  // "onCreateClientSaveExecuted"
        QT_MOC_LITERAL(63, 0),  // ""
        QT_MOC_LITERAL(64, 26),  // "onFindClientSearchExecuted"
        QT_MOC_LITERAL(91, 24),  // "onEditClientSaveExecuted"
        QT_MOC_LITERAL(116, 26),  // "onEditClientDeleteExecuted"
        QT_MOC_LITERAL(143, 20),  // "onRssRefreshExecuted"
        QT_MOC_LITERAL(164, 17),  // "setSelectedClient"
        QT_MOC_LITERAL(182, 19),  // "cm::models::Client*"
        QT_MOC_LITERAL(202, 6),  // "client"
        QT_MOC_LITERAL(209, 34),  // "ui_createClientViewContextCom..."
        QT_MOC_LITERAL(244, 40),  // "QQmlListProperty<cm::framewor..."
        QT_MOC_LITERAL(285, 32),  // "ui_findClientViewContextCommands"
        QT_MOC_LITERAL(318, 32),  // "ui_editClientViewContextCommands"
        QT_MOC_LITERAL(351, 25)   // "ui_rssViewContextCommands"
    },
    "cm::controllers::ICommandController",
    "onCreateClientSaveExecuted",
    "",
    "onFindClientSearchExecuted",
    "onEditClientSaveExecuted",
    "onEditClientDeleteExecuted",
    "onRssRefreshExecuted",
    "setSelectedClient",
    "cm::models::Client*",
    "client",
    "ui_createClientViewContextCommands",
    "QQmlListProperty<cm::framework::Command>",
    "ui_findClientViewContextCommands",
    "ui_editClientViewContextCommands",
    "ui_rssViewContextCommands"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    5 /* Public */,
       3,    0,   51,    2, 0x0a,    6 /* Public */,
       4,    0,   52,    2, 0x0a,    7 /* Public */,
       5,    0,   53,    2, 0x0a,    8 /* Public */,
       6,    0,   54,    2, 0x0a,    9 /* Public */,
       7,    1,   55,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 11, 0x00015409, uint(-1), 0,
      13, 0x80000000 | 11, 0x00015409, uint(-1), 0,
      14, 0x80000000 | 11, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::controllers::ICommandController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS_t,
        // property 'ui_createClientViewContextCommands'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<cm::framework::Command>, std::true_type>,
        // property 'ui_findClientViewContextCommands'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<cm::framework::Command>, std::true_type>,
        // property 'ui_editClientViewContextCommands'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<cm::framework::Command>, std::true_type>,
        // property 'ui_rssViewContextCommands'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<cm::framework::Command>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ICommandController, std::true_type>,
        // method 'onCreateClientSaveExecuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFindClientSearchExecuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEditClientSaveExecuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEditClientDeleteExecuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRssRefreshExecuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSelectedClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<cm::models::Client *, std::false_type>
    >,
    nullptr
} };

void cm::controllers::ICommandController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ICommandController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCreateClientSaveExecuted(); break;
        case 1: _t->onFindClientSearchExecuted(); break;
        case 2: _t->onEditClientSaveExecuted(); break;
        case 3: _t->onEditClientDeleteExecuted(); break;
        case 4: _t->onRssRefreshExecuted(); break;
        case 5: _t->setSelectedClient((*reinterpret_cast< std::add_pointer_t<cm::models::Client*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< cm::models::Client* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ICommandController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<cm::framework::Command>*>(_v) = _t->ui_createClientViewContextCommands(); break;
        case 1: *reinterpret_cast< QQmlListProperty<cm::framework::Command>*>(_v) = _t->ui_findClientViewContextCommands(); break;
        case 2: *reinterpret_cast< QQmlListProperty<cm::framework::Command>*>(_v) = _t->ui_editClientViewContextCommands(); break;
        case 3: *reinterpret_cast< QQmlListProperty<cm::framework::Command>*>(_v) = _t->ui_rssViewContextCommands(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *cm::controllers::ICommandController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::controllers::ICommandController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEICommandControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cm::controllers::ICommandController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
