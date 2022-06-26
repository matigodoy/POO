#ifndef DATAMANAGER_HPP
#define DATAMANAGER_HPP

#include <QObject>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QVector>
#include <QStringList>

class DataManager : public QObject {

    Q_OBJECT

private:
    static DataManager *instance;
    explicit DataManager( QObject *parent = NULL );

    QNetworkAccessManager *manager;
    bool availableManager;

    bool checkManager();
    bool doQuery( QVector< QStringList > params );
public:
    static DataManager *getInstance();
    ~DataManager();

    bool getAvailableManager() const;
    void setAvailableManager( bool value );
    bool applyForManager();
    void leaveManager();

    bool requestLogin( QString teamName,
                       QString celular );

    bool requestZones();
    bool requestQuestion(QString id_usuario  );
    bool requestStats( int teamId );
    bool requestDetection( int teamId, int markerId );
    bool requestAnswer( QString id_usuario, int categoryId, int questionId, int answerId );


private slots:
    void responseLogin( QNetworkReply *reply );
    void responseQuestion( QNetworkReply *reply );
    void responseStats( QNetworkReply *reply );
    void responseDetection( QNetworkReply *reply );
    void responseAnswer( QNetworkReply *reply );

signals:
    void readyLogin( QString id_usuario, QString usuario, QString nombre, QString apellido, QString mail );
    void availableName( bool available );

    void readyZones( QVector< QStringList > zones );
    void readyQuestion( int categoryId, QString categoryName, int questionId, QString questionText, QVector< QStringList > answers );
    void readyStats( int updatedScore, int ranking, int numberOfTeams );
    void readyDetection( bool isNew, int updatedScore, int ranking, int numberOfTeams );
    void readyAnswer( bool correct, int updatedScore, int ranking, int numberOfTeams );

    void signal_juegoTerminado();
};


#endif // DATAMANAGER_HPP
