/*4.  GCD and LCM
Write pass-by-value functions to calculate the GCD and LCM of three positive integers.
*/

#include<stdio.h>

int gcd(int , int, int);
int lcm(int, int, int);
int lcm_2(int, int);
int gcd_2(int, int);


int main()
{
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("GCD of the provided integers is: %d\n", gcd(a, b, c));
    printf("LCM of the provided integers is: %d\n", lcm(a, b, c));

    return 0;
}

int gcd_2(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int gcd (int x, int y, int z)
{
    return gcd_2(gcd_2(x, y), z);
}

int lcm_2(int x, int y)
{
    return (x / gcd_2(x, y)) * y;
}

int lcm(int x, int y, int z)
{
    return lcm_2(lcm_2(x, y), z);
}