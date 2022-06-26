#ifndef BOTON_H
#define BOTON_H

#include <QLabel>
#include <QWidget>

class Boton : public QLabel
{
    Q_OBJECT
public:
    Boton( QWidget * parent = nullptr );

protected:
    void mousePressEvent( QMouseEvent * );

signals:
    void signal_click();
};

#endif // BOTON_H
