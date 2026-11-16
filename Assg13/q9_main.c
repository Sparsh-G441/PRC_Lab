/*
Determine and justify the output of a program containing int x = 25, int *p = &x, and int **q = &p. 
Verify the output by compiling the program and explain the effects of *p = 40 and **q = 75.
*/


#include <stdio.h>

int main()
{
    int x = 25;
    int *p = &x;
    int **q = &p;

    printf("Initial values:\n");
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**q = %d\n", **q);

    *p = 40;
    printf("\nAfter *p = 40:\n");
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**q = %d\n", **q);

    **q = 75;
    printf("\nAfter **q = 75:\n");
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**q = %d\n", **q);

    return 0;
}
