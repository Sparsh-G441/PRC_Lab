/*3.	Manual String Concatenation
Write a C program to concatenate two strings manually. 
Ensure that the destination array has enough space to hold the combined string. 
Do not use strcat().
*/

#include<stdio.h>

int main()
{
    int i, c1 = 0, c2 = 0;
    char a[100], b[100], c[200];

    printf("Enter String 1: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter String 2: ");
    fgets(b, sizeof(b), stdin);

    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        c1++;
    }

    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; b[i] != '\0' && b[i] != '\n'; i++)
    {
        c[i + c1] = b[i];
    }

    c[i + c1] = '\0';

    printf("Concatenated String: %s", c);

    return 0;
}