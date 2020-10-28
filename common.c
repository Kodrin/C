#include "common.h"



//you can declare functions anywhere
void PrintHello()
{
    printf("Hello print function \n");
}

//pointers are useful for changing values between functions (liek ref for c#)
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_no_pointers(int x, int y)
{
    x = y;
}


void change_int_value(int *input, int newValue)
{
    *input = newValue;
}
