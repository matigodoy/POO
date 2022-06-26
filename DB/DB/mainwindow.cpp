#include <QDebug>
#include <QtSql/QSqlError>
#include <QCryptographicHash>

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    qDebug() << "Aplicación Iniciada... ";

    QString nombre;
    nombre.append("../DATABASE/DataBase.sqlite");

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(nombre);

    if(db.open()){
            qDebug() << "Conexión exitosa con la base de datos... ";

    }else{
            qDebug() << "ERROR! No se ha conectado la base de datos ";
    }
    CTU();
    MD();

}

QSqlDatabase MainWindow::getDB()  {
    return db;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CTU()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS DATABASE ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "nombre VARCHAR(100), "
                    "apellido VARCHAR(100),"
                    "edad INTEGER NOT NULL,"
                    "clave INTEGER NOT NULL"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);

    if(crear.exec())
    {
        qDebug() << "Tabla DATABASE existe o se ha creado con exito ... ";
    }else
    {
        qDebug() << "ERROR! " << crear.lastError();
    }

}

void MainWindow::IUser()
{
    QString claveMd5 = QCryptographicHash::hash( ui->leClave->text().toUtf8(), QCryptographicHash::Md5 ).toHex();

    QString consulta;
    consulta.append("INSERT INTO DATABASE (nombre,apellido,edad,clave) VALUES('"+ui->leNombre->text()+"','"+ui->leApellido->text()+"','"+ui->leEdad->text()+"','"+claveMd5+"')");
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

void MainWindow::EUser()
{
    QString claveMd5 = QCryptographicHash::hash( ui->leClave->text().toUtf8(), QCryptographicHash::Md5 ).toHex();

    QString consulta;
    consulta.append("DELETE FROM DATABASE ( nombre, apellido, edad, clave) VALUES('"+ui->leNombre->text()+"','"+ui->leApellido->text()+"','"+ui->leEdad->text()+"','"+claveMd5+"')");
    QSqlQuery eliminar;
    eliminar.prepare(consulta);

    if(eliminar.exec())
    {
        qDebug() << "EL USUARIO se ha eliminado con exito ... ";
    }else
    {
        qDebug() << "El USUARIO no se ha eliminado ...";
        qDebug() << "ERROR! " << eliminar.lastError();
    }
}

void MainWindow::MD()
{

    QString consulta;
    consulta.append("SELECT * FROM DATABASE");

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
        fila ++;
    }
}


void MainWindow::on_pbAgregar_clicked()
{
    IUser();
    MD();
}

void MainWindow::on_pbEliminar_clicked()
{
    EUser();
}
