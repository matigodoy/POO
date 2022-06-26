#ifndef BOTON_H
#define BOTON_H

#include <QWidget>
#include <QLabel>

class boton : public QLabel
{
    Q_OBJECT
public:
    explicit boton(QWidget *parent = nullptr);

protected:
    void mousePressEvent( QMouseEvent * e );

private:
    QLabel marta;

signals:
    void signal_click();

};

#endif // BOTON_H
