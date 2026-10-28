/*
Write a C program that calls the same function several times and 
compares the behaviour of an automatic variable with a static variable.
*/

#include<stdio.h>

void test()
{
    auto int x = 10; //Declaring local auto variable which destroys the value after function ends
    static int y = 5; //Declaring local static variable which preserves its value after function ends
    x += 10; 
    y += 5;

    printf("\nLocal auto = %d", x); //Prints value of auto variable
    printf("\nLocal Static = %d\n", y); //Prints value of static variable
}

int main()
{
    test();
    test();
    test();

    return 0;
}

//Static variable retains its value between function calls
//Scope of static variable is its function/block and lifetime is entire function call sequence 