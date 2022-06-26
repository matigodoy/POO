#include <iostream>
#include <sstream>
#include <string>

template <class undefined> void insercion(undefined* a, int n){
    for (int i = 1; i < n; i++){
        int p = i;
        while(p > 0 && a[p-1] > a[p]){
            std::swap(a[p-1], a[p]);
            p--;    
        }
    }
}

template <class undefined> void imprimir ( undefined v[], int cantidad ) {
    for (int i = 0; i < cantidad; i++){
        std::cout << v[i] << "\t";
    }
    std::cout << std::endl;
}

int main()  {
    int v1[ 5 ] = { 5, 2, 4, 1, 6 };
    float v2[ 4 ] = { 2.3, 5.1, 0, 2 };
    char v3[] = "hola";
    std::string v4[2] = {"cccc","aaaa"};
    
    std::cout << "Antes de Ordenar: " << std::endl;
    imprimir( v1, 5 );
    imprimir( v2, 4 );
    imprimir( v3, 4 );
    imprimir( v4, 2 );
    
    insercion(v1,5);
    insercion(v2,4);
    insercion(v3,4);
    insercion(v4,2);

    std::cout <<std::endl << "Despues de Ordenar: " << std::endl;
    imprimir( v1, 5 );
    imprimir( v2, 4 );
    imprimir( v3, 4 );
    imprimir( v4, 2 );
}