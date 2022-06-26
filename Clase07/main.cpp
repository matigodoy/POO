#include <QApplication>
#include "login.h" //incluimos la cabecera con el login que creamos

int main(int arcg, char ** argv)
{
    QApplication a( arcg, argv );
    Login login;
    login.setWindowTitle( "Login" );
    login.move( 900, 500 ); // mas o menos el centro de 1920x1080
    login.show();



    return a.exec();
}
