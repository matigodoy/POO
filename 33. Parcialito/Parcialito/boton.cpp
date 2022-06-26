#include "boton.h"

Boton::Boton( QWidget * parent ) : QLabel( parent )
{

}

void Boton::mousePressEvent( QMouseEvent * )
{
    emit signal_click();
}
