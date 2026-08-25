#include<stdio.h>

int main()
{
    int a;
    float b,c;
    int x;
    float y,z;

    //Implicit Type Conversion

    printf("Enter integer: ");
    scanf("%d", &a);
    printf("Enter floating point: ");
    scanf("%f", &b);

    printf("\nImplicit Type Conversion\n");

    c = a + b;
    printf("Addition = %.2f\n", c);
    c = a - b;
    printf("Subtraction = %.2f\n", c);
    c = a * b;
    printf("Multiplication = %.2f\n", c);
    c = a / b;
    printf("Division = %.2f\n", c);

    //Explicit Type Conversion

    printf("\nEnter integer: ");
    scanf("%d", &x);
    printf("Enter floating point: ");
    scanf("%f", &y);

    printf("\nExplicit Type Conversion\n");

    z = (float)x + y;
    printf("Addition = %.2f\n", z);
    z = (float)x - y;
    printf("Subtraction = %.2f\n", z);
    z = (float)x * y;
    printf("Multiplication = %.2f\n", z);
    z = (float)x / y;
    printf("Division = %.2f\n", z);

    return 0;

}