/*Write a C program to create a menu-driven calculator that displays the following menu:
Addition, Subtraction, Multiplication, Division, Modulus, Power, Exit.
Requirements: 
•	Accept the user’s choice and perform the corresponding operation using a switch-case statement. 
•	Take two numbers as input for each calculation.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b;
    char op;

    menu:
    printf("\nEnter a, b: ");
    scanf("%f %f", &a, &b);

    printf("\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n5 Modulus\n6 Power\n7 Exit");
    printf("\nEnter operator ");
    scanf(" %c", &op);

    switch(op)
    {
        case '1':
        printf("Sum = %.1f", a + b);
        goto menu;
        break;

        case '2':
        printf("Difference = %.1f", a - b);
        goto menu;
        break;
        
        case '3':
        printf("Product = %.1f", a * b);
        goto menu;
        break;

        case '4':
        if (b == 0)
        {
            printf("Zero Division Error");
        }
        else
        {
            printf("Quotient = %.1f", a / b);
        }
        goto menu;
        break;

        case '5':
        if (b == 0)
        {
            printf("Zero Modulus Error");
        }
        else
        {
            printf("Remainder = %d", (int)a % (int)b);
        }
        goto menu;
        break;

        case '6':
        printf("Exponent = %.0f", pow(a,b));
        goto menu;
        break;

        case '7':
        printf("End of Program!!");
        break;
    }

    return 0;
}