#include <QApplication>
#include <boton.h> //incluimos la cabecera con el login que creamos

int main(int arcg, char ** argv)
{
    QApplication a( arcg, argv );
    Boton boton;
    boton.setWindowTitle( "Ejercicio 9" );
    boton.move( 900, 500 ); // mas o menos el centro de 1920x1080
    //boton.Primer();
    boton.show();




    return a.exec();
}
