#include<stdio.h>
static double account_balance = 0.0;

void deposit(double amount) 
{
    if (amount > 0) 
    {
        account_balance += amount;
        printf("Deposited: $%.2f\n", amount);
    } 
    else 
    {
        printf("Error: Deposit amount must be positive.\n");
    }
}
void withdraw(double amount) 
{
    if (amount <= 0) 
    {
        printf("Error: Withdrawal amount must be positive.\n");
    } 
    else if (amount > account_balance) 
    {
        printf("Error: Insufficient funds for withdrawal of $%.2f\n", amount);
    } 
    else 
    {
        account_balance -= amount;
        printf("Withdrew: $%.2f\n", amount);
    }
}
double get_balance() 
{
    return account_balance;
}