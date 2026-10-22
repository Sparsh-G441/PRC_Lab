/*4. Second-Largest Element
Write a C program to find the second-largest distinct element in an array using recursion. 
Display a suitable message if fewer than two distinct elements exist.
*/

#include<stdio.h>
#include<limits.h>

int find(int a[], int n, int max, int smax)
{
    if (n < 0)
    {
        return smax;
    }

    if (a[n] > max)
    {
        smax = max;
        max = a[n];
    }
    else if (a[n] > smax && a[n] != max)
    {
        smax = a[n];
    }
    
    return find(a, n - 1, max, smax);
}

int main()
{
    int a[100], i, n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = INT_MIN;
    int smax = INT_MIN;

    smax = find(a, n - 1, max, smax);

    if (smax == INT_MIN)
    {
        printf("No distinct second largest element exists.");
    }
    else
    {
    printf("Second Largest = %d", smax);
    }

    return 0;
}