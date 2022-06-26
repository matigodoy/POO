#include "ventana.h"
#include "ui_ventana.h"

#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>

Ventana::Ventana( QWidget * parent ) : QWidget( parent ),
                                       ui( new Ui::Ventana ),
                                       adminDB( new AdminDB( this ) )
{
    ui->setupUi(this);

    connect( ui->pbConectar, SIGNAL( pressed() ), this, SLOT( slot_conectarDB() ) );
    connect( ui->pbEjecutar, SIGNAL( pressed() ), this, SLOT( slot_ejecutarSQL() ) );
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::slot_conectarDB()  {

    bool exito = adminDB->conectar( ui->leArchivoDB->text() );

    if ( exito )  {
        qDebug() << "Exito";
        QMessageBox::information( this, "Momento de informacion",
                                  "Usted esta conectado a la base" );
        ui->pbEjecutar->setEnabled( true );
    }
    else  {
        qDebug() << "No exito";
        QMessageBox::critical( this, "Momento critico",
                               "Estas solo/a en esta" );
    }

}

void Ventana::slot_ejecutarSQL()  {

    QSqlQuery query = adminDB->getDB().exec( ui->leComandoSQL->text() );

    int contador = 0;

    while ( query.next() )  {
        QSqlRecord registro = query.record();

        qDebug() << "\nRegistro nro. " << QString::number( contador ) << ": ";

        QString linea = "Registro nro. " + QString::number( contador ) + ": ";


        for ( int i = 0 ; i < registro.count() ; i++ )  {
            qDebug() << registro.value( i ).toString();
            linea.append( registro.value( i ).toString() );
        }

        ui->te->append( linea );

        contador++;
    }
}

