/*12.	Row-wise and Column-wise Sums
Write a C program to input an m by n matrix. Calculate and display the sum of the elements in each row and each column.
*/

#include<stdio.h>

int main()
{
    int i, j, m, n, sum, a[20][20];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    if (m == 0 || n == 0)
    {
        printf("Rows or Columns must not be zero.");
        return 0;
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < m; j++)
        {
            sum += a[j][i];
        }
        printf("Sum of column %d = %d\n", i + 1, sum);
    }

    return 0;
}