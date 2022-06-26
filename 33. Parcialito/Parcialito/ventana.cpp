#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ventana)
{
    ui->setupUi(this);
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::slot_mostrar(QString nombre)
{
    ui->lMostrar->setText( "Bienvenido/a " + nombre + " un gusto tenerte aca!!" );
    this->show();
}
