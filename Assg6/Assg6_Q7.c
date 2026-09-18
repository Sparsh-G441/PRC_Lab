/*7.	Decimal-to-Binary Conversion
Write a C program to input a positive decimal integer and convert it into binary using a loop. 
Do not use arrays, strings, or library conversion functions.
*/

#include<Stdio.h>

int main()
{
    int n, power = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    int original = n;
    int temp = n;

    while(power <= n / 2)
    {
        power *= 2;
    }

    while(power > 0)
    {
        if (n >= power)
        {
            printf("1");
            n -= power;
        }
        else
        {
            printf("0");
        }
        power /= 2;
    }

    return 0;
}