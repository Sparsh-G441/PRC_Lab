/*
Write a C program using two source files in which one source file defines
a global variable and another source file modifies it using extern.
*/

#include<stdio.h>

int A = 100;

void modify();

int main()
{
    printf("Initial Value of A: %d", A);

    modify();

    printf("\nValue after change through modify(): %d", A);

    return 0;
}