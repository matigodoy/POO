#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> v1;
    vector<double*> v2;

    for(int i=0;i<10;i++){
        v1.push_back(rand() %100);
        v2.push_back(&v1[i]);
    }

    cout<<"Cantidad de memoria de v1: "<<sizeof(double) * v1.size()<<endl;
    cout<<"Cantidad de memoria de v1: "<<sizeof(double*) * v2.size()<<endl;
}