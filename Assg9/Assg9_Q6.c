/*Arithmetic Operations Using Pointers
Write one function that returns the sum, difference, product, and quotient of two integers through pointer parameters. 
Handle division by zero.
*/

#include<Stdio.h>

void calculate(int a, int b, int *sum, int *sub, int *pro, float *div)
{
    *sum = a + b;
    *sub = a - b;
    *pro = a * b;
    if (b != 0) 
    *div = (float)a / (float)b;
}

int main()
{
    int a, b, sum, difference, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b, &sum, &difference, &product, &quotient);

    printf("Sum = %d\nDifference = %d\nProduct = %d\n", sum, difference, product);
    if (b != 0)
    printf("Quotient = %.2f\n", quotient);
    else
    printf("Division by zero is not allowed.\n");
}
