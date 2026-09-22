/*1. Array Traversal, Sum, and Average
Write a C program to input n elements into a one-dimensional array. Display all the elements of the array and calculate and display their sum and average.
*/

#include<stdio.h>

int main()
{
    int n, i, a[20];
    float sum = 0, average;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        sum += a[i];
    }
    average = sum / n;

    printf("\nSum = %.2f, Average = %.2f", sum, average);

    return 0;
}