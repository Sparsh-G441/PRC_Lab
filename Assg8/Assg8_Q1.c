/*1.	Manual String Length
Write a C program to find the length of a string manually by traversing it until the null character '\0' is encountered. 
Do not use strlen().
*/

#include<stdio.h>

int main()
{
    int c = 0, i; 
    char a[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        c++;
    }

    printf("Length of string = %d", c);

    return 0;
}
