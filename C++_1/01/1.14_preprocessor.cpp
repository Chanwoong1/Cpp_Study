#include <iostream>
#include <algorithm>
using namespace std;

// 매크로 정의 - 이 파일 안에서만
#define MY_NUMBER 9
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE

int main()
{
    cout << MY_NUMBER << endl;
    cout << MAX(1 + 3, 2) << endl;  // 매크로에서 정의한 MAX
    cout << max(1 + 3, 2) << endl;  // <algorithm> 안의 max

    #ifdef LIKE_APPLE   // LIKE_APPLE이 정의되어 있다면
    cout << "Apple" << endl;
    #endif              // 여기까지 실행
    
    #ifndef LIKE_APPLE  // LIKE_APPLE이 정의되어있지 않다면
    cout << "Orange" << endl;
    #endif              // 여기까지 실행

    // 위와 같은 의미
    #ifdef LIKE_APPLE   // LIKE_APPLE이 정의되어 있다면
    cout << "Apple" << endl;
    #else               // LIKE_APPLE이 정의되어있지 않다면
    cout << "Orange" << endl;
    #endif              // 여기까지 실행

    return 0;
}