#include "login.h"
#include "ui_login.h"
#include <QTimer>
#include <milabel.h>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QFileDialog>
#include <QPainter>

Ingreso::Ingreso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login),
    adminDB(new AdminDB),
    timer(new QTimer( this ))
{
    ui->setupUi(this);

    QImage image(QFileDialog::getOpenFileName( this, "Abrir", "../", "Imagen (*.png *.jpg)" ));
        this->imagen = image;

    connect( ui->lClave, SIGNAL( signal_click() ), this, SLOT( slot_ponerAsteriscos() ));

    adminDB->conectar( "../db/db.sqlite" );

    connect(ui->pbIngresar, SIGNAL(pressed()), this, SLOT(slot_validar()));

    ui->leUsuario->setFocus();

}

Ingreso::~Ingreso()
{
    delete ui;
}

void Ingreso::ocultarClave()
{
    ui->leClave->setEchoMode(QLineEdit::Password);
    qDebug() << "Contraseña ocultada";
}

void Ingreso::slot_validar()
{
    QStringList nombre_apellido = this->adminDB->validarUsuario( "personas", ui->leUsuario->text(), ui->leClave->text() );

    if ( ! nombre_apellido.isEmpty() )  {
        QMessageBox::information( this, "Conexión exitosa", "Válido" );
        this->hide();
        emit signal_usuarioLogueado();
    }
    else  {
        QMessageBox::critical( this, "Sin permisos", "Usuario inválido" );
        ui->leUsuario->clear();
        ui->leClave->clear();
    }

}

void Ingreso::slot_ponerAsteriscos()
{
    ui->leClave->setEchoMode(QLineEdit::Normal);
    qDebug() << "Mostrando contraseña";
    QTimer::singleShot(5000, this, SLOT(ocultarClave()));
}

void Ingreso::paintEvent(QPaintEvent *)
{
    QPainter painter( this );

    if ( ! imagen.isNull() )
        painter.drawImage( 0, 0, imagen.scaled( this->width(), this->height() ) );
}
