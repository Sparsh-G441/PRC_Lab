/*9. Displaying a Two-Dimensional Array
Write a C program to input the number of rows and columns of a two-dimensional array. 
Enter its elements and display them in matrix form.
*/

#include<stdio.h>

int main()
{
    int i, j, m, n, a[20][20];
    
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    if (m == 0 || n == 0)
    {
        printf("Error!! Rows or Columns cannot be zero.");
        return 0;
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]); 
        }
    }
    printf("\nTwo-dimensional array: \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}