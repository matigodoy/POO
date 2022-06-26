#ifndef LOGIN_H
#define LOGIN_H

#include<QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QGridLayout>
#include<formulario.h>

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

    Formulario * formulario;

private slots:
    void slot_validar();
};


#endif // LOGIN_H
