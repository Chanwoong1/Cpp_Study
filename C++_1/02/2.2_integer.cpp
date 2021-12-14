#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;

    short s = 1;        // 2byte
    int i = 1;
    long l = 1;
    long long ll = 1;

    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    

    cout << "short" << endl;
    cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;  // �� ���ڸ� ��ȣ ���� -1, 0�� ǥ���ϱ����� -1 -> 32767�� short�� ǥ�������� ���� ū ��
    cout << numeric_limits<short>::max() << endl;       // short�� ǥ�� �� �� �ִ� ���� ū ��
    cout << numeric_limits<short>::min() << endl;       // ���� ���� ��
    cout << numeric_limits<short>::lowest() << endl;
    
    s = 32767;
    s = s + 1;  // ��밪 : 32768

    // overflow
    cout << "��밪 : 32768, ������ : " << s << endl;  // ������ -32768

    s = numeric_limits<short>::min();
    cout << "min(s) : " << s << endl;
    s = s - 1;
    cout << "s - 1 = " << s << endl;

    return 0;
}