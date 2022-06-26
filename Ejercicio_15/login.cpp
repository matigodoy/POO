#include <login.h>
#include <formulario.h>
#include <QDebug>
#include <formulario2.h>
#include <ventana.h>

int error=0;

Login::Login() : lUsuario(new QLabel("Usuario")), lClave(new QLabel("Clave")), leUsuario(new QLineEdit), leClave(new QLineEdit), pb(new QPushButton("Validar")), layout(new QGridLayout), ventana(new Ventana){
    layout->addWidget(lUsuario,    0, 0, 1, 1);
    layout->addWidget(lClave,      1, 0, 1, 1);
    layout->addWidget(leUsuario,   0, 1, 1, 1);
    layout->addWidget(leClave,     1, 1, 1, 1);
    layout->addWidget(pb,          2, 1, 1, 1);

    leUsuario->setText("45346839");
    leClave->setEchoMode(QLineEdit::Password);

    this->setLayout(layout);

    //connect(leClave, SIGNAL(returnPressed()), this, SLOT(slot_validar()));
    connect(pb, SIGNAL(pressed()), this, SLOT(slot_validar()));
    connect(pb, SIGNAL(pressed()), this, SLOT(slot_validar()));
}

Login::~Login(){
    delete lUsuario;
    delete lClave;
    delete leUsuario;
    delete leClave;
    delete pb;
    delete layout;
}

void Login::slot_validar(){

    if(error != 3){
        if(leUsuario->text() == "45346839" && leClave->text() == "839"){
            qDebug()<< "Usuario Valido";
            hide();
            ventana->resize(300,350);
            ventana->show();



        }
        else{
            qDebug()<< "Usuario no valido";
            leClave->clear();
            error++;
            qDebug()<< error;
        }
    } else {
        this->hide();
    }
}
