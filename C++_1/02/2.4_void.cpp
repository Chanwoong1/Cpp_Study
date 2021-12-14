#include <iostream>

void my_function()  // return x
{

}

int main()
{
    int i = 123;
    float f = 123.456f;

    void *my_void;

    my_void = (void*)&i;
    my_void = (void*)&f;

    return 0;
}