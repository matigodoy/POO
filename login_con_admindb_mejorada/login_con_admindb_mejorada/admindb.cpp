#include "admindb.h"
#include <QCryptographicHash>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QVariant>

AdminDB::AdminDB( QObject * parent ) : QObject( parent )  {
    db = QSqlDatabase::addDatabase( "QSQLITE" );
}

bool AdminDB::conectar( QString archivoSqlite )  {
    db.setDatabaseName( archivoSqlite );

    if( db.open() )
        return true;

    return false;
}

QSqlDatabase AdminDB::getDB()  {
    return db;
}

/**
 * Si el usuario y clave son crrectas, este metodo devuelve el nombre y
 * apellido en un QStringList.
 */
QStringList AdminDB::validarUsuario( QString tabla, QString usuario, QString clave )  {

    QStringList datosPersonales;

    if ( ! db.isOpen() )
        return datosPersonales;

    QSqlQuery * query = new QSqlQuery( db );
    QString claveMd5 = QCryptographicHash::hash( clave.toUtf8(), QCryptographicHash::Md5 ).toHex();

    query->exec( "SELECT id, nombre, apellido FROM " +
                 tabla + " WHERE usuario = '" + usuario +
                 "' AND clave = '" + claveMd5 + "'" );

    while( query->next() )  {
        QSqlRecord registro = query->record();

        datosPersonales << registro.value( registro.indexOf( "nombre" ) ).toString();
        datosPersonales.append( registro.value( registro.indexOf( "apellido" ) ).toString() );
    }

    return datosPersonales;
}

void AdminDB::mostrarTabla( QString tabla )  {
    if ( this->isConnected() )  {
        QSqlQuery query( db );
        bool exito = query.exec( "SELECT * FROM " + tabla );

        if ( ! exito )
            qDebug() << "La consulta no trajo registros";

        while( query.next() )  {
            QSqlRecord registro = query.record();  // Devuelve un objeto que maneja un registro (linea, row)
            int campos = registro.count();  // Devuleve la cantidad de campos de este registro

            QString informacion;  // En este QString se va armando la cadena para mostrar cada registro
            for ( int i = 0 ; i < campos ; i++ )  {
                informacion += registro.fieldName( i ) + ":";  // Devuelve el nombre del campo
                informacion += registro.value( i ).toString() + " - ";
            }
            qDebug() << informacion;
        }
    }
    else
        qDebug() << "No se encuentra conectado a la base";
}

bool AdminDB::isConnected()  {
    return db.isOpen();
}






