/*
Write a C program to demonstrate p++, p--, p + 2, and p - 1 using an integer array. Display 
the pointer values before and after each operation and explain pointer scaling.
*/


#include <stdio.h>

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; 

    printf("Initial pointer value: %p\n", (void*)p);
    printf("Value pointed to by p: %d\n", *p);

    p++;
    printf("\nAfter p++:\n");
    printf("Pointer value: %p\n", (void*)p);
    printf("Value pointed to by p: %d\n", *p);

    p--;
    printf("\nAfter p--:\n");
    printf("Pointer value: %p\n", (void*)p);
    printf("Value pointed to by p: %d\n", *p);

    p += 2;
    printf("\nAfter p + 2:\n");
    printf("Pointer value: %p\n", (void*)p);
    printf("Value pointed to by p: %d\n", *p);

    p--;
    printf("\nAfter p - 1:\n");
    printf("Pointer value: %p\n", (void*)p);
    printf("Value pointed to by p: %d\n", *p);

    return 0;
}