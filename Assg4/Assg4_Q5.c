#include<stdio.h>
#include<math.h>

int main()
{

    float a,b;
    printf("Enter 2 numbers ");
    scanf("%f %f", &a, &b);

    printf("Sum= %.2f", a + b);
    printf("\nDifference= %.2f", a - b);
    printf("\nProduct= %.2f", a * b);
    printf("\nQuotient= %.2f", a / b);
    printf("\nRemainder= %d", (int)a % (int)b);
    printf("\nPower= %.2f", pow(a,b));
    printf("\nSquare rt 1= %.2f", sqrt(a));
    printf("\nSquare rt 2= %.2f", sqrt(b));
    printf("\nAbsolute Value 1= %d", abs(a));
    printf("\nAbsolute Value 2= %d", abs(b));
    printf("\nFloor value 1= %.2f", floor(a));
    printf("\nFloor value 2= %.2f", floor(b));
    printf("\nCeil value 1= %.2f", ceil(a));
    printf("\nCeil value 2= %.2f", ceil(b));
     return 0;
}