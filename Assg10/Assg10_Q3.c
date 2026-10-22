/*3. Reverse an Array
Write a C program to reverse the elements of a one-dimensional array using recursion.
*/

#include<stdio.h>

int rev(int a[], int start, int end)
{
    if (start >= end)
    {
        return 0;
    }
    else
    {
        int temp;
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        rev(a, start + 1, end - 1);
    }
}

int main()
{
    int a[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    rev(a, 0, n - 1);

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;

}