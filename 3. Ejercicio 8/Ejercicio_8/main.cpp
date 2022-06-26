#include <iostream>
#include <vector>
#include <QDebug>

class Jugador{
    private:
        int velocidad;
        int fuerza;
        QString nombre;
    public:
        Jugador(int velocidad=0, int fuerza=0, QString nombre="sin nombre");
        ~Jugador();
        void setVelocidad(int velocidad);
        int getVelocidad();
        void setFuerza(int fuerza);
        int getFuerza();
        void setNombre(QString nombre);
        QString getNombre();
};

Jugador::Jugador(int velocidad, int fuerza, QString nombre) : velocidad(velocidad), fuerza(fuerza), nombre(nombre){}

Jugador::~Jugador(){
    velocidad = 0;
    fuerza = 0;
    nombre = "sin nombre";
}

void Jugador::setVelocidad(int velocidad){
    this->velocidad = velocidad;
}

int Jugador::getVelocidad(){
    return this->velocidad;
}

void Jugador::setFuerza(int fuerza){
    this->fuerza = fuerza;
}

int Jugador::getFuerza(){
    return this->fuerza;
}

void Jugador::setNombre(QString nombre){
    this->nombre = nombre;
}

QString Jugador::getNombre(){
    return this->nombre;
}

int main(){
    //Declaracion el vector
    std::vector< Jugador > v;

    //Ingresa los valores a los Jugadores a partir del constructor.
    for(int i=0;i<10;i++){
        Jugador aux(rand() %100,rand() %100,QString("Jugador %1").arg(i));
        v.push_back(aux);
    }

    v[5].setNombre("Jorge");

    //Muestra los Jugadores del vector "v".
    qDebug()<<"Vector Jugadores: ";
    for(int i=0;i<10;i++){
        qDebug()<<"Velocidad: "<<v[i].getVelocidad()<<" - Fuerza: "<<v[i].getFuerza()<<" - Nombre: "<<v[i].getNombre();
    }

    return 0;
}
