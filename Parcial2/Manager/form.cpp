#include "form.h"
#include "ui_form.h"
#include <QDebug>
#include <QtSql/QSqlError>
#include <QCryptographicHash>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <login.h>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    connect( ui->lAlta, SIGNAL(signal_click()), this, SLOT(darAlta()) );
}

Form::~Form()
{
    delete ui;
}

void Form::IUser()
{
    QString claveMd5 = QCryptographicHash::hash( ui->leClave->text().toUtf8(), QCryptographicHash::Md5 ).toHex();

    QString consulta;
    consulta.append("INSERT INTO personas (nombre,apellido,usuario,clave,legajo) VALUES('"+ui->leNombre->text()+"','"+ui->leApellido->text()+"','"+ui->leUsuario->text()+"','"+claveMd5+"','" "')");
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

void Form::borrarTodo()
{
    ui->leUsuario->clear();
    ui->leClave->clear();
    ui->leNombre->clear();
    ui->leApellido->clear();
}

void Form::darAlta()
{
    if( ui->leUsuario->text().isEmpty() == true  ||
            ui->leClave->text().isEmpty() == true ||
            ui->leNombre->text().isEmpty() == true ||
            ui->leApellido->text().isEmpty() == true ||
            ui->leUsuario->text().isEmpty() == true )
    {
        QMessageBox::critical( this, "Error", "Debes ingresar todos los campos primero." );
    }else{
        IUser();
        borrarTodo();
    }
}

