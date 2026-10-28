#include<stdio.h>

static int A = 100; //Defining and Initialising static global variable

void print_static()
{
    printf("Value access from inside Q6_data.c: %d", A); // Accessing variable inside its source file
}