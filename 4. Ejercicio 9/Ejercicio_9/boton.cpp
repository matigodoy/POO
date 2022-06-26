#include<boton.h>
#include<QDebug>

Boton::Boton() : primer_bt(new QPushButton("Mostrar segundo boton y label")),
                 segundo_bt(new QPushButton("Ocultar label y mostrar boton final")),
                 segundo_label(new QLabel("Label")),
                 tercer_bt(new QPushButton("Cerrar aplicacion")),
                 layout(new QGridLayout)
{
    layout->addWidget(primer_bt);
    layout->addWidget(segundo_label,    0, 0, 1, 1);
    layout->addWidget(segundo_bt,       1, 0, 1, 1);
    layout->addWidget(tercer_bt);

    this->setLayout(layout);

    segundo_bt->setVisible(false);
    segundo_label->setVisible(false);
    tercer_bt->setVisible(false);
    connect(primer_bt, SIGNAL(pressed()), this, SLOT(segunda_instancia()));
}

Boton::~Boton(){
    delete primer_bt;
    delete segundo_bt;
    delete segundo_label;
    delete tercer_bt;
    delete layout;
}

void Boton::segunda_instancia(){
    primer_bt->setVisible(false);
    segundo_bt->setVisible(true);
    segundo_label->setVisible(true);
    tercer_bt->setVisible(false);
    connect(segundo_bt, SIGNAL(pressed()), this, SLOT(tercera_instancia()));
}

void Boton::tercera_instancia(){
    primer_bt->setVisible(false);
    segundo_bt->setVisible(false);
    segundo_label->setVisible(false);
    tercer_bt->setVisible(true);
    connect(tercer_bt, SIGNAL(pressed()), this, SLOT(close()));
}
