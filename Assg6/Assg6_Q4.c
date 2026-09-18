/*4.	Perfect Number
Write a C program to input a positive integer and determine whether it is a perfect number. 
A perfect number is equal to the sum of its positive divisors excluding itself. 
For example: 6=1+2+3.
*/

#include<stdio.h>

int main()
{
    int n, sum = 0; 

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }

    return 0;
}