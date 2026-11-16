/*
Write a C program to read a one-dimensional integer array and define the function:
void separate_elements(int *arr, int n, int *even, int *even_count, int *odd, int *odd_count);
Store even and odd elements in separate arrays and return their counts using pointer parameters. 
Display the original array, even elements, odd elements, and their respective counts.
Function with Multiple Pointer Parameters.
*/

#include<stdio.h>

void separate_elements(int *arr, int n, int *even, int *even_count, int *odd, int *odd_count);

int main()
{
    int n, i;
    int even_count = 0, odd_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input! Please enter a positive size.\n");
        return 0;
    }

    int arr[n], even[n], odd[n];

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    separate_elements(arr, n, even, &even_count, odd, &odd_count);

    printf("\nOriginal array (%d elements):\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEven elements (%d):\n", even_count);
    for (i = 0; i < even_count; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\n\nOdd elements (%d):\n", odd_count);
    for (i = 0; i < odd_count; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}

void separate_elements(int *arr, int n, int *even, int *even_count, int *odd, int *odd_count)
{
    int i;
    *even_count = 0;
    *odd_count = 0;

    for (i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            *(even + *even_count) = *(arr + i);
            (*even_count)++;
        }
        else
        {
            *(odd + *odd_count) = *(arr + i);
            (*odd_count)++;
        }
    }
}