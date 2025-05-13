/****************************************************************************
** Meta object code from reading C++ file 'biomecolordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/biomecolordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'biomecolordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BiomeColorDialog_t {
    QByteArrayData data[21];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BiomeColorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BiomeColorDialog_t qt_meta_stringdata_BiomeColorDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BiomeColorDialog"
QT_MOC_LITERAL(1, 17, 17), // "yieldBiomeColorRc"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "path"
QT_MOC_LITERAL(4, 41, 13), // "setBiomeColor"
QT_MOC_LITERAL(5, 55, 2), // "id"
QT_MOC_LITERAL(6, 58, 3), // "col"
QT_MOC_LITERAL(7, 62, 14), // "editBiomeColor"
QT_MOC_LITERAL(8, 77, 37), // "on_comboColormaps_currentInde..."
QT_MOC_LITERAL(9, 115, 5), // "index"
QT_MOC_LITERAL(10, 121, 8), // "onSaveAs"
QT_MOC_LITERAL(11, 130, 12), // "onSaveSelect"
QT_MOC_LITERAL(12, 143, 2), // "rc"
QT_MOC_LITERAL(13, 146, 4), // "text"
QT_MOC_LITERAL(14, 151, 8), // "onExport"
QT_MOC_LITERAL(15, 160, 8), // "onRemove"
QT_MOC_LITERAL(16, 169, 8), // "onAccept"
QT_MOC_LITERAL(17, 178, 8), // "onImport"
QT_MOC_LITERAL(18, 187, 11), // "onColorHelp"
QT_MOC_LITERAL(19, 199, 14), // "onAllToDefault"
QT_MOC_LITERAL(20, 214, 13) // "onAllToDimmed"

    },
    "BiomeColorDialog\0yieldBiomeColorRc\0\0"
    "path\0setBiomeColor\0id\0col\0editBiomeColor\0"
    "on_comboColormaps_currentIndexChanged\0"
    "index\0onSaveAs\0onSaveSelect\0rc\0text\0"
    "onExport\0onRemove\0onAccept\0onImport\0"
    "onColorHelp\0onAllToDefault\0onAllToDimmed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BiomeColorDialog[] = {

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
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   82,    2, 0x0a /* Public */,
       7,    1,   87,    2, 0x0a /* Public */,
       8,    1,   90,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    2,   94,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,
      19,    0,  104,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QColor,    5,    6,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BiomeColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BiomeColorDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->yieldBiomeColorRc((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setBiomeColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 2: _t->editBiomeColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_comboColormaps_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onSaveAs(); break;
        case 5: _t->onSaveSelect((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->onExport(); break;
        case 7: _t->onRemove(); break;
        case 8: _t->onAccept(); break;
        case 9: _t->onImport(); break;
        case 10: _t->onColorHelp(); break;
        case 11: _t->onAllToDefault(); break;
        case 12: _t->onAllToDimmed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BiomeColorDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BiomeColorDialog::yieldBiomeColorRc)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BiomeColorDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BiomeColorDialog.data,
    qt_meta_data_BiomeColorDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BiomeColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BiomeColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BiomeColorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BiomeColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void BiomeColorDialog::yieldBiomeColorRc(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
