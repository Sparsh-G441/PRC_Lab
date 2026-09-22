/*7. Sorting an Array
Write a C program to input n elements into an array and arrange them in ascending order. Display the array before and after sorting.
*/

#include<stdio.h>

int main()
{
    int i, j, n, a[20], rep;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nArray Before Sorting: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int o = n;

    for (j = 0; j < o - 1; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            rep = 0;
            if (a[i] > a[i + 1])
            {
                rep = a[i];
                a[i] = a[i + 1];
                a[i + 1] = rep;
            }
        }
        n--;
    }

    printf("\nArray After Sorting: \n");

    for (i = 0; i < o; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}