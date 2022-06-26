#include<formulario.h>

Formulario::Formulario() : lNombre(new QLabel("Nombre")), leNombre(new QLineEdit), lApellido(new QLabel("Apellido")), leApellido(new QLineEdit), lLegajo(new QLabel("Legajo")), leLegajo(new QLineEdit), boton(new QPushButton("Alta")), layout1(new QGridLayout){
    layout1->addWidget(lNombre,      0, 0, 1, 1);
    layout1->addWidget(leNombre,     0, 1, 1, 1);
    layout1->addWidget(lApellido,    1, 0, 1, 1);
    layout1->addWidget(leApellido,   1, 1, 1, 1);
    layout1->addWidget(lLegajo,      2, 0, 1, 1);
    layout1->addWidget(leLegajo,     2, 1, 1, 1);
    layout1->addWidget(boton,        3, 1, 1, 1);

    this->setLayout(layout1);
}

Formulario::~Formulario(){
    delete lNombre;
    delete leNombre;
    delete lApellido;
    delete leApellido;
    delete lLegajo;
    delete leLegajo;
    delete boton;
    delete layout1;
}
