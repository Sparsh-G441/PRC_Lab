/*
10.	Pascal’s Triangle
Write a C program to input the number of rows and display Pascal’s Triangle using nested loops.
For n = 5, the output should be:
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/

#include<stdio.h>

int main()
{
    int row, i, j, coef = 1, space;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (i = 0; i < row; i++)
    {
        for (space = 1; space <= row - i; space++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            printf("%d ", coef);
        }
        printf("\n");
    }
    return 0;
}

