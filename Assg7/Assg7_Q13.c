/*13.	Transpose and Symmetry of a Matrix
Write a C program to input a square matrix and find its transpose. 
Compare the original matrix with its transpose and determine whether the matrix is symmetric, skew-symmetric, or neither. 
Display the transpose and the result.
*/

#include<stdio.h>

int main()
{
    int i, j, n, a[20][20], b[20][20], sym = 1, sksym = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Order can not be zero.");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    printf("\nTranspose Matrix: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                sym = 0;
            }
            else if (a[i][j] != -b[i][j])
            {
                sksym = 0;
            }
        }
    }

    if (sym == 1)
    {
        printf("\nMatrix is symmetric.");
    }
    else if (sksym == 1)
    {
        printf("\nMatrix is skew-symmetric.");
    }
    else
    {
        printf("\nMatrix is neither symmetric nor skew-symmetric.");
    }

    return 0;
}