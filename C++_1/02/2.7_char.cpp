#include <iostream>
#include <limits>

using namespace std;

int main()
{
    char c1(65);
    char c2('A');

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    cout << "C style" << endl;
    cout << (char)65 << endl;
    cout << (int)'A' << endl;

    cout << "C++ style" << endl;
    cout << char(65) << endl;
    cout << int('A') << endl;

    cout << static_cast<char>(65) << endl;
    cout << static_cast<char>('A') << endl;

    // cin >> c1;
    // cout << c1 << " " << static_cast<int>(c1) << endl;
    
    cout << sizeof(char) << endl;
    cout << (int)numeric_limits<char>::max() << endl;
    cout << (int)numeric_limits<char>::lowest() << endl;

    cout << (int)numeric_limits<unsigned char>::max() << endl;
    cout << (int)numeric_limits<unsigned char>::lowest() << endl;

    return 0;
}