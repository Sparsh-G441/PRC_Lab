/*8. Merging Two Arrays
Write a C program to input two arrays, merge their elements into a third array, and display the resulting merged array.
*/

#include<stdio.h>

int main()
{
    int i, n1, n2, n3, a[20], b[20], c[40];
    
    printf("Enter number of elements for Array 1: ");
    scanf("%d", &n1);

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements for Array 2: ");
    scanf("%d", &n2);

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    n3 = n1 + n2;

    for (i = 0; i < n3; i++)
    {
        if (i < n1)
        {
            c[i] = a[i];
        }
        if (i >= n1)
        {
            c[i] = b[i - n1];
        } 
    }

    printf("\nMerged Array: \n");

    for (i = 0; i < n3; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;

}