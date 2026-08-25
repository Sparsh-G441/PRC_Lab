#include<stdio.h>
#include<limits.h>

int main()
{
    printf("Size of char= %zu byte\n", sizeof(char));
    printf("Size of int= %zu byte\n", sizeof(int));
    printf("Size of float= %zu byte\n", sizeof(float));
    printf("Size of double= %zu byte\n", sizeof(double));
    printf("Size of long int= %zu byte\n", sizeof(long int));
    printf("Size of short int= %zu byte\n", sizeof(short int));

    printf("\nRange of int:\n");
    printf("Minimum int value = %d\n", INT_MIN);
    printf("Maximum int value = %d\n", INT_MAX);

    printf("\nRange of char:\n");
    printf("Minimum char value = %d\n", CHAR_MIN);
    printf("Maximum char value = %d\n", CHAR_MAX);

    return 0;
}