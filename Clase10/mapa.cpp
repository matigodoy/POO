#include "mapa.h"
#include <QPainter>



Mapa::Mapa() {

}

void Mapa::paintEvent( QPaintEvent * )  {
    QPainter painter( this );
    painter.drawLine( 0, 0, this->width(), this->height() );

        MANU
            MANU
                MANU
                    MANU
                        MANU
}
