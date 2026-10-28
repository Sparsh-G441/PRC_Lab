/*
Write a C program using two source files to 
demonstrate the use of extern for accessing a global variable.
*/

#include<stdio.h>

extern int A; //Declares the varibale in this file

int main()
{
    printf("Extern Variable A = %d", A);

    return 0;
}