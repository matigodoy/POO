#include<QApplication>
#include<boton.h>

int main(int argc, char ** argv){
    QApplication a(argc,argv);

    Boton boton;
    boton.setWindowTitle("Ejercicio 9");
    boton.move(600,400);
    boton.resize(400,200);

    boton.show();


    return a.exec();
}
