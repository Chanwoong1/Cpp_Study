#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int y = (x > 0) ? 1 : 2;    // ���� ������ x > 0�� ���̸� y = 1, �����̸� y = 2

    cout << x + 2 << endl;
    cout << "y : " << y << endl;
    cout << "Hello, World" << endl;

    return 0;
}