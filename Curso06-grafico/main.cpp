#include <QApplication>
#include <QLabel>
// - Administra los controles de la interfaz
// - Procesa los eventos
// - Existe una única instancia
// - Analiza los argumentos de la línea de comandos

int main( int argc, char** argv )  {
    // app es la instancia y se le pasa los parámetros de la línea
    // de comandos para que los procese.
    QApplication app( argc, argv );

    QLabel hola( "<H1 align=center> Hola </H1>" );
    hola.resize( 200, 100 );
    hola.setVisible( true );

    //hola.setText("<H2 align=center> Hola </H2>"); ASí podemos redefinir el mismo texto

    int valor_para_retornar = app.exec();  // Se le pasa el control a Qt
    return 0;
}
