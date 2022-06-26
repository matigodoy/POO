#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1(100);

    cout<<"Antes de ordenar "<<endl;
    for(int i = 0; i < v1.size();i++){
        v1[i] = rand() %10 + 1;
        cout<<v1[i]<<endl;
    }

    cout<<"\nDespues de ordenar "<<endl;
    sort(v1.begin(), v1.end());
    for(int i = 0; i < v1.size();i++){
        cout<<v1[i]<<endl;
    }
}