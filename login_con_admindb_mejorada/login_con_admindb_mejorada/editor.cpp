#include "editor.h"
#include <QDebug>
#include <QString>

Editor::Editor() : texto(new QTextEdit),
                   etiqueta(new QLabel),
                   boton(new QPushButton("Buscar")),
                   le( new QLineEdit ),
                   pbBorrar(new QPushButton("Borrar")),
                   layout_Editor(new QGridLayout){

    layout_Editor->addWidget(etiqueta,  6,1,1,1);
    layout_Editor->addWidget(texto,     0,0,5,4);
    layout_Editor->addWidget(boton,     6,0,1,1);
    layout_Editor->addWidget(le,        5,0,1,1);
    layout_Editor->addWidget(pbBorrar,  1,1,1,1);

    texto->setPlainText( "21:07:18: Starting /home/inv/osi/2021/POO2021/Códigos/"
                         "Clase11/build-Ejercicio_17-Desktop_Qt_5_14_1_GCC_64bit-"
                         "Debug/Ejercicio_17 ... 21:07:35: /home/inv/osi/2021/POO2021/Cód" );

    this->setLayout( layout_Editor );

    connect(boton, SIGNAL( pressed() ), this, SLOT( slot_cantidad_letras() ) );
    connect( pbBorrar, SIGNAL( pressed() ), this, SLOT( slot_borrarCadena() ) );

}

void Editor::slot_cantidad_letras()  {
    etiqueta->setText("Se encontraron " + QString().number(texto->toPlainText().count("a")) +" 'a' en el texto");
}

void Editor::slot_borrarCadena()  {
    QString nuevoTexto = texto->toPlainText().remove( le->text(), Qt::CaseInsensitive );
    texto->setPlainText( nuevoTexto );
}













