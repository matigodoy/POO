#include <vector>
#include <iostream>
#include <string>

int main(int, char **){
    std::vector <int> v1;
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(2);

    std::vector <int> v2(4,2);

    for(int i=0; i<v1.size();i++){
        std::cout<<v1[i]<<std::endl;
    }

    for(int i=0; i<v2.size();i++){
        std::cout<<v2[i]<<std::endl;
    }

    std::vector <std::string> v3(5,"Hola");
    for(int i=0; i<v3.size();i++){
        std::cout<<v3[i]<<std::endl;
    }

    std::vector <std::string> v4(v3);
    for(int i=0; i<v4.size();i++){
        std::cout<<v4[i]<<std::endl;
    }

    v3.push_back("hola  ");
    v4.push_back("hola");

    if(v3==v4) std::cout<<"Son iguales "<<std::endl;
    else std::cout<<"No son iguales "<<std::endl;

    if(v3>v4) std::cout<<"v3 > v4 "<<std::endl;
    else if(v3<v4) std::cout<<"v4 > v3 "<<std::endl;
    else std::cout<<"Tienen misma cantidad "<<std::endl;

    if(v1>v2) std::cout<<"v1 > v2 "<<std::endl;
    else if(v1<v2) std::cout<<"v2 > v1 "<<std::endl;
    else std::cout<<"Tienen misma cantidad "<<std::endl;
}