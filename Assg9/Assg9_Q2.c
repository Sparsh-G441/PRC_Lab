/*Number Classification
Write pass-by-value functions to check whether a number is even or odd, positive, negative or zero, prime, and perfect. Display a complete classification report.
*/

#include<Stdio.h>

int iseven(int);
int nline(int); 
int prime(int); 
int perfect(int); 

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (iseven(n) == 0)
    {
        printf("\nOdd");
    }
    else printf("\nEven");

    if (nline(n) == -1)
    {
        printf("\nNumber is zero");
    }
    else if (nline(n) == 0)
    {
        printf("\nNumber is negative");
    }
    else printf("\nNumber is positive");

    if (prime(n) == 0)
    {
        printf("\nNot Prime");
    }
    else printf("\nPrime");

    if (perfect(n) == 0)
    {
        printf("\nNot a Perfect Number");
    }
    else printf("\nPerfect Number");

    return 0;
}

int iseven(int n)
{
    return n % 2 == 0;
}
int nline(int n)
{
    if (n == 0) 
    {
        return -1;
    }
    else return n > 0;
}
int prime(int n)
{ 
    if (nline(n) == 0 || nline(n) == -1)
    {
        return 0;
    }
    else
    {
    int p = 0; 
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            p = 1;
        }
    }
    return p == 0;
    }
}
int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}