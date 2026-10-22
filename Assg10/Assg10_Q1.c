/*1. Factorial of a Positive Integer
Write a C program using a recursive function to find the factorial of a positive integer.
*/

#include<stdio.h>

long long fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
    return n * fact(n - 1);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Factorial = %d", fact(n));

    return 0;
}