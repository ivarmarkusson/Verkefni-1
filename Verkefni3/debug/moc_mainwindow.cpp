/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[440];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 27), // "openDisplayScientistsWindow"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "openDisplayComputersWindow"
QT_MOC_LITERAL(4, 67, 26), // "openSearchScientistsWindow"
QT_MOC_LITERAL(5, 94, 25), // "openSearchComputersWindow"
QT_MOC_LITERAL(6, 120, 24), // "openEditScientistsWindow"
QT_MOC_LITERAL(7, 145, 23), // "openEditComputersWindow"
QT_MOC_LITERAL(8, 169, 21), // "openConnectionsWindow"
QT_MOC_LITERAL(9, 191, 37), // "onDisplayScientistsMenu_butto..."
QT_MOC_LITERAL(10, 229, 36), // "onDisplayComputersMenu_button..."
QT_MOC_LITERAL(11, 266, 36), // "onSearchScientistsMenu_button..."
QT_MOC_LITERAL(12, 303, 35), // "onSearchComputersMenu_buttonC..."
QT_MOC_LITERAL(13, 339, 34), // "onEditScientistsMenu_buttonCl..."
QT_MOC_LITERAL(14, 374, 33), // "onEditComputersMenu_buttonCli..."
QT_MOC_LITERAL(15, 408, 31) // "onConnectionsMenu_buttonClicked"

    },
    "MainWindow\0openDisplayScientistsWindow\0"
    "\0openDisplayComputersWindow\0"
    "openSearchScientistsWindow\0"
    "openSearchComputersWindow\0"
    "openEditScientistsWindow\0"
    "openEditComputersWindow\0openConnectionsWindow\0"
    "onDisplayScientistsMenu_buttonClicked\0"
    "onDisplayComputersMenu_buttonClicked\0"
    "onSearchScientistsMenu_buttonClicked\0"
    "onSearchComputersMenu_buttonClicked\0"
    "onEditScientistsMenu_buttonClicked\0"
    "onEditComputersMenu_buttonClicked\0"
    "onConnectionsMenu_buttonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openDisplayScientistsWindow(); break;
        case 1: _t->openDisplayComputersWindow(); break;
        case 2: _t->openSearchScientistsWindow(); break;
        case 3: _t->openSearchComputersWindow(); break;
        case 4: _t->openEditScientistsWindow(); break;
        case 5: _t->openEditComputersWindow(); break;
        case 6: _t->openConnectionsWindow(); break;
        case 7: _t->onDisplayScientistsMenu_buttonClicked(); break;
        case 8: _t->onDisplayComputersMenu_buttonClicked(); break;
        case 9: _t->onSearchScientistsMenu_buttonClicked(); break;
        case 10: _t->onSearchComputersMenu_buttonClicked(); break;
        case 11: _t->onEditScientistsMenu_buttonClicked(); break;
        case 12: _t->onEditComputersMenu_buttonClicked(); break;
        case 13: _t->onConnectionsMenu_buttonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
