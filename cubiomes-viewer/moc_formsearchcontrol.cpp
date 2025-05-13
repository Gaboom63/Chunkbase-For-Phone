/****************************************************************************
** Meta object code from reading C++ file 'formsearchcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/formsearchcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formsearchcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeedTableModel_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeedTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeedTableModel_t qt_meta_stringdata_SeedTableModel = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SeedTableModel"

    },
    "SeedTableModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeedTableModel[] = {

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

void SeedTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SeedTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_SeedTableModel.data,
    qt_meta_data_SeedTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeedTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeedTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeedTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int SeedTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SeedSortProxy_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeedSortProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeedSortProxy_t qt_meta_stringdata_SeedSortProxy = {
    {
QT_MOC_LITERAL(0, 0, 13) // "SeedSortProxy"

    },
    "SeedSortProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeedSortProxy[] = {

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

void SeedSortProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SeedSortProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_SeedSortProxy.data,
    qt_meta_data_SeedSortProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeedSortProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeedSortProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeedSortProxy.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int SeedSortProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FormSearchControl_t {
    QByteArrayData data[46];
    char stringdata0[628];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormSearchControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormSearchControl_t qt_meta_stringdata_FormSearchControl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FormSearchControl"
QT_MOC_LITERAL(1, 18, 19), // "selectedSeedChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "uint64_t"
QT_MOC_LITERAL(4, 48, 4), // "seed"
QT_MOC_LITERAL(5, 53, 19), // "searchStatusChanged"
QT_MOC_LITERAL(6, 73, 7), // "running"
QT_MOC_LITERAL(7, 81, 12), // "resultsAdded"
QT_MOC_LITERAL(8, 94, 3), // "cnt"
QT_MOC_LITERAL(9, 98, 14), // "setSearchRange"
QT_MOC_LITERAL(10, 113, 4), // "smin"
QT_MOC_LITERAL(11, 118, 4), // "smax"
QT_MOC_LITERAL(12, 123, 22), // "on_buttonClear_clicked"
QT_MOC_LITERAL(13, 146, 22), // "on_buttonStart_clicked"
QT_MOC_LITERAL(14, 169, 21), // "on_buttonMore_clicked"
QT_MOC_LITERAL(15, 191, 6), // "onSort"
QT_MOC_LITERAL(16, 198, 6), // "column"
QT_MOC_LITERAL(17, 205, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(18, 219, 22), // "onSeedSelectionChanged"
QT_MOC_LITERAL(19, 242, 18), // "on_results_clicked"
QT_MOC_LITERAL(20, 261, 11), // "QModelIndex"
QT_MOC_LITERAL(21, 273, 5), // "index"
QT_MOC_LITERAL(22, 279, 37), // "on_results_customContextMenuR..."
QT_MOC_LITERAL(23, 317, 3), // "pos"
QT_MOC_LITERAL(24, 321, 27), // "on_buttonSearchHelp_clicked"
QT_MOC_LITERAL(25, 349, 38), // "on_comboSearchType_currentInd..."
QT_MOC_LITERAL(26, 388, 12), // "pasteResults"
QT_MOC_LITERAL(27, 401, 9), // "pasteList"
QT_MOC_LITERAL(28, 411, 5), // "dummy"
QT_MOC_LITERAL(29, 417, 15), // "onBufferTimeout"
QT_MOC_LITERAL(30, 433, 12), // "searchResult"
QT_MOC_LITERAL(31, 446, 16), // "searchResultsAdd"
QT_MOC_LITERAL(32, 463, 21), // "std::vector<uint64_t>"
QT_MOC_LITERAL(33, 485, 5), // "seeds"
QT_MOC_LITERAL(34, 491, 9), // "countonly"
QT_MOC_LITERAL(35, 501, 19), // "searchProgressReset"
QT_MOC_LITERAL(36, 521, 20), // "updateSearchProgress"
QT_MOC_LITERAL(37, 542, 4), // "last"
QT_MOC_LITERAL(38, 547, 3), // "end"
QT_MOC_LITERAL(39, 551, 7), // "int64_t"
QT_MOC_LITERAL(40, 559, 12), // "searchFinish"
QT_MOC_LITERAL(41, 572, 4), // "done"
QT_MOC_LITERAL(42, 577, 15), // "progressTimeout"
QT_MOC_LITERAL(43, 593, 13), // "removeCurrent"
QT_MOC_LITERAL(44, 607, 8), // "copySeed"
QT_MOC_LITERAL(45, 616, 11) // "copyResults"

    },
    "FormSearchControl\0selectedSeedChanged\0"
    "\0uint64_t\0seed\0searchStatusChanged\0"
    "running\0resultsAdded\0cnt\0setSearchRange\0"
    "smin\0smax\0on_buttonClear_clicked\0"
    "on_buttonStart_clicked\0on_buttonMore_clicked\0"
    "onSort\0column\0Qt::SortOrder\0"
    "onSeedSelectionChanged\0on_results_clicked\0"
    "QModelIndex\0index\0"
    "on_results_customContextMenuRequested\0"
    "pos\0on_buttonSearchHelp_clicked\0"
    "on_comboSearchType_currentIndexChanged\0"
    "pasteResults\0pasteList\0dummy\0"
    "onBufferTimeout\0searchResult\0"
    "searchResultsAdd\0std::vector<uint64_t>\0"
    "seeds\0countonly\0searchProgressReset\0"
    "updateSearchProgress\0last\0end\0int64_t\0"
    "searchFinish\0done\0progressTimeout\0"
    "removeCurrent\0copySeed\0copyResults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormSearchControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       5,    1,  142,    2, 0x06 /* Public */,
       7,    1,  145,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,  148,    2, 0x0a /* Public */,
      12,    0,  153,    2, 0x0a /* Public */,
      13,    0,  154,    2, 0x0a /* Public */,
      14,    0,  155,    2, 0x0a /* Public */,
      15,    2,  156,    2, 0x0a /* Public */,
      18,    0,  161,    2, 0x0a /* Public */,
      19,    1,  162,    2, 0x0a /* Public */,
      22,    1,  165,    2, 0x0a /* Public */,
      24,    0,  168,    2, 0x0a /* Public */,
      25,    1,  169,    2, 0x0a /* Public */,
      26,    0,  172,    2, 0x0a /* Public */,
      27,    1,  173,    2, 0x0a /* Public */,
      29,    0,  176,    2, 0x0a /* Public */,
      30,    1,  177,    2, 0x0a /* Public */,
      31,    2,  180,    2, 0x0a /* Public */,
      35,    0,  185,    2, 0x0a /* Public */,
      36,    3,  186,    2, 0x0a /* Public */,
      40,    1,  193,    2, 0x0a /* Public */,
      42,    0,  196,    2, 0x0a /* Public */,
      43,    0,  197,    2, 0x0a /* Public */,
      44,    0,  198,    2, 0x0a /* Public */,
      45,    0,  199,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 17,   16,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QPoint,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Int, 0x80000000 | 32, QMetaType::Bool,   33,   34,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 39,   37,   38,    4,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormSearchControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormSearchControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectedSeedChanged((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 1: _t->searchStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->resultsAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setSearchRange((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< uint64_t(*)>(_a[2]))); break;
        case 4: _t->on_buttonClear_clicked(); break;
        case 5: _t->on_buttonStart_clicked(); break;
        case 6: _t->on_buttonMore_clicked(); break;
        case 7: _t->onSort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 8: _t->onSeedSelectionChanged(); break;
        case 9: _t->on_results_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_results_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->on_buttonSearchHelp_clicked(); break;
        case 12: _t->on_comboSearchType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->pasteResults(); break;
        case 14: { int _r = _t->pasteList((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->onBufferTimeout(); break;
        case 16: _t->searchResult((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 17: { int _r = _t->searchResultsAdd((*reinterpret_cast< std::vector<uint64_t>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->searchProgressReset(); break;
        case 19: _t->updateSearchProgress((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< uint64_t(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3]))); break;
        case 20: _t->searchFinish((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->progressTimeout(); break;
        case 22: _t->removeCurrent(); break;
        case 23: _t->copySeed(); break;
        case 24: _t->copyResults(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< uint64_t >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< uint64_t >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< uint64_t >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< int64_t >(); break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< uint64_t >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormSearchControl::*)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormSearchControl::selectedSeedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormSearchControl::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormSearchControl::searchStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FormSearchControl::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormSearchControl::resultsAdded)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormSearchControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FormSearchControl.data,
    qt_meta_data_FormSearchControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormSearchControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormSearchControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormSearchControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormSearchControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void FormSearchControl::selectedSeedChanged(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormSearchControl::searchStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormSearchControl::resultsAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
