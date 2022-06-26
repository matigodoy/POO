#include <QApplication>
#include <mapa.h>

int main( int argc, char ** argv ) {
    QApplication a(argc,argv);

    Mapa mapa;
    mapa.show();

    return a.exec();
}
