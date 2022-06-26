#include<QApplication>
#include "login.h"

int main(int argc, char ** argv){
    QApplication a(argc,argv);

    Login login;
    login.setWindowTitle("Login - Ejercicio 11");
    //login.move(900,500);
    login.resize(400,200);
    login.show();
    return a.exec();
}
