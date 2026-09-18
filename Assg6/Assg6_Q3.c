/*3.	Palindrome Number
Write a C program to input a positive integer and determine whether it is a palindrome using a loop.
*/

#include<stdio.h>

int main()
{
    long long int n, reverse = 0;

    printf("Enter n: ");
    scanf("%lld", &n);
    long long int original = n;

    while (n > 0)
    {
        int remainder = n % 10;
        reverse = remainder + reverse*10;
        n /= 10;
    }

    if (original == reverse)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindorme");
    }
    return 0;
}