#include "boton.h"

Boton::Boton() : primer_boton(new QPushButton("Mostrar segundo boton y label")),
                 segundo_boton(new QPushButton("Ocultar label y mostrar boton final")),
                 segundo_label(new QLabel("Milanesas con pure")),
                 tercer_boton(new QPushButton("Cerrar aplicación")),
                 layout(new QGridLayout)
{
    layout->addWidget( primer_boton);
    layout->addWidget( segundo_boton);
    layout->addWidget( tercer_boton);
    layout->addWidget( segundo_label);

    this->setLayout(layout);

    segundo_boton->setVisible( false );
    tercer_boton->setVisible( false );
    segundo_label->setVisible( false );
    connect( primer_boton, SIGNAL( pressed() ), this, SLOT( Segunda() ) );
}

Boton::~Boton(){
    delete primer_boton;
    delete segundo_boton;
    delete tercer_boton;
    delete segundo_label;
    delete layout;
}

void Boton::Primer(){

}

void Boton::Segunda(){
    primer_boton->setVisible( false );
    segundo_boton->setVisible( true );
    segundo_label->setVisible( true );
    tercer_boton->setVisible( false );
     connect( segundo_boton, SIGNAL( pressed() ), this, SLOT( Tercera() ) );
}

void Boton::Tercera(){
    segundo_boton->setVisible( false );
    segundo_label->setVisible( false );
    tercer_boton->setVisible( true );
    connect( tercer_boton, SIGNAL( pressed() ), this, SLOT( close() ) );

}
