#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlRecord>
#include <QStringList>

#include "login.h"
#include "mainwindow.h"
#include "admindb.h"

Login::Login() : lUsuario(new QLabel("Usuario")),
                 lClave(new QLabel("Clave")),
                 leUsuario(new QLineEdit),
                 leClave(new QLineEdit),
                 pb(new QPushButton("Validar")),
                 layout(new QGridLayout),
                 mainWindow(new MainWindow),
                 adminDB(new AdminDB)
{

    layout->addWidget(lUsuario,    0, 0, 1, 1);
    layout->addWidget(lClave,      1, 0, 1, 1);
    layout->addWidget(leUsuario,   0, 1, 1, 2);
    layout->addWidget(leClave,     1, 1, 1, 2);
    layout->addWidget(pb,          2, 2, 1, 1);

    leUsuario->setText( "Juan Manuel" );
    leClave->setText( "42692482" );

    leClave->setEchoMode(QLineEdit::Password);

    this->setLayout(layout);

    adminDB->conectar( "../DATABASE/DataBase.sqlite" );

    connect(leClave, SIGNAL(returnPressed()), this, SLOT(slot_validar()));
    connect(pb, SIGNAL(pressed()), this, SLOT(slot_validar()));


    adminDB->mostrarTabla( "DATABASE" );

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

    QStringList nombre_apellido = this->adminDB->validarUsuario( "DATABASE", leUsuario->text(), leClave->text() );

    if ( ! nombre_apellido.isEmpty() )  {
        QMessageBox::information( this, "Conexión exitosa", "Válido" );
        this->hide();
        mainWindow->show();
    }
    else  {
        QMessageBox::critical( this, "Sin permisos", "Usuario inválido" );
        this->close();
    }

}


