/****************************************************************************
** Meta object code from reading C++ file 'gasblender.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gasblender.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gasblender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GasBlender[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      32,   28,   11,   11, 0x08,
      48,   28,   11,   11, 0x08,
      65,   11,   11,   11, 0x08,
      86,   11,   11,   11, 0x08,
     105,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     145,   11,   11,   11, 0x08,
     165,   11,   11,   11, 0x08,
     183,   11,   11,   11, 0x08,
     191,   11,   11,   11, 0x08,
     203,   11,   11,   11, 0x08,
     213,   11,   11,   11, 0x08,
     221,   11,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,
     245,   11,   11,   11, 0x08,
     254,   11,   11,   11, 0x08,
     270,   11,   11,   11, 0x08,
     291,   11,   11,   11, 0x08,
     310,   11,   11,   11, 0x08,
     331,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GasBlender[] = {
    "GasBlender\0\0change(QString)\0idx\0"
    "setInitMix(int)\0setFinalMix(int)\0"
    "setHeiSlider(double)\0setHeiSpinBox(int)\0"
    "setO2iSlider(double)\0setO2iSpinBox(int)\0"
    "changedInit(double)\0changedFinal(int)\0"
    "about()\0calculate()\0bestmix()\0costs()\0"
    "modified(int)\0newFile()\0manual()\0"
    "documentation()\0setMaxO2Init(double)\0"
    "setMaxO2Final(int)\0setMaxHeInit(double)\0"
    "setMaxHeFinal(int)\0"
};

void GasBlender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GasBlender *_t = static_cast<GasBlender *>(_o);
        switch (_id) {
        case 0: _t->change((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setInitMix((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setFinalMix((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setHeiSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setHeiSpinBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setO2iSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setO2iSpinBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->changedInit((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->changedFinal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->about(); break;
        case 10: _t->calculate(); break;
        case 11: _t->bestmix(); break;
        case 12: _t->costs(); break;
        case 13: _t->modified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->newFile(); break;
        case 15: _t->manual(); break;
        case 16: _t->documentation(); break;
        case 17: _t->setMaxO2Init((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->setMaxO2Final((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setMaxHeInit((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->setMaxHeFinal((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GasBlender::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GasBlender::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GasBlender,
      qt_meta_data_GasBlender, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GasBlender::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GasBlender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GasBlender::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GasBlender))
        return static_cast<void*>(const_cast< GasBlender*>(this));
    if (!strcmp(_clname, "Ui::GasBlender"))
        return static_cast< Ui::GasBlender*>(const_cast< GasBlender*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GasBlender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
