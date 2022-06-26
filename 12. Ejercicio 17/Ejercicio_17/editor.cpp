#include "editor.h"
#include <QDebug>
#include <QString>

Editor::Editor() : texto(new QTextEdit),
                   etiqueta(new QLabel),
                   boton(new QPushButton("Buscar")),
                   le_borrar(new QLineEdit),
                   boton_borrar(new QPushButton("Borrar")),
                   layout_Editor(new QGridLayout) {

    layout_Editor->addWidget(texto,         0,0,1,3);
    layout_Editor->addWidget(boton_borrar,  1,0,1,1);
    layout_Editor->addWidget(le_borrar,     1,1,1,2);
    layout_Editor->addWidget(boton,         2,0,1,1);
    layout_Editor->addWidget(etiqueta,      2,1,1,2);

    this->setLayout(layout_Editor);

    connect(boton, SIGNAL(pressed()), this, SLOT(slot_cantidad_letras()));
    connect(boton_borrar, SIGNAL(pressed()), this, SLOT(slot_borrar_cadena()));

}

void Editor::slot_cantidad_letras() {
    etiqueta->setText("Se encontraron " + QString().number(texto->toPlainText().count("a")) +" 'a' en el texto");
}

void Editor::slot_borrar_cadena() {
    QString nuevoTexto = texto->toPlainText().remove(le_borrar->text(), Qt::CaseInsensitive); //CaseInsensitive = es para que no interprete mayusculas ni minusculas.
    texto->setPlainText(nuevoTexto);
}
