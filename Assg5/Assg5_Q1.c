/*1.	Date Validation
Write a C program that accepts input as day, month, and year. Determine whether the date is valid. Consider:
•	Months with 30 or 31 days
•	February with 28 days
•	February with 29 days in a leap year
•	Invalid years, months, and days
Use nested if statements without switch-case.
*/


#include<stdio.h>

int main()
{
    int d, m, y;

    printf("Enter date, month, year ");
    scanf("%d %d %d", &d, &m, &y);

    if (y > 0)
    {
        if (m >=1 && m <= 12)
        {
            if (m == 2)
            {
                if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)

                {
                    if (d >= 1 && d <= 29)
                    {
                        printf("Valid date");
                    }
                }
                else if (d >= 1 && d <= 28)
                {
                    printf("Valid date");
                }
                else
                {
                    printf("Invalid Date");
                }
            }
            else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            {
                if (d >= 1 && d <= 31)
                {
                    printf("Valid Date");
                }
                else
                {
                    printf("Invalid Date");
                }
            }
            else if (m == 4 || m == 6 || m == 9 || m == 11)
            {
                if (d >= 1 && d <= 30)
                {
                    printf("Valid Date");
                }
                else
                {
                    printf("Invalid Date");
                }
            }
            else
            {
                printf("Invalid Date");

            }
        }
        else
        {
            printf("Invalid Date");
        }    
    }
    else 
    {
        printf("Invalid Date");
    }
    return 0;
}         
            
    
    
