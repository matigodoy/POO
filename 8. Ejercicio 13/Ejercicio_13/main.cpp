#include<QApplication>
#include<login.h>
#include<formulario.h>

int main(int argc, char ** argv){
    QApplication a(argc,argv);

    Login login;
    login.setWindowTitle("Login");
    login.show();

    return a.exec();
}
