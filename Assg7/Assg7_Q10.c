/*10. Addition of Two Matrices
Write a C program to input two matrices of the same order. 
Calculate their sum and display the resulting matrix. 
If the matrices have different orders, display an appropriate message.
*/

#include<Stdio.h>

int main()
{
    int i, j, m, n, p, q, a[20][20], b[20][20], c[20][20];
    
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

    if (m != p || n != q)
    {
        printf("Order of both matrices must be same.");
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
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nNew Matrix: \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}