#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s1 = "Hola";
    string s2 = "Che";

    cout << s1 <<" "<<s2 <<endl;

    string s3 = "Hola, que tal! Buen dia.";

    cout<<"Resultado del find "<<s3.find("tal")<<endl;
    
    if(s3.find("tal") != string::npos){
        cout << "Encontrado"<<endl;
    }
    else{
        cout << "No Encontrado"<<endl;
    }

    cout<<endl<<endl;

    int * p_entero;
    int entero = 8;

    p_entero = &entero;

    cout<<entero<<endl;
    cout<<&entero<<endl;
    cout<<p_entero<<endl;
    cout<<*p_entero<<endl;

    cout<<endl<<endl;

    int miArray[ 10 ] = {1,2,3,4,5,6,7,8,9,10};      // miArray es como un puntero al primer elemento
    int* puntero;

    puntero = miArray;  // similar a:  puntero = &miArray[0];

    cout<<miArray<<endl;
    cout<<miArray+1<<endl;
    cout<<miArray[5]<<endl;
    cout<<*(miArray+5)<<endl;
    cout<<&miArray[5]<<endl;
    cout<<miArray+5<<endl;

    cout<<puntero<<endl;
    cout<<*puntero<<endl;
    cout<<puntero+5<<endl;
    cout<<*(puntero+5)<<endl;

    puntero = puntero + 3;  // se desplaza 3 posiciones int
    ( *puntero )++;       // equivale a miArray[0]++;  // incrementa
    puntero++;          // equivale a &miArray[1];  // se mueve una posición
}