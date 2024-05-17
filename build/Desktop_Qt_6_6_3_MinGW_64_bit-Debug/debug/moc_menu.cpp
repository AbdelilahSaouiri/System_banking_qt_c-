/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../menu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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
struct qt_meta_stringdata_CLASSmenuENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmenuENDCLASS = QtMocHelpers::stringData(
    "menu",
    "on_account_next_clicked",
    "",
    "on_account_list_currentTextChanged",
    "currentText",
    "on_transection_next_clicked",
    "on_account_list_entered",
    "QModelIndex",
    "index",
    "on_report_next_clicked",
    "on_transection_list_currentTextChanged",
    "on_report_list_currentTextChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSmenuENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[5];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[35];
    char stringdata4[12];
    char stringdata5[28];
    char stringdata6[24];
    char stringdata7[12];
    char stringdata8[6];
    char stringdata9[23];
    char stringdata10[39];
    char stringdata11[34];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSmenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSmenuENDCLASS_t qt_meta_stringdata_CLASSmenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "menu"
        QT_MOC_LITERAL(5, 23),  // "on_account_next_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 34),  // "on_account_list_currentTextCh..."
        QT_MOC_LITERAL(65, 11),  // "currentText"
        QT_MOC_LITERAL(77, 27),  // "on_transection_next_clicked"
        QT_MOC_LITERAL(105, 23),  // "on_account_list_entered"
        QT_MOC_LITERAL(129, 11),  // "QModelIndex"
        QT_MOC_LITERAL(141, 5),  // "index"
        QT_MOC_LITERAL(147, 22),  // "on_report_next_clicked"
        QT_MOC_LITERAL(170, 38),  // "on_transection_list_currentTe..."
        QT_MOC_LITERAL(209, 33)   // "on_report_list_currentTextCha..."
    },
    "menu",
    "on_account_next_clicked",
    "",
    "on_account_list_currentTextChanged",
    "currentText",
    "on_transection_next_clicked",
    "on_account_list_entered",
    "QModelIndex",
    "index",
    "on_report_next_clicked",
    "on_transection_list_currentTextChanged",
    "on_report_list_currentTextChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmenuENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    1,   57,    2, 0x08,    2 /* Private */,
       5,    0,   60,    2, 0x08,    4 /* Private */,
       6,    1,   61,    2, 0x08,    5 /* Private */,
       9,    0,   64,    2, 0x08,    7 /* Private */,
      10,    1,   65,    2, 0x08,    8 /* Private */,
      11,    1,   68,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject menu::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSmenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<menu, std::true_type>,
        // method 'on_account_next_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_account_list_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_transection_next_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_account_list_entered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_report_next_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_transection_list_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_report_list_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<menu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_account_next_clicked(); break;
        case 1: _t->on_account_list_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_transection_next_clicked(); break;
        case 3: _t->on_account_list_entered((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->on_report_next_clicked(); break;
        case 5: _t->on_transection_list_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_report_list_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
