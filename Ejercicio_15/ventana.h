#ifndef VENTANA_H
#define VENTANA_H


#include<QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QGridLayout>


class Ventana : public QWidget{
    Q_OBJECT

public:
    Ventana();
    ~Ventana();

private:
    QRectF rectangulo;

    QGridLayout * layout1;

protected:
    void paintEvent( QPaintEvent * );
};


#endif // VENTANA_H
