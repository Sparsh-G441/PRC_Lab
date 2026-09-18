/*9.	Menu-Driven Number Operations
Write a C program that repeatedly displays the following menu:
1. Check Palindrome
2. Check Armstrong Number
3. Check Prime Number
4. Find Sum of Digits
5. Count the number of Digits of an integer
6. Exit
*/

#include <stdio.h>

int main() {
    int choice, num;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits of an integer\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: 
            {
                printf("Enter an integer: ");
                scanf("%d", &num);

                int original = num, reversed = 0, remainder, temp = num;
                if (temp < 0)
                    temp = -temp;

                while (temp > 0) 
                {
                    remainder = temp % 10;
                    reversed = reversed * 10 + remainder;
                    temp /= 10;
                }

                if (original == reversed)
                    printf("%d is a Palindrome.\n", original);
                else
                    printf("%d is NOT a Palindrome.\n", original);
                break;
            }

            case 2: 
            {
                printf("Enter an integer: ");
                scanf("%d", &num);

                int original = num, digits = 0, sum = 0, temp = num;

                if (num < 0) 
                {
                    printf("%d is not an Armstrong Number.\n", num);
                    break;
                }

                temp = num;
                while (temp > 0) 
                {
                    digits++;
                    temp /= 10;
                }

                temp = num;
                while (temp > 0) 
                {
                    int remainder = temp % 10;
                    int power = 1;
                    for (int i = 0; i < digits; i++)
                        power *= remainder;
                    sum += power;
                    temp /= 10;
                }

                if (sum == original)
                    printf("%d is an Armstrong Number.\n", original);
                else
                    printf("%d is not an Armstrong Number.\n", original);
                break;
            }

            case 3: 
            {
                printf("Enter an integer: ");
                scanf("%d", &num);

                int isPrime = 1;
                if (num <= 1) 
                {
                    isPrime = 0;
                } 
                else 
                {
                    for (int i = 2; i <= num / 2; i++) 
                    {
                        if (num % i == 0) 
                        {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime)
                    printf("%d is a Prime Number.\n", num);
                else
                    printf("%d is not a Prime Number.\n", num);
                break;
            }

            case 4: 
            {
                printf("Enter an integer: ");
                scanf("%d", &num);

                int sum = 0, temp = num;
                if (temp < 0)
                    temp = -temp;

                while (temp != 0) 
                {
                    sum += temp % 10;
                    temp /= 10;
                }

                printf("Sum of digits of %d is %d.\n", num, sum);
                break;
            }

            case 5: 
            {
                printf("Enter an integer: ");
                scanf("%d", &num);

                int count = 0, temp = num;
                if (temp < 0)
                    temp = -temp;

                if (temp == 0) 
                {
                    count = 1;
                } 
                else 
                {
                    while (temp > 0) 
                    {
                        count++;
                        temp /= 10;
                    }
                }

                printf("Number of digits in %d is %d.\n", num, count);
                break;
            }

            case 6:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option (1-6).\n");
        }

    } while (choice != 6);

    return 0;
}