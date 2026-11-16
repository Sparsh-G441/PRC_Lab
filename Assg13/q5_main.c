/*
Write a C program to read a one-dimensional integer array and define the function:
void remove_duplicates(int *arr, int n, int *result, int *new_size);
Store only the distinct elements in result, return the number of distinct elements through new_size,
and preserve the original order of the elements. Use pointer notation to access the array elements.
*/

#include <stdio.h>

void remove_duplicates(int *arr, int n, int *result, int *new_size)
{
    int i, j;
    *new_size = 0;

    for (i = 0; i < n; i++)
    {
        int is_duplicate = 0;
        for (j = 0; j < *new_size; j++)
        {
            if (*(result + j) == *(arr + i))
            {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate)
        {
            *(result + *new_size) = *(arr + i);
            (*new_size)++;
        }
    }
}

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input! Please enter a positive size.\n");
        return 0;
    }

    int arr[n], result[n], new_size;

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    remove_duplicates(arr, n, result, &new_size);

    printf("\nOriginal array (%d elements):\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nArray after removing duplicates (%d elements):\n", new_size);
    for (i = 0; i < new_size; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}