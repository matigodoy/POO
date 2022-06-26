#include "datamanager.hpp"

#include <QRegularExpression>

DataManager *DataManager::instance = NULL;

DataManager::DataManager( QObject *parent ) :
    QObject( parent ),
    manager( new QNetworkAccessManager( this ) ),
    availableManager( true )
{

}

bool DataManager::doQuery( QVector< QStringList >params )
{
    if( !this->applyForManager() ) return false;

    QString query( "http://www.diagnosticocordoba4-0.com.ar/opcionables/opcionables.php?" );
    query.append( "key=0pcionables" );

    for( int i = 0; i < params.size(); i++ )
    {
        if( params.at( i ).size() < 2 )
        {
            continue;
        }
        query.append( "&" + params.at( i ).at( 0 ) + "=" + params.at( i ).at( 1 ) );
    }
    manager->get( QNetworkRequest( QUrl( query ) ) );
    return true;
}

DataManager *DataManager::getInstance()
{
    if( !instance )
    {
        instance = new DataManager();
    }
    return instance;
}

DataManager::~DataManager()
{
    delete instance;
}

bool DataManager::getAvailableManager() const
{
    return availableManager;
}

void DataManager::setAvailableManager( bool value )
{
    availableManager = value;
}

bool DataManager::applyForManager()
{
    if( !this->getAvailableManager() )
    {
        qDebug() << "El manager tiene una solicitud en curso";
        return false;
    }
    this->setAvailableManager( false );
    return true;
}

/**
 * @brief DataManager::leaveManager Desconecta todo lo que tenga conectado
 */
void DataManager::leaveManager()
{
    disconnect( manager, SIGNAL( finished( QNetworkReply* ) ), NULL, NULL );
    this->setAvailableManager( true );
}

bool DataManager::requestLogin( QString usuario,
                                QString celular )
{
    QVector< QStringList >params;
    params.append( QStringList() << "action" << "login" );
    params.append( QStringList() << "usuario" << usuario );
    params.append( QStringList() << "celular" << celular );

    if( ! this->doQuery( params ) ) return false;
    connect( manager, SIGNAL( finished( QNetworkReply* ) ), SLOT( responseLogin( QNetworkReply* ) ) );
    return true;
}





bool DataManager::requestZones()
{
    QVector< QStringList >params;
    params.append( QStringList() << "action" << "zones" );

    if( !this->doQuery( params ) ) return false;
    connect( manager, SIGNAL( finished( QNetworkReply* ) ), SLOT( responseZones( QNetworkReply* ) ) );
    return true;
}


bool DataManager::requestQuestion( QString id_usuario )
{
    QVector< QStringList >params;
    params.append( QStringList() << "action" << "question" );
    params.append( QStringList() << "id_usuario" <<  id_usuario );

    if( !this->doQuery( params ) ) return false;
    connect( manager, SIGNAL( finished( QNetworkReply* ) ), SLOT( responseQuestion( QNetworkReply* ) ) );
    return true;
}



bool DataManager::requestStats( int teamId )
{
    QVector< QStringList >params;
    params.append( QStringList() << "action" << "stats" );
    params.append( QStringList() << "teamId" << QString::number( teamId ) );

    if( !this->doQuery( params ) ) return false;
    connect( manager, SIGNAL( finished( QNetworkReply* ) ), SLOT( responseStats( QNetworkReply* ) ) );
    return true;
}

bool DataManager::requestDetection( int teamId, int markerId )
{
    QVector< QStringList >params;
    params.append( QStringList() << "action" << "detection" );
    params.append( QStringList() << "teamId" << QString::number( teamId ) );
    params.append( QStringList() << "markerId" << QString::number( markerId ) );

    if( !this->doQuery( params ) ) return false;
    connect( manager, SIGNAL( finished( QNetworkReply* ) ), SLOT( responseDetection( QNetworkReply* ) ) );
    return true;
}


bool DataManager::requestAnswer( QString id_usuario, int categoryId, int questionId, int answerId )
{

    QVector< QStringList >params;
    params.append( QStringList() << "action" << "answer" );
    params.append( QStringList() << "id_usuario" << id_usuario );
    params.append( QStringList() << "categoryId" << QString::number( categoryId ) );
    params.append( QStringList() << "questionId" << QString::number( questionId ) );
    params.append( QStringList() << "answerId" << QString::number( answerId ) );

    if( !this->doQuery( params ) ) return false;
    connect( manager, SIGNAL( finished( QNetworkReply* ) ), SLOT( responseAnswer( QNetworkReply* ) ) );

    return true;
}

void DataManager::responseLogin( QNetworkReply *reply )
{
    if( !reply->bytesAvailable() )  {
        qDebug() << "void DataManager::responseLogin( QNetworkReply *reply ) showErrorAndFinish";
    }

    this->leaveManager();

    QString replyString( QString::fromLatin1( reply->readAll() ) );

    qDebug() << replyString;

    if( replyString.isEmpty() )
    {
        qDebug() << "Error, algun error al guardar u obtener los datos del servidor 1";
        return;
    }

    if( replyString == "n" )
    {
        emit readyLogin( "", "", "", "", "" );  // Devuelve todo vacio cuando no se logueo con exito
    }
    else
    {
        QStringList results( replyString.split( "||" ) );

        // El login devuelve id_usuario, usuario, nombre, apellido, mail
        if( results.size() != 5 ||
            results.contains( "Database Error", Qt::CaseInsensitive ) )
        {
            qDebug() << "Error, algun error al guardar u obtener los datos del servidor 2";
            emit readyLogin( "", "", "", "", "" );
            return;
        }

        emit readyLogin( results.at( 0 ),
                         results.at( 1 ),
                         results.at( 2 ),
                         results.at( 3 ),
                         results.at( 4 ) );

    }
}



void DataManager::responseQuestion( QNetworkReply *reply )
{
    if( !reply->bytesAvailable() ) qDebug() << "this->showErrorAndFinish();";

    this->leaveManager();

    QString replyString( QString::fromLatin1( reply->readAll() ) );

    qDebug() << "DataManager::responseQuestion" << replyString;

    replyString.replace("\u0094", "\"");
    replyString.replace("\u0093", "\"");


    if( replyString.contains( "juego_terminado" ) )
    {
        qDebug() << "Este equipo completo todas las preguntas";
        qDebug() << "De todos modos, puede seguir buscando marcadores";

        emit signal_juegoTerminado();

        return;
    }

    QStringList data( replyString.split( "||" ) );
    data.removeLast();

    if( data.isEmpty() ||
        data.size() < 4 ||
        ( data.size() - 4 ) % 2 != 0 ||
        data.contains( "Database Error", Qt::CaseInsensitive ) )
    {
        qDebug() << "Error, algun error al obtener los datos del servidor 3";
        return;
    }

    QVector< QStringList > answers;
    for( int i = 4; i < data.size(); i += 2 )
    {
        answers.append( QStringList() << data.at( i ) << data.at( i + 1 ) );
    }
    emit readyQuestion( data.at( 0 ).toInt(),
                        data.at( 1 ),
                        data.at( 2 ).toInt(),
                        data.at( 3 ),
                        answers );
}

void DataManager::responseStats( QNetworkReply *reply )
{
    if( !reply->bytesAvailable() ) qDebug() << "this->showErrorAndFinish();";

    this->leaveManager();

    QString replyString( QString::fromLatin1( reply->readAll() ) );


    QStringList results( replyString.split( "||" ) );

    if( results.size() != 3 ||
        results.contains( "Database Error", Qt::CaseInsensitive ) )
    {
        qDebug() << "Error, algun error al obtener los datos del servidor 4";
        return;
    }

    emit readyStats( results.at( 0 ).toInt(),
                     results.at( 1 ).toInt(),
                     results.at( 2 ).toInt() );
}

void DataManager::responseDetection( QNetworkReply *reply )
{
    if( !reply->bytesAvailable() )  {
        qDebug() << "this->showErrorAndFinish();";
    }

    this->leaveManager();

    QString replyString( QString::fromLatin1( reply->readAll() ) );


    QStringList results( replyString.split( "||" ) );

    if( results.size() != 4 ||
        results.contains( "Database Error", Qt::CaseInsensitive ) )
    {
        qDebug() << "Error, algun error al guardar u obtener los datos del servidor 5";
        return;
    }

    emit readyDetection( results.at( 0 ) == "s" ?  true : false,
                         results.at( 1 ).toInt(),
                         results.at( 2 ).toInt(),
                         results.at( 3 ).toInt() );
}

void DataManager::responseAnswer( QNetworkReply *reply )
{
    if( !reply->bytesAvailable() ) qDebug() << "this->showErrorAndFinish();";

    this->leaveManager();

    QString replyString( QString::fromLatin1( reply->readAll() ) );

    qDebug() << replyString;


    QStringList results( replyString.split( "||" ) );

    qDebug() << results;

    if( results.size() != 4 ||
        results.contains( "Database Error", Qt::CaseInsensitive ) )
    {
        qDebug() << "Error, algun error al guardar u obtener los datos del servidor 6";
        return;
    }

    emit readyAnswer( results.at( 0 ) == "s" ?  true : false,
                      results.at( 1 ).toInt(),
                      results.at( 2 ).toInt(),
                      results.at( 3 ).toInt() );
}
