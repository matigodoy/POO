#include <QApplication>
#include <QDebug>
#include <QString>

class Personal  {
public:
    Personal( int edad = 0, int salario = 80000 ) : edad(edad), salario(salario){
        qDebug() << "Costructor de Personal";
    }
    ~Personal() {
        this->edad = 0;
        this->salario = 0;
        qDebug() << "Destructor de Personal";
    }

    QString getEdad()  {  return "Edad: " + QString::number( edad );  }
    QString getSalario()  {  return "Salario: " + QString::number( salario );  }

protected:  // Para acceso desde las clases derivadas
    int edad;
    int salario;
};


class Desarrollador : public Personal  {
public:
    // Siempre primero se llama al constructor de la clase base
    Desarrollador( int edad, QString programa) : Personal(edad), programa(programa){
        qDebug() << "Costructor de Desarrollador";
    }
    ~Desarrollador() {
        this->programa.clear();
        qDebug() << "Destructor de Desarrollador";
    }
    QString getPrograma()  {  return "Programa en: " + QString( programa );  }

private:
    QString programa;
};


int main( int argc, char ** argv )  {
    QApplication a( argc, argv );

    Desarrollador juan( 20 , "C++" );

    qDebug() << juan.getEdad();
    qDebug() << juan.getSalario();
    qDebug() << juan.getPrograma();

    return 0;
}
