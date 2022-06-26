#include "ventana.h"

Ventana::Ventana(){}

void Ventana::paintEvent(QPaintEvent *){
    QPainter painter (this);
    painter.drawRect(174,174,151,151);
    QRectF target(175, 175, 150, 150);
    QImage image("C:/Users/fedem/OneDrive - UNIVERSIDAD BLAS PASCAL/Estudios/UBP/5to SEMESTRE/POO/Workspace Fede/10. Ejercicio 15/Ejercicio_15/foto.png");
    QRectF source(0, 0, 150, 150);
    painter.drawImage(target, image, source);
}
