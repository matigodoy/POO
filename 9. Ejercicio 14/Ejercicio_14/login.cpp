#include <login.h>
#include <QDebug>

Login::Login() : lUsuario(new QLabel("Usuario")),
                 lClave(new QLabel("Clave")),
                 leUsuario(new QLineEdit),
                 leClave(new QLineEdit),
                 pb(new QPushButton("Validar")),
                 layout_login(new QGridLayout),
                 formulario(new Formulario){

    layout_login->addWidget(lUsuario,    0, 0, 1, 1);
    layout_login->addWidget(lClave,      1, 0, 1, 1);
    layout_login->addWidget(leUsuario,   0, 1, 1, 1);
    layout_login->addWidget(leClave,     1, 1, 1, 1);
    layout_login->addWidget(pb,          2, 1, 1, 1);

    leUsuario->setText("admin");
    leClave->setEchoMode(QLineEdit::Password);

    this->setLayout(layout_login);

    connect(leClave, SIGNAL(returnPressed()), this, SLOT(slot_validar()));
    connect(pb, SIGNAL(pressed()), this, SLOT(slot_validar()));
}

Login::~Login(){
    delete lUsuario;
    delete lClave;
    delete leUsuario;
    delete leClave;
    delete pb;
    delete layout_login;
}

void Login::slot_validar(){
    if(leUsuario->text() == "admin" && leClave->text() == "1111"){
        qDebug()<< "Usuario Valido";
        this->hide();
        this->formulario->show();
    }
    else{
        qDebug()<< "Usuario no valido";
        leUsuario->clear();
        leClave->clear();
    }
}
