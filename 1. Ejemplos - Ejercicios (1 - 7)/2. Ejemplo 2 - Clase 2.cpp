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
    using enteros::var1;
    using con_decimales::var2;

    cout << var1 << endl;
    cout << var2 << endl;
    cout << enteros::var2 << endl;
    cout << con_decimales::var1 << endl;

    return 0;
}
