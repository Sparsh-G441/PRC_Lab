/*
Write a C program to read the elements of a two-dimensional integer matrix and define the following function: 
void count_elements(int rows, int cols, int matrix[rows][cols], int *positive, int *negative, int *zero, int *even); 
The function must count and return the number of Positive elements, Negative elements, Zero elements and Even elements. 
Use pointer parameters to return all four counts. Access the matrix elements using pointer notation and display the results in the main() function.

*/

#include <stdio.h>

void count_elements(int rows, int cols, int matrix[rows][cols], int *positive, int *negative, int *zero, int *even)
{
    *positive = 0;
    *negative = 0;
    *zero = 0;
    *even = 0;

    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (*( *(matrix + i) + j) > 0)
            {
                (*positive)++;
            }
            else if (*( *(matrix + i) + j) < 0)
            {
                (*negative)++;
            }
            else
            {
                (*zero)++;
            }

            if (*( *(matrix + i) + j) % 2 == 0)
            {
                (*even)++;
            }
        }
    }
}

int main()
{
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0)
    {
        printf("Invalid input! Please enter positive dimensions.\n");
        return 0;
    }

    int matrix[rows][cols];
    int positive, negative, zero, even;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    count_elements(rows, cols, matrix, &positive, &negative, &zero, &even);

    printf("\nResults:\n");
    printf("Positive elements: %d\n", positive);
    printf("Negative elements: %d\n", negative);
    printf("Zero elements: %d\n", zero);
    printf("Even elements: %d\n", even);

    return 0;
}
