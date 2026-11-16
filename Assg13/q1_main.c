/*
Write a C program to declare an integer variable and an integer pointer. Assign the address
of the variable to the pointer and display the value, address, pointer value, and dereferenced value.
*/

#include <stdio.h>

int main() 
{
    int var = 10;
    int *ptr = &var;

    printf("Value of variable: %d\n", var);
    printf("Address of variable: %p\n", (void*)&var);
    printf("Value of pointer: %p\n", (void*)ptr);
    printf("Dereferenced value: %d\n", *ptr);

    return 0;
}