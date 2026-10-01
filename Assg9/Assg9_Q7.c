/*Cyclic Swap of Three Numbers
Write a function using pointers to cyclically interchange three values as follows: a <- b, b <- c, c <- a. 
Display the values before and after swapping.
*/

#include<stdio.h>

void swap(int *, int *, int *);

int main()
{
    int a, b, c;
    
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Numbers before swapping: \n %d %d %d", a, b, c);

    swap(&a, &b, &c);

    printf("\nNumbers after swap: \n %d %d %d", a, b, c);

    return 0;
}

void swap(int *p, int *q, int *r)
{
    int temp = *p;
    *p = *q;
    *q = *r;
    *r = temp;
}