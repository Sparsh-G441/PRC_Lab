/*5.	Bank Transaction Menu
Write a C program to implement a menu-driven banking system with the following options:
•	Check balance 
•	Deposit money 
•	Withdraw money 
•	Calculate annual simple interest 
•	 Exit 
Requirements
•	Initialize the account with a balance of ₹5,000. 
•	Use a loop to display the menu repeatedly until the user selects Exit. 
•	Use a switch-case statement to perform the selected operation.
*/

#include<stdio.h>

int main() 
{
    int choice;
    int loop = 0;
    float bal = 5000.0;
    float amount, rate, time, interest;

    printf("=== Welcome to the Bank Transaction System ===\n");

    while (loop == 0) 
    {
        printf("\n--- Banking Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Calculate Annual Simple Interest\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("\nYour current balance is: Rs.%.2f\n", bal);
                break;

            case 2:
                printf("\nEnter amount to deposit: Rs.");
                scanf("%f", &amount);
                if (amount > 0) 
                {
                    bal += amount;
                    printf("Rs.%.2f deposited successfully.\n", amount);
                    printf("New balance: Rs.%.2f\n", bal);
                } else 
                {
                    printf("Invalid amount! Deposit amount must be greater than zero.\n");
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: Rs.");
                scanf("%f", &amount);
                if (amount > 0) 
                {
                    if (amount <= bal) 
                    {
                        bal -= amount;
                        printf("Rs.%.2f withdrawn successfully.\n", amount);
                        printf("Remaining balance: Rs.%.2f\n", bal);
                    } 
                    else 
                    {
                        printf("Insufficient balance! Transaction failed.\n");
                    }
                } 
                else 
                {
                    printf("Invalid amount! Withdrawal amount must be greater than zero.\n");
                }
                break;

            case 4:
                printf("\nEnter the annual rate of interest (in %%): ");
                scanf("%f", &rate);
                printf("Enter the time period (in years): ");
                scanf("%f", &time);
                
                if (rate >= 0 && time >= 0) 
                {
                    interest = (bal * rate * time) / 100;
                    printf("\nCalculated Simple Interest on Rs.%.2f:\n", bal);
                    printf("Interest Earned: Rs.%.2f\n", interest);
                    printf("Total value after %.1f years: Rs.%.2f\n", time, bal + interest);
                } 
                else 
                {
                    printf("Invalid input! Rate and time cannot be negative.\n");
                }
                break;

            case 5:
                printf("\nThank you for banking with us. Goodbye!\n");
                loop = 1;
                break;

            default:
                printf("\nInvalid choice! Please select a valid option between 1 and 5.\n");
        }
    }

    return 0;
}