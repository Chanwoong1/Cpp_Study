#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int y = (x > 0) ? 1 : 2;    // 삼항 연산자 x > 0이 참이면 y = 1, 거짓이면 y = 2

    cout << x + 2 << endl;
    cout << "y : " << y << endl;
    cout << "Hello, World" << endl;

    return 0;
}