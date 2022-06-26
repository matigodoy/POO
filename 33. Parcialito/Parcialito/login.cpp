#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>

Ingreso::Ingreso(QWidget *parent) : QWidget(parent), ui(new Ui::Login), adminDB(new AdminDB)
{
    ui->setupUi(this);

    adminDB->conectar( "../db/db_usuarios.sqlite" );

    connect(ui->leClave, SIGNAL(returnPressed()), this, SLOT(slot_validar()));
    connect(ui->pbLabel, SIGNAL(signal_click()), this, SLOT(slot_validar()));

    adminDB->mostrarTabla( "usuarios" );
    ui->leUsuario->setFocus();
}

Ingreso::~Ingreso()
{
    delete ui;
}

void Ingreso::slot_validar()  {

    QStringList nombre_apellido = this->adminDB->validarUsuario( "usuarios", ui->leUsuario->text(), ui->leClave->text() );

    if ( ! nombre_apellido.isEmpty() )  {
        QMessageBox::information( this, "Conexión exitosa", "Válido" );
        this->hide();
        emit signal_usuario( ui->leUsuario->text() );
    }
    else  {
        QMessageBox::critical( this, "Sin permisos", "Usuario inválido" );
        ui->leUsuario->clear();
        ui->leClave->clear();
    }
}
