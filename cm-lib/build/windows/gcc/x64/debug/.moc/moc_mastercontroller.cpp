/****************************************************************************
** Meta object code from reading C++ file 'mastercontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/controllers/mastercontroller.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mastercontroller.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS = QtMocHelpers::stringData(
    "cm::controllers::MasterController",
    "rssChannelChanged",
    "",
    "selectClient",
    "cm::models::Client*",
    "client",
    "onRssReplyRecieved",
    "statusCode",
    "body",
    "ui_welcomeMessage",
    "ui_navigationController",
    "cm::controllers::INavigationController*",
    "ui_commandController",
    "cm::controllers::ICommandController*",
    "ui_newClient",
    "ui_clientSearch",
    "cm::models::ClientSearch*",
    "ui_databaseController",
    "cm::controllers::IDatabaseController*",
    "ui_rssChannel",
    "cm::rss::RssChannel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[34];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[20];
    char stringdata5[7];
    char stringdata6[19];
    char stringdata7[11];
    char stringdata8[5];
    char stringdata9[18];
    char stringdata10[24];
    char stringdata11[40];
    char stringdata12[21];
    char stringdata13[37];
    char stringdata14[13];
    char stringdata15[16];
    char stringdata16[26];
    char stringdata17[22];
    char stringdata18[38];
    char stringdata19[14];
    char stringdata20[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS_t qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 33),  // "cm::controllers::MasterContro..."
        QT_MOC_LITERAL(34, 17),  // "rssChannelChanged"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 12),  // "selectClient"
        QT_MOC_LITERAL(66, 19),  // "cm::models::Client*"
        QT_MOC_LITERAL(86, 6),  // "client"
        QT_MOC_LITERAL(93, 18),  // "onRssReplyRecieved"
        QT_MOC_LITERAL(112, 10),  // "statusCode"
        QT_MOC_LITERAL(123, 4),  // "body"
        QT_MOC_LITERAL(128, 17),  // "ui_welcomeMessage"
        QT_MOC_LITERAL(146, 23),  // "ui_navigationController"
        QT_MOC_LITERAL(170, 39),  // "cm::controllers::INavigationC..."
        QT_MOC_LITERAL(210, 20),  // "ui_commandController"
        QT_MOC_LITERAL(231, 36),  // "cm::controllers::ICommandCont..."
        QT_MOC_LITERAL(268, 12),  // "ui_newClient"
        QT_MOC_LITERAL(281, 15),  // "ui_clientSearch"
        QT_MOC_LITERAL(297, 25),  // "cm::models::ClientSearch*"
        QT_MOC_LITERAL(323, 21),  // "ui_databaseController"
        QT_MOC_LITERAL(345, 37),  // "cm::controllers::IDatabaseCon..."
        QT_MOC_LITERAL(383, 13),  // "ui_rssChannel"
        QT_MOC_LITERAL(397, 20)   // "cm::rss::RssChannel*"
    },
    "cm::controllers::MasterController",
    "rssChannelChanged",
    "",
    "selectClient",
    "cm::models::Client*",
    "client",
    "onRssReplyRecieved",
    "statusCode",
    "body",
    "ui_welcomeMessage",
    "ui_navigationController",
    "cm::controllers::INavigationController*",
    "ui_commandController",
    "cm::controllers::ICommandController*",
    "ui_newClient",
    "ui_clientSearch",
    "cm::models::ClientSearch*",
    "ui_databaseController",
    "cm::controllers::IDatabaseController*",
    "ui_rssChannel",
    "cm::rss::RssChannel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   41, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   33,    2, 0x0a,    9 /* Public */,
       6,    2,   36,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    7,    8,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00015401, uint(-1), 0,
      10, 0x80000000 | 11, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 13, 0x00015409, uint(-1), 0,
      14, 0x80000000 | 4, 0x00015409, uint(-1), 0,
      15, 0x80000000 | 16, 0x00015409, uint(-1), 0,
      17, 0x80000000 | 18, 0x00015409, uint(-1), 0,
      19, 0x80000000 | 20, 0x00015009, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::controllers::MasterController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS_t,
        // property 'ui_welcomeMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ui_navigationController'
        QtPrivate::TypeAndForceComplete<cm::controllers::INavigationController*, std::true_type>,
        // property 'ui_commandController'
        QtPrivate::TypeAndForceComplete<cm::controllers::ICommandController*, std::true_type>,
        // property 'ui_newClient'
        QtPrivate::TypeAndForceComplete<cm::models::Client*, std::true_type>,
        // property 'ui_clientSearch'
        QtPrivate::TypeAndForceComplete<cm::models::ClientSearch*, std::true_type>,
        // property 'ui_databaseController'
        QtPrivate::TypeAndForceComplete<cm::controllers::IDatabaseController*, std::true_type>,
        // property 'ui_rssChannel'
        QtPrivate::TypeAndForceComplete<cm::rss::RssChannel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MasterController, std::true_type>,
        // method 'rssChannelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<cm::models::Client *, std::false_type>,
        // method 'onRssReplyRecieved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>
    >,
    nullptr
} };

void cm::controllers::MasterController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MasterController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rssChannelChanged(); break;
        case 1: _t->selectClient((*reinterpret_cast< std::add_pointer_t<cm::models::Client*>>(_a[1]))); break;
        case 2: _t->onRssReplyRecieved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
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
            using _t = void (MasterController::*)();
            if (_t _q_method = &MasterController::rssChannelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cm::controllers::ICommandController* >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cm::controllers::IDatabaseController* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cm::controllers::INavigationController* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cm::models::Client* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cm::models::ClientSearch* >(); break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cm::rss::RssChannel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MasterController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->welcomeMessage(); break;
        case 1: *reinterpret_cast< cm::controllers::INavigationController**>(_v) = _t->navigationController(); break;
        case 2: *reinterpret_cast< cm::controllers::ICommandController**>(_v) = _t->commandController(); break;
        case 3: *reinterpret_cast< cm::models::Client**>(_v) = _t->newClient(); break;
        case 4: *reinterpret_cast< cm::models::ClientSearch**>(_v) = _t->clientSearch(); break;
        case 5: *reinterpret_cast< cm::controllers::IDatabaseController**>(_v) = _t->databaseController(); break;
        case 6: *reinterpret_cast< cm::rss::RssChannel**>(_v) = _t->rssChannel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *cm::controllers::MasterController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::controllers::MasterController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEcontrollersSCOPEMasterControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cm::controllers::MasterController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void cm::controllers::MasterController::rssChannelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
