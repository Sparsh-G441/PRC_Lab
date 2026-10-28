/*
Write a C program using the register storage class 
to calculate the sum of the elements of an array.
*/

#include<stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50}, i;
    register int sum = 0;

    for(i = 0; i < 5; i++)
    {
        sum += a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}