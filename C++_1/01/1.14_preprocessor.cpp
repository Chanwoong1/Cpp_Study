#include <iostream>
#include <algorithm>
using namespace std;

// ��ũ�� ���� - �� ���� �ȿ�����
#define MY_NUMBER 9
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE

int main()
{
    cout << MY_NUMBER << endl;
    cout << MAX(1 + 3, 2) << endl;  // ��ũ�ο��� ������ MAX
    cout << max(1 + 3, 2) << endl;  // <algorithm> ���� max

    #ifdef LIKE_APPLE   // LIKE_APPLE�� ���ǵǾ� �ִٸ�
    cout << "Apple" << endl;
    #endif              // ������� ����
    
    #ifndef LIKE_APPLE  // LIKE_APPLE�� ���ǵǾ����� �ʴٸ�
    cout << "Orange" << endl;
    #endif              // ������� ����

    // ���� ���� �ǹ�
    #ifdef LIKE_APPLE   // LIKE_APPLE�� ���ǵǾ� �ִٸ�
    cout << "Apple" << endl;
    #else               // LIKE_APPLE�� ���ǵǾ����� �ʴٸ�
    cout << "Orange" << endl;
    #endif              // ������� ����

    return 0;
}