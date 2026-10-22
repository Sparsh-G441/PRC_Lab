/*Symmetric Matrix
Write a C program to check whether a square matrix is symmetric using recursion.
*/

#include <stdio.h>

#define MAX 100

int isSym(int mat[MAX][MAX], int n, int r, int c) 
{
    if (r == n) 
    {
        return 1; 
    }

    if (c == n) 
    {
        return isSym(mat, n, r + 1, 0);
    }

    if (mat[r][c] != mat[c][r]) 
    {
        return 0; 
    }

    return isSym(mat, n, r, c + 1);
}

int main() 
{
    int n, mat[MAX][MAX];

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    if (isSym(mat, n, 0, 0)) 
    {
        printf("\nSymmetric matrix.\n");
    } 
    else 
    {
        printf("\nNot a symmetric matrix.\n");
    }

    return 0;
}
