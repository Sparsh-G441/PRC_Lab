/*2.	Fibonacci Sequence
Write a C program to input the number of terms and display the Fibonacci sequence using a loop.
*/

#include<stdio.h>

int main()
{
    int n;
    int first = 0;
    int second = 1;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);


    if (n >= 0)
    {
        while(n > 0)
        {
            sum = first + second; 
            printf("%d ", first);
            first = second;
            second = sum;
            n -= 1;
        }
    }
    else 
    {
        printf("Invalid Input");
    }

    return 0;
}