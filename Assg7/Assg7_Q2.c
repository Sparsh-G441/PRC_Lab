/*
2.	Search an element in an Array
Write a C program to search for a given element in an array. Display all its positions and total number of occurrences. If it is not found, display an appropriate message.
*/

#include<stdio.h>

int main()
{
    int n, i, count = 0, find, p = -1, a[20];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to find: ");
    scanf("%d", &find);

    for (i = 0; i < n; i++)
    {
        if (a[i] == find)
        {
            printf("\nElement found at position %d", i + 1);
            count++;
            p = 0;
        }
    }

    if (p == -1)
    {
        printf("\nElement not found in array.");
    }
    else
    {
        printf("\nTotal occurences = %d", count);
    }

    return 0;
}