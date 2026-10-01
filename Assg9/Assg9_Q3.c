/*Number Operations
Using pass-by-value functions, find the sum of digits, count the digits, and reverse an integer. 
Also determine whether the number is a palindrome.
*/

#include<Stdio.h>

int sumod(int);
int cod(int);
int rev(int);
int pal(int);

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("\nSum of Digits: %d", sumod(n));
    printf("\nNumber of digits: %d", cod(n));
    printf("\nReversed number = %d", rev(n));
    if (pal(n) == 0)
    {
        printf("\nNot Palindrome");
    }
    else printf("\nPalindrome");

    return 0;
}

int sumod(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}
int cod(int n)
{
    int c;
    while (n > 0)
    {
        c++;
        n /= 10;
    }
    return c;
}
int rev(int n)
{
    int place = 1, reverse = 0;
    while (n > 0)
    {
        int rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    return reverse;
}
int pal(int n)
{
    return rev(n) == n;
}


