/*5.	Prime Numbers in a Range
Write a C program to input two integers representing the lower and upper limits. 
Display all prime numbers within the given range and print the total number of prime numbers found. 
Use nested loops.
*/

#include<stdio.h>

int main()
{
    int a,b, count = 0;

    printf("Enter upper limit and lower limit: ");
    scanf("%d %d", &a,&b);

    for (int i = a; i <= b; i++)
    {
        int c = 1;
        for (int j = 2; j <= (i/2); j++)
        {
            if (i % j == 0)
            c = 0;
        }
        if (c == 1)
        {
            count++;
        }
    }

    if (a == 1) count--;
    else if (a == 0) count -= 2;

    if (count == 0)
    {
        printf("No prime numbers found");
    }
    else
    {
        printf("%d prime numbers found", count);
    }
    
    return 0;
}