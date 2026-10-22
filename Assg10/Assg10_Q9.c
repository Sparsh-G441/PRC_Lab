/*Column with Minimum Sum
Write a C program to find the column having the minimum sum in a matrix using recursion.
*/

#include <stdio.h>
#define MAX 100

void colSumsR(int mat[MAX][MAX], int r, int c, int curr_r, int curr_c, int current_sum, int sums[MAX])
{
    if (curr_c == c)
    {
        return;
    }

    if (curr_r == r)
    {
        sums[curr_c] = current_sum;
        colSumsR(mat, r, c, 0, curr_c + 1, 0, sums);
        return;
    }

    colSumsR(mat, r, c, curr_r + 1, curr_c, current_sum + mat[curr_r][curr_c], sums);
}

void minColR(int sums[MAX], int c, int curr_c, int *min_idx, int *min_val)
{
    if (curr_c == c)
    {
        return;
    }

    if (sums[curr_c] < *min_val)
    {
        *min_val = sums[curr_c];
        *min_idx = curr_c;
    }

    minColR(sums, c, curr_c + 1, min_idx, min_val);
}

int main()
{
    int mat[MAX][MAX], sums[MAX] = {0};
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    colSumsR(mat, r, c, 0, 0, 0, sums);

    int min_idx = 0;
    int min_val = sums[0];

    minColR(sums, c, 1, &min_idx, &min_val);

    printf("\nColumn with minimum sum is index %d (Sum: %d)\n", min_idx, min_val);

    return 0;
}