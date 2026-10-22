/*6. Occurrences of the Maximum Element
Write a C program to find the maximum element in an array and count the number of times it occurs using recursion.
*/

#include<stdio.h>

void max_count(int a[], int n, int i, int *max, int *count)
{
    if (i == n)
    {
        return;
    }

    if (a[i] > *max)
    {
        *max = a[i];
        *count = 1;
    }

    else if (a[i] == *max)
    {
        (*count)++;
    }

    return max_count(a, n, i + 1, max, count);
}

int main()
{
    int n, i, a[100], max, count;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    count = 1;

    max_count(a, n, 1, &max, &count);

    printf("Max element = %d\nNumber of occurence = %d", max, count);

    return 0;
}

