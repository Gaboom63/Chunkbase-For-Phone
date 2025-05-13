/****************************************************************************
** Meta object code from reading C++ file 'tabbiomes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/tabbiomes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabbiomes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnalysisBiomes_t {
    QByteArrayData data[10];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnalysisBiomes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnalysisBiomes_t qt_meta_stringdata_AnalysisBiomes = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AnalysisBiomes"
QT_MOC_LITERAL(1, 15, 8), // "seedDone"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "uint64_t"
QT_MOC_LITERAL(4, 34, 4), // "seed"
QT_MOC_LITERAL(5, 39, 17), // "QVector<uint64_t>"
QT_MOC_LITERAL(6, 57, 3), // "cnt"
QT_MOC_LITERAL(7, 61, 8), // "seedItem"
QT_MOC_LITERAL(8, 70, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 87, 4) // "item"

    },
    "AnalysisBiomes\0seedDone\0\0uint64_t\0"
    "seed\0QVector<uint64_t>\0cnt\0seedItem\0"
    "QTreeWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnalysisBiomes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       7,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void AnalysisBiomes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnalysisBiomes *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->seedDone((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< QVector<uint64_t>(*)>(_a[2]))); break;
        case 1: _t->seedItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<uint64_t> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< uint64_t >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnalysisBiomes::*)(uint64_t , QVector<uint64_t> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalysisBiomes::seedDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnalysisBiomes::*)(QTreeWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalysisBiomes::seedItem)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnalysisBiomes::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_AnalysisBiomes.data,
    qt_meta_data_AnalysisBiomes,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnalysisBiomes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalysisBiomes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnalysisBiomes.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int AnalysisBiomes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AnalysisBiomes::seedDone(uint64_t _t1, QVector<uint64_t> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AnalysisBiomes::seedItem(QTreeWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_BiomeTableModel_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BiomeTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BiomeTableModel_t qt_meta_stringdata_BiomeTableModel = {
    {
QT_MOC_LITERAL(0, 0, 15) // "BiomeTableModel"

    },
    "BiomeTableModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BiomeTableModel[] = {

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

void BiomeTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject BiomeTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_BiomeTableModel.data,
    qt_meta_data_BiomeTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BiomeTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BiomeTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BiomeTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int BiomeTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BiomeSortProxy_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BiomeSortProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BiomeSortProxy_t qt_meta_stringdata_BiomeSortProxy = {
    {
QT_MOC_LITERAL(0, 0, 14) // "BiomeSortProxy"

    },
    "BiomeSortProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BiomeSortProxy[] = {

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

void BiomeSortProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject BiomeSortProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_BiomeSortProxy.data,
    qt_meta_data_BiomeSortProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BiomeSortProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BiomeSortProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BiomeSortProxy.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int BiomeSortProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BiomeHeader_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BiomeHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BiomeHeader_t qt_meta_stringdata_BiomeHeader = {
    {
QT_MOC_LITERAL(0, 0, 11) // "BiomeHeader"

    },
    "BiomeHeader"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BiomeHeader[] = {

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

void BiomeHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject BiomeHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<QHeaderView::staticMetaObject>(),
    qt_meta_stringdata_BiomeHeader.data,
    qt_meta_data_BiomeHeader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BiomeHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BiomeHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BiomeHeader.stringdata0))
        return static_cast<void*>(this);
    return QHeaderView::qt_metacast(_clname);
}

int BiomeHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TabBiomes_t {
    QByteArrayData data[28];
    char stringdata0[419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabBiomes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabBiomes_t qt_meta_stringdata_TabBiomes = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TabBiomes"
QT_MOC_LITERAL(1, 10, 19), // "onLocateHeaderClick"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "onTableSort"
QT_MOC_LITERAL(4, 43, 6), // "column"
QT_MOC_LITERAL(5, 50, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(6, 64, 16), // "onVHeaderClicked"
QT_MOC_LITERAL(7, 81, 3), // "row"
QT_MOC_LITERAL(8, 85, 18), // "onAnalysisSeedDone"
QT_MOC_LITERAL(9, 104, 8), // "uint64_t"
QT_MOC_LITERAL(10, 113, 4), // "seed"
QT_MOC_LITERAL(11, 118, 17), // "QVector<uint64_t>"
QT_MOC_LITERAL(12, 136, 5), // "idcnt"
QT_MOC_LITERAL(13, 142, 18), // "onAnalysisSeedItem"
QT_MOC_LITERAL(14, 161, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(15, 178, 4), // "item"
QT_MOC_LITERAL(16, 183, 18), // "onAnalysisFinished"
QT_MOC_LITERAL(17, 202, 15), // "onBufferTimeout"
QT_MOC_LITERAL(18, 218, 20), // "on_pushStart_clicked"
QT_MOC_LITERAL(19, 239, 21), // "on_pushExport_clicked"
QT_MOC_LITERAL(20, 261, 28), // "on_buttonFromVisible_clicked"
QT_MOC_LITERAL(21, 290, 26), // "on_radioFullSample_toggled"
QT_MOC_LITERAL(22, 317, 7), // "checked"
QT_MOC_LITERAL(23, 325, 28), // "on_lineBiomeSize_textChanged"
QT_MOC_LITERAL(24, 354, 4), // "arg1"
QT_MOC_LITERAL(25, 359, 25), // "on_treeLocate_itemClicked"
QT_MOC_LITERAL(26, 385, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(27, 413, 5) // "index"

    },
    "TabBiomes\0onLocateHeaderClick\0\0"
    "onTableSort\0column\0Qt::SortOrder\0"
    "onVHeaderClicked\0row\0onAnalysisSeedDone\0"
    "uint64_t\0seed\0QVector<uint64_t>\0idcnt\0"
    "onAnalysisSeedItem\0QTreeWidgetItem*\0"
    "item\0onAnalysisFinished\0onBufferTimeout\0"
    "on_pushStart_clicked\0on_pushExport_clicked\0"
    "on_buttonFromVisible_clicked\0"
    "on_radioFullSample_toggled\0checked\0"
    "on_lineBiomeSize_textChanged\0arg1\0"
    "on_treeLocate_itemClicked\0"
    "on_tabWidget_currentChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabBiomes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    2,   85,    2, 0x08 /* Private */,
       6,    1,   90,    2, 0x08 /* Private */,
       8,    2,   93,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,
      19,    0,  104,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,
      21,    1,  106,    2, 0x08 /* Private */,
      23,    1,  109,    2, 0x08 /* Private */,
      25,    2,  112,    2, 0x08 /* Private */,
      26,    1,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    2,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,    4,
    QMetaType::Void, QMetaType::Int,   27,

       0        // eod
};

void TabBiomes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabBiomes *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLocateHeaderClick(); break;
        case 1: _t->onTableSort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 2: _t->onVHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onAnalysisSeedDone((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< QVector<uint64_t>(*)>(_a[2]))); break;
        case 4: _t->onAnalysisSeedItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->onAnalysisFinished(); break;
        case 6: _t->onBufferTimeout(); break;
        case 7: _t->on_pushStart_clicked(); break;
        case 8: _t->on_pushExport_clicked(); break;
        case 9: _t->on_buttonFromVisible_clicked(); break;
        case 10: _t->on_radioFullSample_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_lineBiomeSize_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_treeLocate_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<uint64_t> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< uint64_t >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TabBiomes::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TabBiomes.data,
    qt_meta_data_TabBiomes,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TabBiomes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabBiomes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabBiomes.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ISaveTab"))
        return static_cast< ISaveTab*>(this);
    return QWidget::qt_metacast(_clname);
}

int TabBiomes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
