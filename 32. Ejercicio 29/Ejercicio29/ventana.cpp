#include "ventana.h"
#include "ui_ventana.h"

#include <QDebug>
#include <QtSql/QSqlError>
#include <QCryptographicHash>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>

Ventana::Ventana( QWidget * parent ) : QWidget( parent ),
                                       ui( new Ui::Ventana )
{
    ui->setupUi(this);


    qDebug() << "Aplicación Iniciada... ";

    QString nombre;
    nombre.append("../db/db_usuarios.sqlite");

    db2 = QSqlDatabase::addDatabase("QSQLITE");
    db2.setDatabaseName(nombre);

    if(db2.open()){
            qDebug() << "Conexión exitosa con la base de datos... ";

    }else{
            qDebug() << "ERROR! No se ha conectado la base de datos ";
    }
    CTU();
    MD();


}

QSqlDatabase Ventana::getDB()  {
    return db2;
}


Ventana::~Ventana()
{
    delete ui;
}

void Ventana::CTU()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS logs ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "error VARCHAR(100)"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);

    if(crear.exec())
    {
        qDebug() << "Tabla logs existe o se ha creado con exito ... ";
    }else
    {
        qDebug() << "ERROR! " << crear.lastError();
    }

}


void Ventana::MD()
{

    QString consulta;
    consulta.append("SELECT * FROM logs");

    QSqlQuery mostrar;
    mostrar.prepare(consulta);

    if(mostrar.exec())
    {
        qDebug() << "La tabla DATABSE se ha mostrado con exito ... ";
    }else
    {
        qDebug() << "ERROR! " << mostrar.lastError();
    }

    int fila = 0;
    ui->tDatos->setRowCount(0);

    while(mostrar.next()){

        ui->tDatos->insertRow(fila);
        ui->tDatos->setItem(fila,0,new QTableWidgetItem(mostrar.value(1).toByteArray().constData()));
        ui->tDatos->setItem(fila,1,new QTableWidgetItem(mostrar.value(2).toByteArray().constData()));
        fila ++;
    }
}




