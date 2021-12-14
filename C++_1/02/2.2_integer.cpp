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
    cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;  // 맨 앞자리 부호 여부 -1, 0을 표현하기위해 -1 -> 32767이 short로 표현가능한 가장 큰 수
    cout << numeric_limits<short>::max() << endl;       // short가 표현 할 수 있는 가장 큰 수
    cout << numeric_limits<short>::min() << endl;       // 가장 작은 수
    cout << numeric_limits<short>::lowest() << endl;
    
    s = 32767;
    s = s + 1;  // 기대값 : 32768

    // overflow
    cout << "기대값 : 32768, 실제값 : " << s << endl;  // 실제는 -32768

    s = numeric_limits<short>::min();
    cout << "min(s) : " << s << endl;
    s = s - 1;
    cout << "s - 1 = " << s << endl;

    return 0;
}