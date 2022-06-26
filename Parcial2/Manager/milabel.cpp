#include "milabel.h"
#include <QDebug>
#include <QMouseEvent>
#include <QLabel>

MiLabel::MiLabel(QWidget *parent) : QLabel(parent)
{

}

void MiLabel::mousePressEvent(QMouseEvent *e)
{
    qDebug() << "click en" << e->pos() << e->button();

    if ( e->button() == Qt::LeftButton )
        emit signal_click();

}
