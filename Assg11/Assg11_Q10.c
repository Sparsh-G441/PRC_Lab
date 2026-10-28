/*
Create a two-file C program for managing a bank balance. 
The balance must be accessible only through functions, 
using static and extern appropriately.
*/

#include <stdio.h>

extern void deposit(double amount);
extern void withdraw(double amount);
extern double get_balance();

int main() 
{
    printf("Initial Balance: $%.2f\n\n", get_balance());

    deposit(500.50);
    withdraw(150.00);
    
    withdraw(1000.00); 

    printf("\nFinal Balance: $%.2f\n", get_balance());
    
    return 0;
}
