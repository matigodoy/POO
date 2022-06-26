#include <iostream>
using namespace std;

namespace enteros  {
    int var1 = 5;
    int var2 = 7;
}

namespace con_decimales  {
    float var1 = 5.14;
    float var2 = 7.13;
}

int main()  {
    cout << enteros::var1 << endl;
    cout << con_decimales::var1 << endl;
    return 0;
}