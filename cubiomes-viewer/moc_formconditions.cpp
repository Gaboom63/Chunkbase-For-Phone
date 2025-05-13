/****************************************************************************
** Meta object code from reading C++ file 'formconditions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/formconditions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formconditions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ItemDelegate_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemDelegate_t qt_meta_stringdata_ItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ItemDelegate"

    },
    "ItemDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_ItemDelegate.data,
    qt_meta_data_ItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FormConditions_t {
    QByteArrayData data[31];
    char stringdata0[540];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormConditions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormConditions_t qt_meta_stringdata_FormConditions = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FormConditions"
QT_MOC_LITERAL(1, 15, 7), // "changed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "selectionUpdate"
QT_MOC_LITERAL(4, 40, 22), // "std::vector<Condition>"
QT_MOC_LITERAL(5, 63, 8), // "selected"
QT_MOC_LITERAL(6, 72, 26), // "on_buttonRemoveAll_clicked"
QT_MOC_LITERAL(7, 99, 23), // "on_buttonRemove_clicked"
QT_MOC_LITERAL(8, 123, 24), // "on_buttonDisable_clicked"
QT_MOC_LITERAL(9, 148, 21), // "on_buttonEdit_clicked"
QT_MOC_LITERAL(10, 170, 26), // "on_buttonAddFilter_clicked"
QT_MOC_LITERAL(11, 197, 44), // "on_listConditions_customConte..."
QT_MOC_LITERAL(12, 242, 3), // "pos"
QT_MOC_LITERAL(13, 246, 35), // "on_listConditions_itemDoubleC..."
QT_MOC_LITERAL(14, 282, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(15, 299, 4), // "item"
QT_MOC_LITERAL(16, 304, 38), // "on_listConditions_itemSelecti..."
QT_MOC_LITERAL(17, 343, 13), // "conditionsAdd"
QT_MOC_LITERAL(18, 357, 14), // "conditionsEdit"
QT_MOC_LITERAL(19, 372, 13), // "conditionsCut"
QT_MOC_LITERAL(20, 386, 14), // "conditionsCopy"
QT_MOC_LITERAL(21, 401, 15), // "conditionsPaste"
QT_MOC_LITERAL(22, 417, 9), // "countonly"
QT_MOC_LITERAL(23, 427, 16), // "conditionsDelete"
QT_MOC_LITERAL(24, 444, 16), // "addItemCondition"
QT_MOC_LITERAL(25, 461, 9), // "Condition"
QT_MOC_LITERAL(26, 471, 4), // "cond"
QT_MOC_LITERAL(27, 476, 8), // "modified"
QT_MOC_LITERAL(28, 485, 30), // "on_listConditions_indexesMoved"
QT_MOC_LITERAL(29, 516, 15), // "QModelIndexList"
QT_MOC_LITERAL(30, 532, 7) // "indexes"

    },
    "FormConditions\0changed\0\0selectionUpdate\0"
    "std::vector<Condition>\0selected\0"
    "on_buttonRemoveAll_clicked\0"
    "on_buttonRemove_clicked\0"
    "on_buttonDisable_clicked\0on_buttonEdit_clicked\0"
    "on_buttonAddFilter_clicked\0"
    "on_listConditions_customContextMenuRequested\0"
    "pos\0on_listConditions_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0"
    "on_listConditions_itemSelectionChanged\0"
    "conditionsAdd\0conditionsEdit\0conditionsCut\0"
    "conditionsCopy\0conditionsPaste\0countonly\0"
    "conditionsDelete\0addItemCondition\0"
    "Condition\0cond\0modified\0"
    "on_listConditions_indexesMoved\0"
    "QModelIndexList\0indexes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormConditions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    1,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  118,    2, 0x0a /* Public */,
       7,    0,  119,    2, 0x0a /* Public */,
       8,    0,  120,    2, 0x0a /* Public */,
       9,    0,  121,    2, 0x0a /* Public */,
      10,    0,  122,    2, 0x0a /* Public */,
      11,    1,  123,    2, 0x0a /* Public */,
      13,    1,  126,    2, 0x0a /* Public */,
      16,    0,  129,    2, 0x0a /* Public */,
      17,    0,  130,    2, 0x0a /* Public */,
      18,    0,  131,    2, 0x0a /* Public */,
      19,    0,  132,    2, 0x0a /* Public */,
      20,    0,  133,    2, 0x0a /* Public */,
      21,    1,  134,    2, 0x0a /* Public */,
      21,    0,  137,    2, 0x2a /* Public | MethodCloned */,
      23,    0,  138,    2, 0x0a /* Public */,
      24,    3,  139,    2, 0x0a /* Public */,
      24,    2,  146,    2, 0x2a /* Public | MethodCloned */,
      28,    1,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Bool,   22,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 25, QMetaType::Int,   15,   26,   27,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 25,   15,   26,
    QMetaType::Void, 0x80000000 | 29,   30,

       0        // eod
};

void FormConditions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormConditions *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->selectionUpdate((*reinterpret_cast< const std::vector<Condition>(*)>(_a[1]))); break;
        case 2: _t->on_buttonRemoveAll_clicked(); break;
        case 3: _t->on_buttonRemove_clicked(); break;
        case 4: _t->on_buttonDisable_clicked(); break;
        case 5: _t->on_buttonEdit_clicked(); break;
        case 6: _t->on_buttonAddFilter_clicked(); break;
        case 7: _t->on_listConditions_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 8: _t->on_listConditions_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->on_listConditions_itemSelectionChanged(); break;
        case 10: _t->conditionsAdd(); break;
        case 11: _t->conditionsEdit(); break;
        case 12: _t->conditionsCut(); break;
        case 13: _t->conditionsCopy(); break;
        case 14: { int _r = _t->conditionsPaste((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->conditionsPaste();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->conditionsDelete(); break;
        case 17: _t->addItemCondition((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< Condition(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->addItemCondition((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< Condition(*)>(_a[2]))); break;
        case 19: _t->on_listConditions_indexesMoved((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Condition >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Condition >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormConditions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormConditions::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormConditions::*)(const std::vector<Condition> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormConditions::selectionUpdate)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormConditions::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FormConditions.data,
    qt_meta_data_FormConditions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormConditions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormConditions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormConditions.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormConditions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void FormConditions::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormConditions::selectionUpdate(const std::vector<Condition> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
