/*
Write a C program to declare an integer variable, a pointer to the variable, and a pointer to that pointer. 
Display the value using x, *p, and **pp, along with the relevant addresses.
*/

#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Value of x: %d\n", x);
    printf("Value pointed by p: %d\n", *p);
    printf("Value pointed by **pp: %d\n", **pp);

    printf("Address of x: %p\n", (void*)&x);
    printf("Value of p: %p\n", (void*)p);
    printf("Value of pp: %p\n", (void*)pp);

    return 0;
}
