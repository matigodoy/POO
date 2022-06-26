/****************************************************************************
** Meta object code from reading C++ file 'datamanager.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Opcionables-master/datamanager.hpp"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datamanager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataManager_t {
    const uint offsetsAndSize[70];
    char stringdata0[402];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DataManager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DataManager_t qt_meta_stringdata_DataManager = {
    {
QT_MOC_LITERAL(0, 11), // "DataManager"
QT_MOC_LITERAL(12, 10), // "readyLogin"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 10), // "id_usuario"
QT_MOC_LITERAL(35, 7), // "usuario"
QT_MOC_LITERAL(43, 6), // "nombre"
QT_MOC_LITERAL(50, 8), // "apellido"
QT_MOC_LITERAL(59, 4), // "mail"
QT_MOC_LITERAL(64, 13), // "availableName"
QT_MOC_LITERAL(78, 9), // "available"
QT_MOC_LITERAL(88, 10), // "readyZones"
QT_MOC_LITERAL(99, 18), // "QList<QStringList>"
QT_MOC_LITERAL(118, 5), // "zones"
QT_MOC_LITERAL(124, 13), // "readyQuestion"
QT_MOC_LITERAL(138, 10), // "categoryId"
QT_MOC_LITERAL(149, 12), // "categoryName"
QT_MOC_LITERAL(162, 10), // "questionId"
QT_MOC_LITERAL(173, 12), // "questionText"
QT_MOC_LITERAL(186, 7), // "answers"
QT_MOC_LITERAL(194, 10), // "readyStats"
QT_MOC_LITERAL(205, 12), // "updatedScore"
QT_MOC_LITERAL(218, 7), // "ranking"
QT_MOC_LITERAL(226, 13), // "numberOfTeams"
QT_MOC_LITERAL(240, 14), // "readyDetection"
QT_MOC_LITERAL(255, 5), // "isNew"
QT_MOC_LITERAL(261, 11), // "readyAnswer"
QT_MOC_LITERAL(273, 7), // "correct"
QT_MOC_LITERAL(281, 21), // "signal_juegoTerminado"
QT_MOC_LITERAL(303, 13), // "responseLogin"
QT_MOC_LITERAL(317, 14), // "QNetworkReply*"
QT_MOC_LITERAL(332, 5), // "reply"
QT_MOC_LITERAL(338, 16), // "responseQuestion"
QT_MOC_LITERAL(355, 13), // "responseStats"
QT_MOC_LITERAL(369, 17), // "responseDetection"
QT_MOC_LITERAL(387, 14) // "responseAnswer"

    },
    "DataManager\0readyLogin\0\0id_usuario\0"
    "usuario\0nombre\0apellido\0mail\0availableName\0"
    "available\0readyZones\0QList<QStringList>\0"
    "zones\0readyQuestion\0categoryId\0"
    "categoryName\0questionId\0questionText\0"
    "answers\0readyStats\0updatedScore\0ranking\0"
    "numberOfTeams\0readyDetection\0isNew\0"
    "readyAnswer\0correct\0signal_juegoTerminado\0"
    "responseLogin\0QNetworkReply*\0reply\0"
    "responseQuestion\0responseStats\0"
    "responseDetection\0responseAnswer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataManager[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    5,   92,    2, 0x06,    0 /* Public */,
       8,    1,  103,    2, 0x06,    6 /* Public */,
      10,    1,  106,    2, 0x06,    8 /* Public */,
      13,    5,  109,    2, 0x06,   10 /* Public */,
      19,    3,  120,    2, 0x06,   16 /* Public */,
      23,    4,  127,    2, 0x06,   20 /* Public */,
      25,    4,  136,    2, 0x06,   25 /* Public */,
      27,    0,  145,    2, 0x06,   30 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      28,    1,  146,    2, 0x08,   31 /* Private */,
      31,    1,  149,    2, 0x08,   33 /* Private */,
      32,    1,  152,    2, 0x08,   35 /* Private */,
      33,    1,  155,    2, 0x08,   37 /* Private */,
      34,    1,  158,    2, 0x08,   39 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString, 0x80000000 | 11,   14,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   20,   21,   22,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   20,   21,   22,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,   26,   20,   21,   22,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,

       0        // eod
};

void DataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readyLogin((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: _t->availableName((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->readyZones((*reinterpret_cast< QList<QStringList>(*)>(_a[1]))); break;
        case 3: _t->readyQuestion((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QList<QStringList>(*)>(_a[5]))); break;
        case 4: _t->readyStats((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->readyDetection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->readyAnswer((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->signal_juegoTerminado(); break;
        case 8: _t->responseLogin((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->responseQuestion((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->responseStats((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->responseDetection((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->responseAnswer((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QStringList> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QStringList> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataManager::*)(QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::readyLogin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::availableName)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(QVector<QStringList> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::readyZones)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(int , QString , int , QString , QVector<QStringList> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::readyQuestion)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::readyStats)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(bool , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::readyDetection)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(bool , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::readyAnswer)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DataManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::signal_juegoTerminado)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject DataManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataManager.offsetsAndSize,
    qt_meta_data_DataManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DataManager_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QStringList>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QStringList>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>


>,
    nullptr
} };


const QMetaObject *DataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DataManager::readyLogin(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataManager::availableName(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataManager::readyZones(QVector<QStringList> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataManager::readyQuestion(int _t1, QString _t2, int _t3, QString _t4, QVector<QStringList> _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataManager::readyStats(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataManager::readyDetection(bool _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DataManager::readyAnswer(bool _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DataManager::signal_juegoTerminado()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
