#include <iostream>

int main()
{
    using namespace std;

    unsigned int n = 5u;
    long n2 = 5L;
    double ad = 6.0e-10;

    // Octal(8����)
    // Hexadecimal(16)  : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

    // int x = 012;    // �տ� 0�� ���̸� 8����
    // cout << x << endl;

    // int x = 0xF;   // 0x �� 16����
    // cout << x << endl;

    // int x = 0b1010;     // 2����
    // cout << x << endl;

    const int price_per_item = 10;
    int num_items = 123;
    int price = num_items * price_per_item;
    cout << price << endl;

    return 0;
}