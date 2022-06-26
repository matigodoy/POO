#include <QApplication>
#include "barra.h"
#include "ventana.h"

int main(int argc, char ** argv){
    QApplication a(argc, argv);

    Ventana ventana;
    ventana.show();

    return a.exec();
}
