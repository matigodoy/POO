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
    ui->leUsuario->setFocus();

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
    consulta.append("CREATE TABLE IF NOT EXISTS usuarios ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "usuario VARCHAR(100),"
                    "clave INTEGER NOT NULL,"
                    "nombre VARCHAR(100), "
                    "apellido VARCHAR(100),"
                    "mail VARCHAR(100)"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);

    if(crear.exec())
    {
        qDebug() << "Tabla usuarios existe o se ha creado con exito ... ";
    }else
    {
        qDebug() << "ERROR! " << crear.lastError();
    }

}

void Ventana::IUser()
{
    QString claveMd5 = QCryptographicHash::hash( ui->leClave->text().toUtf8(), QCryptographicHash::Md5 ).toHex();

    QString consulta;
    consulta.append("INSERT INTO usuarios (usuario,clave,nombre,apellido,mail) VALUES('"+ui->leUsuario->text()+"','"+claveMd5+"','"+ui->leNombre->text()+"','"+ui->leApellido->text()+"','"+ui->leMail->text()+"')");
    QSqlQuery insertar;
    insertar.prepare(consulta);

    if(insertar.exec())
    {
        qDebug() << "EL USUARIO se ha insertado con exito ... ";
    }else
    {
        qDebug() << "El USUARIO no se ha insertado ...";
        qDebug() << "ERROR! " << insertar.lastError();
    }
}

void Ventana::EUser()
{
    QString consulta;
    consulta.append("DELETE FROM usuarios WHERE usuario='"+ui->leUsuario->text()+"'" );
    QSqlQuery eliminar;
    eliminar.prepare(consulta);

    if(eliminar.exec())
    {
        qDebug() << ui->leUsuario->text()+ " se ha eliminado con exito ... ";
    }else
    {
        qDebug() << ui->leUsuario->text()+ " no se ha eliminado ...";
        qDebug() << "ERROR! " << eliminar.lastError();
    }
}

void Ventana::MD()
{

    QString consulta;
    consulta.append("SELECT * FROM usuarios");

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
        ui->tDatos->setItem(fila,2,new QTableWidgetItem(mostrar.value(3).toByteArray().constData()));
        ui->tDatos->setItem(fila,3,new QTableWidgetItem(mostrar.value(4).toByteArray().constData()));
        ui->tDatos->setItem(fila,4,new QTableWidgetItem(mostrar.value(5).toByteArray().constData()));
        fila ++;
    }
}


void Ventana::on_pbAgregar_clicked()
{
    if( ui->leUsuario->text().isEmpty() == true  ||
            ui->leClave->text().isEmpty() == true ||
            ui->leNombre->text().isEmpty() == true ||
            ui->leApellido->text().isEmpty() == true ||
            ui->leMail->text().isEmpty() == true )
    {
        QMessageBox::critical( this, "Error", "Debes ingresar todos los campos primero." );
    }else{
        IUser();
        MD();
        borrarTodo();
    }
}

void Ventana::on_pbEliminar_clicked()
{
    if( ui->leUsuario->text().isEmpty() == true ){
        QMessageBox::critical( this, "Error", "Debes ingresar un usuario a borrar." );
    }else{
        EUser();
        MD();
        borrarTodo();
    }
}

void Ventana::borrarTodo(){
    ui->leUsuario->clear();
    ui->leClave->clear();
    ui->leNombre->clear();
    ui->leApellido->clear();
    ui->leMail->clear();
}


