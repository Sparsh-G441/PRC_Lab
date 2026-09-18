/*1.	Multiplication Table
Write a C program that accepts an integer from the user and displays its multiplication table from 1 to 10 using a for loop.
*/

#include<stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1;i <= 10; i++)
    {
        printf("\n%d * %d = %d", n,i,n*i);
    }

    return 0;
}