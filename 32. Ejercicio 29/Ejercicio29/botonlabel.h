#ifndef BOTONLABEL_H
#define BOTONLABEL_H

#include <QLabel>
#include <QWidget>

class BotonLabel : public QLabel
{
    Q_OBJECT

public:
    BotonLabel( QWidget * parent = nullptr );

protected:
    void mousePressEvent( QMouseEvent * );

signals:
    void signal_click();


};

#endif // BOTONLABEL_H
