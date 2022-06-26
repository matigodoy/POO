#include<QApplication>
#include<login.h>
#include<formulario.h>
#include <formulario2.h>

int main(int argc, char ** argv){
    QApplication a(argc,argv);

    Login login;
    login.setWindowTitle("Login");
    //login.move(900,500);
    //login.resize(400,200);
    login.show();

    //Formulario formulario;
    //formulario.setWindowTitle("Formulario");
    //formulario.show();

    return a.exec();
}
