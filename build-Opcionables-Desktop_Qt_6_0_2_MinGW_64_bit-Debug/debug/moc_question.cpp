/****************************************************************************
** Meta object code from reading C++ file 'question.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Opcionables-master/question.hpp"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'question.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Question_t {
    const uint offsetsAndSize[56];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Question_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Question_t qt_meta_stringdata_Question = {
    {
QT_MOC_LITERAL(0, 8), // "Question"
QT_MOC_LITERAL(9, 12), // "activateGame"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 16), // "questionFinished"
QT_MOC_LITERAL(40, 12), // "updatedScore"
QT_MOC_LITERAL(53, 7), // "ranking"
QT_MOC_LITERAL(61, 13), // "numberOfTeams"
QT_MOC_LITERAL(75, 18), // "answerTimerTimeout"
QT_MOC_LITERAL(94, 18), // "resultTimerTimeout"
QT_MOC_LITERAL(113, 13), // "answerPressed"
QT_MOC_LITERAL(127, 5), // "index"
QT_MOC_LITERAL(133, 10), // "showAnswer"
QT_MOC_LITERAL(144, 7), // "correct"
QT_MOC_LITERAL(152, 12), // "showQuestion"
QT_MOC_LITERAL(165, 10), // "categoryId"
QT_MOC_LITERAL(176, 12), // "categoryName"
QT_MOC_LITERAL(189, 10), // "questionId"
QT_MOC_LITERAL(200, 12), // "questionText"
QT_MOC_LITERAL(213, 18), // "QList<QStringList>"
QT_MOC_LITERAL(232, 7), // "answers"
QT_MOC_LITERAL(240, 7), // "newGoal"
QT_MOC_LITERAL(248, 19), // "slot_juegoTerminado"
QT_MOC_LITERAL(268, 27), // "slot_actualizarDatosUsuario"
QT_MOC_LITERAL(296, 10), // "id_usuario"
QT_MOC_LITERAL(307, 7), // "usuario"
QT_MOC_LITERAL(315, 6), // "nombre"
QT_MOC_LITERAL(322, 8), // "apellido"
QT_MOC_LITERAL(331, 4) // "mail"

    },
    "Question\0activateGame\0\0questionFinished\0"
    "updatedScore\0ranking\0numberOfTeams\0"
    "answerTimerTimeout\0resultTimerTimeout\0"
    "answerPressed\0index\0showAnswer\0correct\0"
    "showQuestion\0categoryId\0categoryName\0"
    "questionId\0questionText\0QList<QStringList>\0"
    "answers\0newGoal\0slot_juegoTerminado\0"
    "slot_actualizarDatosUsuario\0id_usuario\0"
    "usuario\0nombre\0apellido\0mail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Question[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    0 /* Public */,
       3,    3,   75,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   82,    2, 0x08,    5 /* Private */,
       8,    0,   83,    2, 0x08,    6 /* Private */,
       9,    1,   84,    2, 0x08,    7 /* Private */,
      11,    4,   87,    2, 0x08,    9 /* Private */,
      13,    5,   96,    2, 0x08,   14 /* Private */,
      20,    3,  107,    2, 0x08,   20 /* Private */,
      21,    0,  114,    2, 0x08,   24 /* Private */,
      22,    5,  115,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString, 0x80000000 | 18,   14,   15,   16,   17,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   24,   25,   26,   27,

       0        // eod
};

void Question::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Question *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activateGame(); break;
        case 1: _t->questionFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->answerTimerTimeout(); break;
        case 3: _t->resultTimerTimeout(); break;
        case 4: _t->answerPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showAnswer((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->showQuestion((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QList<QStringList>(*)>(_a[5]))); break;
        case 7: _t->newGoal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->slot_juegoTerminado(); break;
        case 9: _t->slot_actualizarDatosUsuario((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QStringList> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Question::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Question::activateGame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Question::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Question::questionFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Question::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Question.offsetsAndSize,
    qt_meta_data_Question,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Question_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QStringList>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *Question::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Question::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Question.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Question::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Question::activateGame()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Question::questionFinished(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
