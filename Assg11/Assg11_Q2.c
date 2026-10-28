/*
Write a C program to demonstrate how a 
local variable hides a global variable with the same name.
*/

#include<stdio.h>

int MAX = 100; // Declaring global variable MAX

void display_local()
{
    int MAX = 200; //Declaring Local Variable MAX
    printf("Local MAX = %d", MAX); //Prints local variable instead of global variable MAX
}

int main()
{
    display_local();
    printf("\nGlobal MAX = %d", MAX); //Prints Global Variable 

    return 0;
}

//Scope of Global variable is the whole programe file.
//Lifetime of Global Variable is the programe execution.
//Scope of local variable is its block/function but has more priority than globval variable.
//Lifetime of local variable is its block/function execution.