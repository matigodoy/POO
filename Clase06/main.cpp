#include <iostream>
#include <QDebug>
#include <QWidget>
#include "poste.h"

using namespace std;

int funcionGlobal(int numero, int & otro){

    return otro + numero++;

}

void funcion(int numero){
    numero++;
}


int main(int, char **)
{
    Poste p1( 6, 2);
    p1.setDatos( 8, 3);

    int alt = 0; int sec = 0;

    p1.getDatos( alt, sec);

    int numero = 8;
    int otro = 2;

    funcion( numero );

    qDebug() << numero;

    qDebug() << funcionGlobal( numero, otro );

    std::vector< Poste > v;

    Poste poste1( 8, 2 );

    v.push_back( poste1 );
    v.push_back( Poste( 9,3 ) );


    poste1.setDatos( 1,1 );

    qDebug() << v.at( 0 ) << v.at( 1 );

    return 0;
}

