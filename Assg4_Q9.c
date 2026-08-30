#include<stdio.h>

int main()
{
    float a, b, c, d, e, f, g;
    float result1, result2;
    printf("Enter 7 numbers: ");
    scanf("%f %f %f %f %f %f %f", &a,&b,&c,&d,&e,&f,&g);
    

    if (e == 0)
    {
        printf("\nDivision by zero error");
    }
    else if (g == 0)
    {
        printf("\nModulus by zero error");
    }
    else
    {
        result1 = a + b * c - d / e + (int)f % (int)g;
        result2 = a + (b * c) - (d / e) + ((int)f % (int)g);
        printf("\nResult 1 = %.2f", result1);
        printf("\nResult 2 = %.2f", result2);
    }
    return 0;

}