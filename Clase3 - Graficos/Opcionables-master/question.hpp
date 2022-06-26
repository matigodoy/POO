#ifndef QUESTION_HPP
#define QUESTION_HPP

#include <QWidget>
#include <QPushButton>
#include <QTimer>

#include "datamanager.hpp"
#include "indexedbutton.hpp"
//#include "common.hpp"

namespace Ui
{
    class Question;
}

class Question : public QWidget
{
    Q_OBJECT

private:
    Ui::Question *ui;


    int answerTimerCounter;
    QTimer *answerTimer;
    QTimer *resultTimer;

    int teamId;
    int currentQuestionCategoryId;
    int currentQuestionId;

    QString id_usuario, usuario;

public:
    explicit Question( QWidget *parent = NULL );
    ~Question();

    int getTeamId() const;
    void setTeamId(int value);

    int getCurrentQuestionCategoryId() const;
    void setCurrentQuestionCategoryId( int value );

    int getCurrentQuestionId() const;
    void setCurrentQuestionId( int value );

    int getAnswerTimerCounter() const;
    void setAnswerTimerCounter( int value );

    void initQuestion( QString questionText,
                       QVector< QStringList > answers,
                       int teamId,
                       int categoryId,
                       QString categoryName,
                       int questionId );

    void clearScrollArea();
    void initTimer();

private slots:
    void answerTimerTimeout();
    void resultTimerTimeout();
    void answerPressed( int index );
    void showAnswer( bool correct, int updatedScore, int ranking, int numberOfTeams );

    void showQuestion(int categoryId, QString categoryName, int questionId, QString questionText, QVector<QStringList> answers);

    void newGoal(int updatedScore, int ranking, int numberOfTeams);

    void slot_juegoTerminado();

signals:
    void activateGame();
    void questionFinished( int updatedScore, int ranking, int numberOfTeams );

public slots:
    void slot_actualizarDatosUsuario(QString id_usuario, QString usuario,
                                     QString nombre, QString apellido, QString mail );
};

#endif // QUESTION_HPP
