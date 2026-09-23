/*11. Multiplication of Two Matrices
Write a C program to input two matrices. 
Check whether they can be multiplied. 
If multiplication is possible, calculate and display the product matrix; otherwise, display an appropriate message.
*/

#include<stdio.h>

int main()
{
    int i, j, k, m, n, p, q, a[20][20], b[20][20], c[20][20];

    printf("Enter rows and columns of Matrix 1: ");
    scanf("%d %d", &m, &n);

    if (m == 0 || n == 0) 
    {
        printf("Rows or Columns must not equal to 0");
        return 0;
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of Matrix 2: ");
    scanf("%d %d", &p, &q);

    if (p == 0 || q == 0) 
    {
        printf("Rows or Columns must not equal to 0");
        return 0;
    }

    if (n != p)
    {
        printf("Columns of Matrix 1 must be equal to rows of Matrix 2 for Multiplication.");
        return 0;
    }

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < p; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j]; 
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}