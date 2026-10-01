/*Arithmetic Operations
Write separate pass-by-value functions to calculate 
the addition, subtraction, multiplication, division, and modulus of two integers. 
Handle division and modulus by zero.
*/

#include<Stdio.h>

int add(int , int); 
int sub(int , int);
int multi(int , int); 
int div(int , int); 
int mod(int , int);

int main()
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("\nSum = %d", add(x, y));
    printf("\nDifference = %d", sub(x, y));
    printf("\nProduct = %d", multi(x, y));
    if (y == 0)
    {
        printf("\nZero Division Error");
    }
    else
    {
        printf("\nQuotient = %d", div(x, y));
    }
    if (y == 0)
    {
        printf("\nZero Modulus Error");
    }
    else
    {
        printf("\nModulus = %d", mod(x, y));
    }

    return 0;    
}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}