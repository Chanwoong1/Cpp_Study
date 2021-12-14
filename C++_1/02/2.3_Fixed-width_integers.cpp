#include <iostream>

int main()
{
    using namespace std;

    int16_t i(5);
    int8_t myint = 65;  

    cout << myint << endl;  // char 형식으로 출력됨

    int_fast8_t fi(5);      // 8비트 size중 가장 빠른것 -> char
    int_least64_t fl(5);    // 적어도 8바이트를 가지는 타입 -> long long

    cout << fi << endl;
    cout << fl << endl;

    return 0;
}