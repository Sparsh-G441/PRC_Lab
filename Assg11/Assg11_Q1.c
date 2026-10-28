/*
Write a C program to demonstrate that an automatic variable is 
created when a block is entered and destroyed when the block is exited.
*/

#include<stdio.h>

void display()
{
    auto int x = 20; // Assigning 20 to auto variable inside main function
    printf("Auto variable = %d", x);

    {
        auto int x = 100; // Assigning 100 to auto variable inside block
        printf("\nInside inner block = %d", x);
    }

    printf("\nOutside inner block = %d", x); // Inner block value is destroyed

}

int main()
{
    display();
    return 0;
}

//Scope of local auto variable is its block/function.
//Lifetime of local variable is until the block/function ends.

