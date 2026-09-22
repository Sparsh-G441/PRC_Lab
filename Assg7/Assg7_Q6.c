/*6.	Reversing an Array
Write a C program to input n elements into an array and reverse their order without using another array. Display the array before and after reversal.
*/

#include<stdio.h>

int main()
{
    int n, i, a[20], rev;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nArray Before Reversal: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n/2; i++)
    {
        rev = a[i];
        a[i] = a[n - 1 -i];
        a[n - 1 - i] = rev;
    }

    printf("\nArray After Reversal: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}