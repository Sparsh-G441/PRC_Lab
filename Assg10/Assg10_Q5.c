/*5. Recursive Binary Search
Write a C program to search for a given element in a sorted array using recursive binary search.
*/

#include<stdio.h>

int find(int a[], int l, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2; 

    if (a[mid] == l)
    {
        return mid;
    }
    
    if (a[mid] > l)
    {
        return find(a, l, start, mid - 1);
    }
    
    return find(a, l, mid + 1, end);

}


int main()
{
    int a[100], i, n, p, l;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter Sorted Array\n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to find: ");
    scanf("%d", &l);

    p = find(a, l, 0, n - 1);

    if (p == -1) printf("Element not found.");
    else
    {
    printf("Element found at position %d", p + 1);
    }

    return 0;
}

