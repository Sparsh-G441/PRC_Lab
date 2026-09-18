/*8.	Series Evaluation
Write a C program to input x and n and evaluate the following series:
S = x − (x^2)/2! + (x^3)/3! − (x^4)/4! +⋯+(−1)^(n+1) (x^n)/n!.
Calculate powers and factorials using loops without using pow() or a separate user-defined function.
*/

#include<stdio.h>

int main()
{
    int n, x;
    double sum = 0.0, a = 1.0;

    printf("Enter n and x: ");
    scanf("%d %d", &n, &x);

    for (int i = 1; i <= n; i++)
    {   
        double b = 1;
        for (int k = 1; k <= i; k++)
        {
            b *= x;
        }
        double f = 1;
        for (int l = 1; l <= i; l++)
        {
            f *= l;
        }
        sum += (a * b) / f;

        a *= -1;
    }
    printf("%lf", sum);

    return 0;
}