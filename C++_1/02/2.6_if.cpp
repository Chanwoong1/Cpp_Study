#include <iostream>

int main()
{
    using namespace std;

    bool b1 = true;
    bool b2(false);
    bool b3{true};

    b3 = false;

    cout << b3 << endl;
    cout << b1 << endl;

    cout << "bool alpha" << boolalpha;
    cout << b3 << endl;
    cout << b1 << endl;

    if (true)
        cout << "This is true" << endl;

    return 0;
}