#include <iostream>
#include <string>
int main(){
    int numero = 8;
    std::string texto = "Hola como andas ";
    std::string strnum = std::to_string(numero);

    std::cout<<texto + strnum;

    return 0;
}
