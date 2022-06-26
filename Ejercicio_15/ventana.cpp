#include<ventana.h>
#include<QPainter>

Ventana::Ventana() : layout1(new QGridLayout){
    //layout1->addWidget(lNombre,      0, 0, 1, 1);
    QPainter painter(this);
    painter.drawRect(rectangulo);
    this->setLayout(layout1);
}

Ventana::~Ventana(){
    delete layout1;
}
