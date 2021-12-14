#include <iostream>
#include "1.12_doSomething.h"
#include "1.12_add.h"
// header guard가 있다면 include를 두 번 이상 해도 문제가 생기지 않는다.

using namespace std;

int main()
{
    doSomething();
    return 0;
}