/*14.	Diagonal and Triangular Matrix
Write a C program to input a square matrix and calculate the sums of its main and secondary diagonal elements. 
Also determine whether the given matrix is upper triangular, lower triangular, diagonal, or none of these.
*/

#include<stdio.h>

int main()
{
    int n, i, j, a[20][20], psum = 0, ssum = 0, utm = 1, ltm = 1, dm = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Order must not be zero.");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j && a[i][j] != 0)
            {
                utm = 0;
            }
            if (i < j && a[i][j] != 0)
            {
                ltm = 0;
            }
            if (i != j && a[i][j] != 0)
            {
                dm = 0;
            }
        }
        psum += a[i][i];
        ssum += a[i][n - 1 -i];
    }

    printf("\nSum of Primary Diagonal = %d", psum);
    printf("\nSum of Secondary Diagonal = %d", ssum);

    if (dm == 1)
    {
        printf("\nDiagonal Matrix");
    }
    else if (utm == 1)
    {
        printf("\nUpper Triangular Matrix");
    }
    else if (ltm == 1)
    {
        printf("\nLower Triangular Matrix");
    }
    else
    {
        printf("\nMatrix is neither Upper Triangular, Lower Triangular or Diagonal.");
    }

    return 0;
}