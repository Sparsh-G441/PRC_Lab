/*Matrix Multiplication
Write a C program to multiply two compatible matrices using recursive functions.
*/

#include <stdio.h>

#define MAX 100

void multiplyR(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int r1, int c1, int c2, int r, int c, int k)
{
    if (r == r1)
    {
        return;
    }

    if (c == c2)
    {
        multiplyR(A, B, C, r1, c1, c2, r + 1, 0, 0);
        return;
    }

    if (k == c1)
    {
        multiplyR(A, B, C, r1, c1, c2, r, c + 1, 0);
        return;
    }

    C[r][c] += A[r][k] * B[k][c];

    multiplyR(A, B, C, r1, c1, c2, r, c, k + 1);
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX] = {0};
    int r1, c1, r2, c2;

    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyR(A, B, C, r1, c1, c2, 0, 0, 0);

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
