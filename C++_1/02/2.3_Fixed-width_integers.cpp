#include <iostream>

int main()
{
    using namespace std;

    int16_t i(5);
    int8_t myint = 65;  

    cout << myint << endl;  // char �������� ��µ�

    int_fast8_t fi(5);      // 8��Ʈ size�� ���� ������ -> char
    int_least64_t fl(5);    // ��� 8����Ʈ�� ������ Ÿ�� -> long long

    cout << fi << endl;
    cout << fl << endl;

    return 0;
}