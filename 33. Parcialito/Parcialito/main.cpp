#include "login.h"
#include "ventana.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ingreso login;
    login.show();

    Ventana ventana;

    QObject::connect( &login, SIGNAL(signal_usuario(QString)), &ventana, SLOT(slot_mostrar(QString)));
    return a.exec();
}
