/*
Write a C program to demonstrate that a global variable declared 
with static can be accessed only within the same source file.
*/

#include<stdio.h>

void print_static(); //Declaring that a function print_static exists in another file.

extern int A; // Using extern to access variable fromm other file

int main()
{
    print_static(); //Calling print function from Q6_data.c

    A = 200;
    printf("Direct Access: %d", A);
    
    return 0;
}