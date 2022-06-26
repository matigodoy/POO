#include "login.h"

Login::Login() : lUsuario(new QLabel("Usuario")), lClave(new QLabel("Clave")), leUsuario(new QLineEdit), leClave(new QLineEdit), pb(new QPushButton("Validar")), layout(new QGridLayout), ventana(new Ventana), contador(new short int){

    layout->addWidget(lUsuario,    0, 0, 1, 1);
    layout->addWidget(lClave,      1, 0, 1, 1);
    layout->addWidget(leUsuario,   0, 1, 1, 2);
    layout->addWidget(leClave,     1, 1, 1, 2);
    layout->addWidget(pb,          2, 2, 1, 1);

    leClave->setEchoMode(QLineEdit::Password);

    this->setLayout(layout);

    connect(leClave, SIGNAL(returnPressed()), this, SLOT(slot_validar()));
    connect(pb, SIGNAL(pressed()), this, SLOT(slot_validar()));

    *contador = 0;
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
    if(leUsuario->text() == "43368838" && leClave->text() == "838" && *contador <= 2){
        this->hide();
        ventana->setWindowTitle("Ventana");
        ventana->resize(500,500);
        ventana->show();
    }
    else if(*contador == 2){
        this->close();
    }
    else{
        *contador = *contador + 1;
        leClave->clear();
    }
}
