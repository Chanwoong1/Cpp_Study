#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    int j = 3;
    int i = -1;
    char a = 'H';
    float fv = 3.141592f;
    double dv = 3.141592;

    auto av1 = 3.141592;
    auto av2 = 3.141592f;

    int k = 123;    // copy initialization
    int a(123);     // direct initialization
    int b{123};     // uniform initialization

    cout << (uintptr_t)static_cast<void*>(&a) << endl;
    cout << (uintptr_t)static_cast<void*>(&i) << endl;

    cout << sizeof(bool) << endl;
    cout << sizeof(av1) << endl;    // double로 취급    8바이트
    cout << sizeof(av2) << endl;    // float으로 취급   4바이트

    return 0;
}