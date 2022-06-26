#include "boton.h"
#include <QDebug>
#include <QMouseEvent>
#include <QLabel>

boton::boton(QWidget *parent) : QLabel(parent)
{

}

void boton::mousePressEvent(QMouseEvent *e)
{
    qDebug() << "click en" << e->pos() << e->button();

    if ( e->button() == Qt::LeftButton )
        emit signal_click();
}

