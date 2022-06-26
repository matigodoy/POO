#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ventana)
{
    ui->setupUi(this);

    connect( ui->lIngresar, SIGNAL(signal_click()), this, SLOT(close()));
}

Ventana::~Ventana()
{
    delete ui;
}

