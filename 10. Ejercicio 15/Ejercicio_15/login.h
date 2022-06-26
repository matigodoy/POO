#ifndef LOGIN_H
#define LOGIN_H

#include<QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QGridLayout>
#include"ventana.h"

class Login : public QWidget{
    Q_OBJECT

public:
    Login();
    ~Login();

private:
    QLabel * lUsuario;
    QLabel * lClave;
    QLineEdit * leUsuario;
    QLineEdit * leClave;
    QPushButton * pb;

    QGridLayout * layout;

    Ventana * ventana;

    short int * contador;

private slots:
    void slot_validar();
};


#endif // LOGIN_H
