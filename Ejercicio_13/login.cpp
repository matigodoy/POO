#include <login.h>
#include <formulario.h>
#include <QDebug>
#include <formulario2.h>

Login::Login() : lUsuario(new QLabel("Usuario")), lClave(new QLabel("Clave")), leUsuario(new QLineEdit), leClave(new QLineEdit), pb(new QPushButton("Validar")), layout(new QGridLayout){

    layout->addWidget(lUsuario,    0, 0, 1, 1);
    layout->addWidget(lClave,      1, 0, 1, 1);
    layout->addWidget(leUsuario,   0, 1, 1, 1);
    layout->addWidget(leClave,     1, 1, 1, 1);
    layout->addWidget(pb,          2, 1, 1, 1);

    leUsuario->setText("admin");
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
    if(leUsuario->text() == "admin" && leClave->text() == "admin"){
        qDebug()<< "Usuario Valido";
        this->hide();
        //Formulario().show();
        Formulario2 formulario2;
        formulario2.setModal(true);
        formulario2.exec();

    }
    else{
        qDebug()<< "Usuario no valido";
        leUsuario->clear();
        leClave->clear();
    }
}
