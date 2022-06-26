#include "indexedbutton.hpp"
#include <QDebug>

IndexedButton::IndexedButton( QString text, int index, QWidget *parent ) :
    QPushButton( text, parent )
{
    this->setIndex( index );

    // Se hace esto porque si hay un & dentro del texto de un QPushButton, lo entiende como un caracter especial.
    // La forma de escribirlo es repitiendolo dos veces
    QString textoRespuesta = text;
    textoRespuesta.replace("&", "&&");
    this->setText( textoRespuesta );

    connect( this, SIGNAL( pressed() ), SLOT( slotPressed() ) );
}

IndexedButton::~IndexedButton()
{

}

int IndexedButton::getIndex() const
{
    return index;
}

void IndexedButton::setIndex( int value )
{
    index = value;
}

void IndexedButton::slotPressed()
{
    emit pressedWithIndex( this->getIndex() );
}
