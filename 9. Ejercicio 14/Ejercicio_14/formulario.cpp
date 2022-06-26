#include <formulario.h>
#include <ctime>
#include <QDebug>

Formulario::Formulario() :  lNombre(new QLabel("Nombre")),
                            leNombre(new QLineEdit),
                            lApellido(new QLabel("Apellido")),
                            leApellido(new QLineEdit),
                            lLegajo(new QLabel("Legajo")),
                            leLegajo(new QLineEdit),
                            boton(new QPushButton("Alta")),
                            grupo(new QGroupBox),
                            l_TitleCaptcha(new QLabel("Captcha")),
                            lCaptcha(new QLabel("Numero Captcha")),
                            leCaptcha(new QLineEdit),
                            layout_captha(new QGridLayout),
                            layout_formulario(new QGridLayout){
    numeroCaptcha();

    layout_captha->addWidget(l_TitleCaptcha,   0, 0, 1, 2);
    layout_captha->addWidget(lCaptcha,         1, 0, 1, 2);
    layout_captha->addWidget(leCaptcha,        2, 0, 1, 2);

    grupo->setLayout(layout_captha);

    layout_formulario->addWidget(lNombre,      0, 0, 1, 1);
    layout_formulario->addWidget(leNombre,     0, 1, 1, 2);
    layout_formulario->addWidget(lApellido,    1, 0, 1, 1);
    layout_formulario->addWidget(leApellido,   1, 1, 1, 2);
    layout_formulario->addWidget(lLegajo,      2, 0, 1, 1);
    layout_formulario->addWidget(leLegajo,     2, 1, 1, 2);
    layout_formulario->addWidget(grupo,        3, 0, 2, 2);
    layout_formulario->addWidget(boton,        3, 2, 1, 1);

    this->setLayout(layout_formulario);

    connect(boton, SIGNAL(pressed()), this, SLOT(slot_validar_alta()));
}

Formulario::~Formulario(){
    delete lNombre;
    delete leNombre;
    delete lApellido;
    delete leApellido;
    delete lLegajo;
    delete leLegajo;
    delete boton;
    delete layout_formulario;
}

void Formulario::numeroCaptcha(){
    srand(time(0));
    QString numero = QString().number(1+rand()%(10001-1));
    lCaptcha->setText(numero);
}

void Formulario::slot_validar_alta(){
    if(lCaptcha->text() == leCaptcha->text()){
        qDebug()<<"Captcha correcto";
        this->close();
    }
    else{
        qDebug()<<"Captcha incorrecto";
        numeroCaptcha();
        leCaptcha->clear();
    }
}
