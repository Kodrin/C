#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

//Common functions and type defs accross programs

//you can declare functions anywhere
void PrintHello();
//pointers are useful for changing values between functions (liek ref for c#)
void swap(int* x, int* y);
void swap_no_pointers(int x, int y);
void change_int_value(int *input, int newValue);

#endif // COMMON_H_INCLUDED
