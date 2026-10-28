/*
Write a C program using a static local variable to 
count how many times a function has been called.
*/

#include<stdio.h>

void count()
{
    static int c = 1; //Declaring static variable
    printf("\nThis is call number %d", c);
    c++; //Static variable retains its value after every call and can be used as a counter.
}

int main()
{
    for (int i = 1; i <= 5; i++) //Using a loop to call function multiple times
    {
        count();
    }

    return 0;
}