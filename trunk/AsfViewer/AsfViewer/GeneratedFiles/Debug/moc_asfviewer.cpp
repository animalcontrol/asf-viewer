/****************************************************************************
** Meta object code from reading C++ file 'asfviewer.h'
**
** Created: Fri Nov 25 19:40:07 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../asfviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asfviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AsfViewer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      18,   10,   10,   10, 0x08,
      27,   10,   10,   10, 0x08,
      37,   10,   10,   10, 0x08,
      50,   10,   10,   10, 0x08,
      64,   10,   10,   10, 0x08,
      72,   10,   10,   10, 0x08,
      92,   10,   10,   10, 0x08,
     109,   10,   10,   10, 0x08,
     125,   10,   10,   10, 0x08,
     141,   10,   10,   10, 0x08,
     157,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AsfViewer[] = {
    "AsfViewer\0\0open()\0zoomIn()\0zoomOut()\0"
    "normalSize()\0fitToWindow()\0about()\0"
    "numberEditChanged()\0goToFirstFrame()\0"
    "goToPrevFrame()\0goToNextFrame()\0"
    "goToLastFrame()\0autoPlayFrames()\0"
};

const QMetaObject AsfViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AsfViewer,
      qt_meta_data_AsfViewer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AsfViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AsfViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AsfViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AsfViewer))
        return static_cast<void*>(const_cast< AsfViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AsfViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: open(); break;
        case 1: zoomIn(); break;
        case 2: zoomOut(); break;
        case 3: normalSize(); break;
        case 4: fitToWindow(); break;
        case 5: about(); break;
        case 6: numberEditChanged(); break;
        case 7: goToFirstFrame(); break;
        case 8: goToPrevFrame(); break;
        case 9: goToNextFrame(); break;
        case 10: goToLastFrame(); break;
        case 11: autoPlayFrames(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
