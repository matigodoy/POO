#include<iostream>
#include<string>
#include<QDebug>
#include<QString>

class Poste{
private:
    float altura;
    std::string color;
    float seccion;
    QString marca;
public:
//    Poste();
//    Poste(float altura);
//    Poste(float altura,std::string color);
//    Poste(float altura,std::string color,float seccion);
      Poste(float altura = 6, std::string color = "marron", float seccion = 15, QString marca = "Marcovich");

      ~Poste();

    void setAltura(float altura);
    float getAltura();

    void setColor(std::string color);
    std::string getColor();

    void setSeccion(float seccion);
    float getSeccion();

    void setMarca(QString marca);
    QString getMarca();
};

//Poste::Poste() : altura(6), color("marron"), seccion(15){
// Lo siguiente no es la forma adecuada de inicializar las variables en el constructor de C++.
//    altura = 6;
//    color = "marron";
//    seccion = 15;
//}

//Poste::Poste(float altura) : altura(altura), color("marron"), seccion(15){}

//Poste::Poste(float altura, std::string color) : altura(altura), color(color), seccion(15){}

//Poste::Poste(float altura, std::string color, float seccion) : altura(altura), color(color), seccion(seccion){}



//Contructor con parametros con valor por defecto

Poste::Poste(float altura, std::string color, float seccion, QString marca) : altura(altura), color(color), seccion(seccion), marca(marca){}

Poste::~Poste(){
    this->altura = 0;
    this->color = "";
    this->seccion = 0;
    this->marca = "";
    qDebug() << "Objeto Destruido";
}

void Poste::setAltura(float altura){
    this->altura = altura;
}

float Poste::getAltura(){
    return this->altura;
}

void Poste::setColor(std::string color){
    this->color = color;
}

std::string Poste::getColor(){
    return this->color;
}

void Poste::setSeccion(float seccion){
    this->seccion = seccion;
}

float Poste::getSeccion(){
    return this->seccion;
}

void Poste::setMarca(QString marca){
    this->marca = marca;
}

QString Poste::getMarca(){
    return this->marca;
}

int main(int,char **){
    Poste poste1;
    Poste poste2(16);
    Poste poste3(12, "rojo", 14);
    Poste * poste4 = new Poste;
    Poste * poste5 = new Poste();
    Poste * poste6 = new Poste(8);
    Poste * poste7 = &poste1;

    std::cout << poste1.getAltura() << " " << poste1.getColor() << " " << poste1.getSeccion() << std::endl;

    std::cout << poste2.getAltura() << " " << poste2.getColor() << " " << poste2.getSeccion() << std::endl;

    std::cout << poste3.getAltura() << " " << poste3.getColor() << " " << poste3.getSeccion() << std::endl;

    std::cout << poste6->getAltura() << " " << poste6->getColor() << " " << poste6->getSeccion() << std::endl;

    qDebug() << poste4->getAltura() << poste4->getColor().c_str() << poste4->getSeccion() << poste4->getMarca();

    return 0;
}
