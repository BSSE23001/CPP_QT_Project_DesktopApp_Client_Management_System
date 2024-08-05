/****************************************************************************
** Meta object code from reading C++ file 'clientsearch.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../source/models/clientsearch.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientsearch.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS = QtMocHelpers::stringData(
    "cm::models::ClientSearch",
    "searchResultsChanged",
    "",
    "ui_searchText",
    "cm::data::StringDecorator*",
    "ui_searchResults",
    "QQmlListProperty<Client>"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[25];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[27];
    char stringdata5[17];
    char stringdata6[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS_t qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "cm::models::ClientSearch"
        QT_MOC_LITERAL(25, 20),  // "searchResultsChanged"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 13),  // "ui_searchText"
        QT_MOC_LITERAL(61, 26),  // "cm::data::StringDecorator*"
        QT_MOC_LITERAL(88, 16),  // "ui_searchResults"
        QT_MOC_LITERAL(105, 24)   // "QQmlListProperty<Client>"
    },
    "cm::models::ClientSearch",
    "searchResultsChanged",
    "",
    "ui_searchText",
    "cm::data::StringDecorator*",
    "ui_searchResults",
    "QQmlListProperty<Client>"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015009, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm::models::ClientSearch::staticMetaObject = { {
    QMetaObject::SuperData::link<data::Entity::staticMetaObject>(),
    qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS_t,
        // property 'ui_searchText'
        QtPrivate::TypeAndForceComplete<cm::data::StringDecorator*, std::true_type>,
        // property 'ui_searchResults'
        QtPrivate::TypeAndForceComplete<QQmlListProperty<Client>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientSearch, std::true_type>,
        // method 'searchResultsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void cm::models::ClientSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientSearch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchResultsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSearch::*)();
            if (_t _q_method = &ClientSearch::searchResultsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< cm::data::StringDecorator* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ClientSearch *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< cm::data::StringDecorator**>(_v) = _t->searchText(); break;
        case 1: *reinterpret_cast< QQmlListProperty<Client>*>(_v) = _t->ui_searchResults(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *cm::models::ClientSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm::models::ClientSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScmSCOPEmodelsSCOPEClientSearchENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return data::Entity::qt_metacast(_clname);
}

int cm::models::ClientSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = data::Entity::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void cm::models::ClientSearch::searchResultsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
