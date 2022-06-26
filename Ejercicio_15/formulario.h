#ifndef FORMULARIO_H
#define FORMULARIO_H

#include<QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QGridLayout>

class Formulario : public QWidget{
    Q_OBJECT

public:
    Formulario();
    ~Formulario();

private:
    QLabel * lNombre;
    QLineEdit * leNombre;
    QLabel * lApellido;
    QLineEdit * leApellido;
    QLabel * lLegajo;
    QLineEdit * leLegajo;
    QPushButton * boton;

    QGridLayout * layout1;
};

#endif // FORMULARIO_H
