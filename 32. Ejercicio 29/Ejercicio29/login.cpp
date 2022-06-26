#include "login.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QDebug>
#include "ventana.h"
#include <QTime>
#include <QDate>
#include <botonlabel.h>

Login::Login() : lUsuario(new QLabel("Usuario")),
                 lClave(new QLabel("Clave")),
                 leUsuario(new QLineEdit),
                 leClave(new QLineEdit),
                 lValidar(new BotonLabel()),
                 layout(new QGridLayout),
                 adminDB(new AdminDB)
{

    layout->addWidget(lUsuario,    0, 0, 1, 1);
    layout->addWidget(lClave,      1, 0, 1, 1);
    layout->addWidget(leUsuario,   0, 1, 1, 2);
    layout->addWidget(leClave,     1, 1, 1, 2);
    layout->addWidget(lValidar,    2, 2, 1, 1);

    leUsuario->setFocus();

    leClave->setEchoMode(QLineEdit::Password);

    this->setLayout(layout);

    lValidar->setText("Validar");

    adminDB->conectar( "../db/db_usuarios.sqlite" );

    connect(leClave, SIGNAL(returnPressed()), this, SLOT(slot_validar()));
    connect(this, SIGNAL(signal_usuarioLogueado(QString)), this, SLOT(slot_cerrar(QString)));
    connect( lValidar, SIGNAL(signal_click()), this, SLOT(slot_validar()));

    this->setWindowTitle("Login");
    adminDB->mostrarTabla( "usuarios" );

}

Login::~Login()  {
    delete lUsuario;
    delete lClave;
    delete leUsuario;
    delete leClave;
    delete lValidar;
    delete layout;
}

void Login::slot_validar()  {

    QStringList nombre_apellido = this->adminDB->validarUsuario( "usuarios", leUsuario->text(), leClave->text() );

    if ( ! nombre_apellido.isEmpty() )  {
        QMessageBox::information( this, "Conexión exitosa", "Válido" );
        this->hide();
        Ventana ventana2 = new Ventana;
        ventana2.show();
    }
    else  {
        QMessageBox::critical( this, "Sin permisos", "Usuario inválido" );
        QDate m_date = QDate::currentDate();
        QTime tiempo = QTime::currentTime();
        emit signal_usuarioLogueado("El usuario "+leUsuario->text()+" ingreso incorrectamente el día "+m_date.toString()+" a las "+tiempo.toString());
        leUsuario->clear();
        leClave->clear();
    }

}

void Login::slot_cerrar(QString usuario)
{
    QString consulta;
    consulta.append("INSERT INTO logs (error) VALUES('"+usuario+"')");
    QSqlQuery insertar;
    insertar.prepare(consulta);

    if(insertar.exec())
    {
        qDebug() << "EL log se ha insertado con exito ... ";
    }else
    {
        qDebug() << "El log no se ha insertado ...";
        qDebug() << "ERROR! " << insertar.lastError();
    }
}









