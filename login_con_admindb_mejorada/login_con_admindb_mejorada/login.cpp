#include "login.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QDebug>

Login::Login() : lUsuario(new QLabel("Usuario")),
                 lClave(new QLabel("Clave")),
                 leUsuario(new QLineEdit),
                 leClave(new QLineEdit),
                 pb(new QPushButton("Validar")),
                 layout(new QGridLayout),
                 adminDB(new AdminDB),
                 editor( new Editor )
{

    layout->addWidget(lUsuario,    0, 0, 1, 1);
    layout->addWidget(lClave,      1, 0, 1, 1);
    layout->addWidget(leUsuario,   0, 1, 1, 2);
    layout->addWidget(leClave,     1, 1, 1, 2);
    layout->addWidget(pb,          2, 2, 1, 1);

    leUsuario->setText( "admin" );
    leClave->setText( "123" );

    leClave->setEchoMode(QLineEdit::Password);

    this->setLayout(layout);

    adminDB->conectar( "../db/db_usuarios.sqlite" );

    connect(leClave, SIGNAL(returnPressed()), this, SLOT(slot_validar()));
    connect(pb, SIGNAL(pressed()), this, SLOT(slot_validar()));


    adminDB->mostrarTabla( "usuarios" );

}

Login::~Login()  {
    delete lUsuario;
    delete lClave;
    delete leUsuario;
    delete leClave;
    delete pb;
    delete layout;
}

void Login::slot_validar()  {

    QStringList nombre_apellido = this->adminDB->validarUsuario( "usuarios", leUsuario->text(), leClave->text() );

    if ( ! nombre_apellido.isEmpty() )  {
        QMessageBox::information( this, "Conexión exitosa", "Válido" );
        this->hide();
        editor->show();
    }
    else  {
        QMessageBox::critical( this, "Sin permisos", "Usuario inválido" );
        this->close();
    }

}









