#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(){
    vector<int>vector_1(100);

    for(int i=0; i< vector_1.size(); i++){
        vector_1[i] = rand() %10+1;
    }
    sort(vector_1.begin(),vector_1.end());
    for(int j=0; j< vector_1.size(); j++) {
        cout<<vector_1[j]<<endl;
    }
    return 0;

}
