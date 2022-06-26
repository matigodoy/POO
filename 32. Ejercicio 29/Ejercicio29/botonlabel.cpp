#include "botonlabel.h"


BotonLabel::BotonLabel( QWidget * parent ) : QLabel( parent )
{

}

void BotonLabel::mousePressEvent( QMouseEvent * )
{
    emit signal_click();
}
