/*
5.	Largest and Smallest Elements in an Array
Write a C program to find the largest, second-largest, smallest, and second-smallest elements in an array without sorting it
*/

#include<stdio.h>

int main()
{
    int n, i, a[20], max, min, smax, smin;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = min = smax = smin = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        max = a[i];

        if (a[i] < min)
        min = a[i];
    }

    for (i = 0; i < n; i++)
    {

        if (smax == max)
        {
            smax = a[i + 1];
        }

        if (a[i] > smax)
        {
            if (a[i] == max)
            continue;

            else
            smax = a[i];
        }

        if (smin == min)
        {
            smin = a[i + 1];
        }

        if (a[i] < smin)
        {
            if (a[i] == min)
            continue;

            else
            smin = a[i];
        }

    }

    printf("\nLargest = %d, Smallest = %d", max, min);
    printf("\nSecond Largest = %d, Second Smallest = %d", smax, smin);

    return 0;
}