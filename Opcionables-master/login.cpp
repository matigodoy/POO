#include "login.hpp"
#include "ui_login.h"

#include <QMessageBox>
//#include <QRegExpValidator>

#include "question.hpp"

Login::Login( QWidget *parent ) : QWidget( parent ),
                                  ui( new Ui::Login ),
                                  question( new Question )

{
    ui->setupUi( this );

    ui->logo->soyLogo();
    ui->background->setImage( "background.jpg", FILL );

    QPalette palette = this->palette();
    palette.setColor( QPalette::WindowText, QColor( 255, 255, 255 ) );
    this->setPalette( palette );

    ui->startButton->setFixedHeight( 2 * ui->startButton->sizeHint().height() );

//    ui->leUsuario->setValidator(new QRegExpValidator( QRegExp( "[A-Za-z0-9_]+" ), this ) );
//    ui->leCelular->setValidator(new QRegExpValidator( QRegExp( "[A-Za-z0-9_]+" ), this ) );

    connect( ui->leUsuario, SIGNAL( textChanged( QString ) ), SLOT( lineEditChanged( QString ) ) );
    connect( ui->leCelular, SIGNAL( textChanged( QString ) ), SLOT( lineEditChanged( QString ) ) );
    connect( ui->startButton, SIGNAL( pressed() ), SLOT( start() ) );
    connect( ui->leCelular, SIGNAL( returnPressed() ), SLOT( start() ) );

    connect( DataManager::getInstance(), SIGNAL( readyLogin( QString, QString, QString, QString, QString ) ),
             this, SLOT( showLogin( QString, QString, QString, QString, QString ) ) );

    connect(ui->pbInstrucciones, SIGNAL(clicked(bool)), this, SLOT(slot_mostrarInstrucciones()));

}

Login::~Login()
{
    delete ui;
}

void Login::resizeEvent( QResizeEvent* )
{
    QImage logo;
    logo.load( ":/resources/images/ubp.png" );
    ui->logo->setFixedSize( this->width(), logo.height() * this->width() / logo.width() );
}

void Login::start()
{
    if( !validateFields() )
    {
        return;
    }

    ui->leUsuario->setEnabled( false );
    ui->leCelular->setEnabled( false );
    ui->startButton->setEnabled( false );

    QString usuario( ui->leUsuario->text().toLower().simplified() );
    QString celular( ui->leCelular->text() );

    if( !DataManager::getInstance()->requestLogin( usuario, celular ) )
    {
        qDebug() << "Solicitud inicial incorrecta";
    }
    else
    {
        qDebug() << "Solicitud inicial correcta";
    }
}

void Login::lineEditChanged( QString )
{
    ui->errorLabel->clear();
}

bool Login::validateFields()
{
    QString usuario( ui->leUsuario->text().toLower().simplified() );
    QString celular( ui->leCelular->text() );

    bool error = usuario.isEmpty() || celular.isEmpty();

    if( error )
    {
        ui->errorLabel->setText( "Completa los campos" );
    }
    else
    {
        ui->errorLabel->clear();
    }

    return !error;
}

void Login::showLogin( QString id_usuario, QString usuario , QString nombre, QString apellido, QString mail )
{

    question->slot_actualizarDatosUsuario( id_usuario, usuario, nombre, apellido, mail );

    if( ! usuario.isEmpty() )
    {
        this->hide();

        // Muestra la venta Question y pide pregunta inmediatamente
        question->showMaximized();
        DataManager::getInstance()->requestQuestion( id_usuario );

        ui->leUsuario->clear();
        ui->leCelular->clear();
        ui->errorLabel->clear();
    }
    else
    {
        ui->errorLabel->setText( "Datos incorrectos" );
    }

    ui->leUsuario->setEnabled( true );
    ui->leCelular->setEnabled( true );
    ui->startButton->setEnabled( true );
}

void Login::slot_mostrarInstrucciones()
{
    QMessageBox::information(this, "Instrucciones de Opcionables", "La finalidad de esta aplicación"
                             " es mantenernos atentos al estudio de la programación C++ con el uso"
                             " de la biblioteca Qt para lograr los conocimientos y reforzar"
                             " la práctica de programación para alcanzar los objetivos de la materia."
                             " Con esta aplicación se requiere comprender los contenidos de los videos"
                             " de Youtube y responder las preguntas múltiple opción que se presentan aquí."
                             " Hay un contador que indica el tiempo que tiene disponible para responder."
                             " \n\nPara loguearse utilizar como nombre de usuario el mail de la UBP"
                             " sin el @ubp.edu.ar y como clave el número del teléfono celular sin"
                             " indicar el +54 9 \n\nConsiderar que:"
                             " \n    - Al loguearse se empieza con la primer pregunta"
                             " \n    - Si se cierra la aplicación se responde mal la pregunta actual"
                             " \n\nBuena suerte!!"
                             );
}
