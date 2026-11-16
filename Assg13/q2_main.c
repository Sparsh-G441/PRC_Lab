/*
Write a C program to read an integer value and modify it through a pointer. 
Increase the value by 10 using the pointer and display the original and modified values.
*/

#include <stdio.h>

int main() 
{
    int var;
    printf("Enter an integer value: ");
    scanf("%d", &var);
    int *ptr = &var;
    int original = *ptr;
    *ptr += 10;
    printf("Original value: %d\n", original);
    printf("Modified value: %d\n", var);
    return 0;
}