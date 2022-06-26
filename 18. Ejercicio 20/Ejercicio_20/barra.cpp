#include "barra.h"
#include <QPainter>

Barra::Barra(QWidget *parent) : QWidget(parent), valor(0) { }

void Barra::setValor(int valor) {
    this->valor = valor;
    this->repaint();
}

void Barra::paintEvent(QPaintEvent * e) {
    QPainter painter(this);

    painter.fillRect(0,1,this->width(), 5, QColor(200,200,200));

    int porcentaje = this->valor *  this->width() / 100;
    painter.fillRect(0,0, porcentaje, 7, QColor(10,10,200));

}
