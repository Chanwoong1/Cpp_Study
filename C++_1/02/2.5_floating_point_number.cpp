#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
    using namespace std;

    float f(123456789.0f);
    double d(0.1);
    double d1(1.0);
    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    long double ld;
    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << sizeof(float) << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::lowest() << endl;
    cout << sizeof(double) << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << sizeof(long double) << endl;
    cout << numeric_limits<long double>::max() << endl;
    cout << numeric_limits<long double>::lowest() << endl;

    cout << setprecision(16) << endl;
    cout << 1.0 / 3.0 << endl;
    cout << "f : " << f << endl;
    
    cout << "\ndouble" << endl;
    cout << setprecision(17);
    cout << d1 << endl;
    cout << d2 << endl;     // 오차가 누적이 된다.

    cout << posinf << " " << isnan(posinf) << endl;
    cout << neginf << " " << isnan(neginf) << endl;
    cout << nan << " " << isnan(nan) << endl;
    cout << 1.0 << " " << isnan(1.0) << endl;

    cout << posinf << " " << isinf(posinf) << endl;
    cout << neginf << " " << isinf(neginf) << endl;
    cout << nan << " " << isinf(nan) << endl;
    cout << 1.0 << " " << isinf(1.0) << endl;

    return 0;
}