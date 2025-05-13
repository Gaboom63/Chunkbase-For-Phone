/****************************************************************************
** Meta object code from reading C++ file 'mapview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/mapview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapOverlay_t {
    QByteArrayData data[6];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapOverlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapOverlay_t qt_meta_stringdata_MapOverlay = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MapOverlay"
QT_MOC_LITERAL(1, 11, 5), // "event"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "QEvent*"
QT_MOC_LITERAL(4, 26, 10), // "paintEvent"
QT_MOC_LITERAL(5, 37, 12) // "QPaintEvent*"

    },
    "MapOverlay\0event\0\0QEvent*\0paintEvent\0"
    "QPaintEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapOverlay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void MapOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapOverlay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->event((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapOverlay::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MapOverlay.data,
    qt_meta_data_MapOverlay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapOverlay.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MapOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_MapView_t {
    QByteArrayData data[24];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapView_t qt_meta_stringdata_MapView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MapView"
QT_MOC_LITERAL(1, 8, 11), // "layerChange"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "mode"
QT_MOC_LITERAL(4, 26, 4), // "disp"
QT_MOC_LITERAL(5, 31, 9), // "mapUpdate"
QT_MOC_LITERAL(6, 41, 15), // "showContextMenu"
QT_MOC_LITERAL(7, 57, 3), // "pos"
QT_MOC_LITERAL(8, 61, 8), // "copySeed"
QT_MOC_LITERAL(9, 70, 8), // "copyText"
QT_MOC_LITERAL(10, 79, 3), // "txt"
QT_MOC_LITERAL(11, 83, 6), // "onGoto"
QT_MOC_LITERAL(12, 90, 10), // "paintEvent"
QT_MOC_LITERAL(13, 101, 12), // "QPaintEvent*"
QT_MOC_LITERAL(14, 114, 11), // "resizeEvent"
QT_MOC_LITERAL(15, 126, 13), // "QResizeEvent*"
QT_MOC_LITERAL(16, 140, 10), // "wheelEvent"
QT_MOC_LITERAL(17, 151, 12), // "QWheelEvent*"
QT_MOC_LITERAL(18, 164, 15), // "mousePressEvent"
QT_MOC_LITERAL(19, 180, 12), // "QMouseEvent*"
QT_MOC_LITERAL(20, 193, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(21, 208, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(22, 226, 13), // "keyPressEvent"
QT_MOC_LITERAL(23, 240, 10) // "QKeyEvent*"

    },
    "MapView\0layerChange\0\0mode\0disp\0mapUpdate\0"
    "showContextMenu\0pos\0copySeed\0copyText\0"
    "txt\0onGoto\0paintEvent\0QPaintEvent*\0"
    "resizeEvent\0QResizeEvent*\0wheelEvent\0"
    "QWheelEvent*\0mousePressEvent\0QMouseEvent*\0"
    "mouseMoveEvent\0mouseReleaseEvent\0"
    "keyPressEvent\0QKeyEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   84,    2, 0x0a /* Public */,
       6,    1,   85,    2, 0x0a /* Public */,
       8,    0,   88,    2, 0x0a /* Public */,
       9,    1,   89,    2, 0x0a /* Public */,
      11,    0,   92,    2, 0x0a /* Public */,
      12,    1,   93,    2, 0x0a /* Public */,
      14,    1,   96,    2, 0x0a /* Public */,
      16,    1,   99,    2, 0x0a /* Public */,
      18,    1,  102,    2, 0x0a /* Public */,
      20,    1,  105,    2, 0x0a /* Public */,
      21,    1,  108,    2, 0x0a /* Public */,
      22,    1,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, 0x80000000 | 23,    2,

       0        // eod
};

void MapView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->layerChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->mapUpdate(); break;
        case 2: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->copySeed(); break;
        case 4: _t->copyText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onGoto(); break;
        case 6: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 7: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 8: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 9: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapView::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapView::layerChange)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MapView.data,
    qt_meta_data_MapView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MapView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MapView::layerChange(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
