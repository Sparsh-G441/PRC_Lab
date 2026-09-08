/*2.	Quadratic Equation Analysis
Write a C program that accepts input as coefficients a, b, and c of quadratic equation ax^2+bx+c=0. Your program must 
•	Reject a = 0.
•	Calculate the discriminant.
•	Determine whether the roots are real and distinct, real and equal, or imaginary.
•	Calculate and display the roots whenever they are real.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c; 
    float r1, r2;

    printf("Enter coeeficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0)
    {
        printf("Not a Quadratic Equation.");
        return 0;
    }

    float d = b*b - 4*a*c;

    if (d > 0)
    {
        printf("Real and Distinct roots");
        r1 = (-b + sqrt(d)) / 2*a;
        r2 = (-b - sqrt(d)) / 2*a;
        printf("\nRoot 1 = %f", r1);
        printf("\nRoot 2 = %f", r2);
    }
    else if (d == 0)
    {
        printf("Real and Equal roots");
        r1 = -b / 2*a;
        printf("\nRoot 1 and 2 = %f", r1); 
    }
    else
    {
        printf("imaginary Roots");
    }

    return 0;
}