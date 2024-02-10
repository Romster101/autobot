/****************************************************************************
** Meta object code from reading C++ file 'manualremotecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "manualremotecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manualremotecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ManualRemoteController_t {
    QByteArrayData data[12];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManualRemoteController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManualRemoteController_t qt_meta_stringdata_ManualRemoteController = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ManualRemoteController"
QT_MOC_LITERAL(1, 23, 14), // "finishCallback"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 6), // "result"
QT_MOC_LITERAL(4, 46, 18), // "on_pb_back_clicked"
QT_MOC_LITERAL(5, 65, 18), // "on_pb_back_pressed"
QT_MOC_LITERAL(6, 84, 21), // "on_pb_forward_clicked"
QT_MOC_LITERAL(7, 106, 24), // "on_pb_rotatePlus_clicked"
QT_MOC_LITERAL(8, 131, 25), // "on_pb_rotateMinus_clicked"
QT_MOC_LITERAL(9, 157, 21), // "on_pb_forward_pressed"
QT_MOC_LITERAL(10, 179, 24), // "on_pb_rotatePlus_pressed"
QT_MOC_LITERAL(11, 204, 25) // "on_pb_rotateMinus_pressed"

    },
    "ManualRemoteController\0finishCallback\0"
    "\0result\0on_pb_back_clicked\0"
    "on_pb_back_pressed\0on_pb_forward_clicked\0"
    "on_pb_rotatePlus_clicked\0"
    "on_pb_rotateMinus_clicked\0"
    "on_pb_forward_pressed\0on_pb_rotatePlus_pressed\0"
    "on_pb_rotateMinus_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManualRemoteController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ManualRemoteController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManualRemoteController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishCallback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pb_back_clicked(); break;
        case 2: _t->on_pb_back_pressed(); break;
        case 3: _t->on_pb_forward_clicked(); break;
        case 4: _t->on_pb_rotatePlus_clicked(); break;
        case 5: _t->on_pb_rotateMinus_clicked(); break;
        case 6: _t->on_pb_forward_pressed(); break;
        case 7: _t->on_pb_rotatePlus_pressed(); break;
        case 8: _t->on_pb_rotateMinus_pressed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ManualRemoteController::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ManualRemoteController.data,
    qt_meta_data_ManualRemoteController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ManualRemoteController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManualRemoteController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManualRemoteController.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ManualRemoteController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
