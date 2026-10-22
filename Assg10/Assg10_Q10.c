/*Tower of Hanoi
Write a C program to solve the Tower of Hanoi problem for n disks using recursion and display all the steps.
*/

#include <stdio.h>

void hanoi(int n, char src, char dst, char aux)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", src, dst);
        return;
    }

    hanoi(n - 1, src, aux, dst);
    printf("Move disk %d from %c to %c\n", n, src, dst);
    hanoi(n - 1, aux, dst, src);
}

int main()
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("\nThe steps to solve Tower of Hanoi are:\n");
    hanoi(n, 'A', 'C', 'B');

    return 0;
}
