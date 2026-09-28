/*6.	String Length and Comparison
Write a C program to input two strings, display their lengths using strlen(), and compare them using strcmp(). 
Display whether the strings are equal or which string comes first lexicographically.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Enter another string: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    printf("\nLength of string 1 = %d", strlen(a));
    printf("\nLength of string 2 = %d", strlen(b));

    int r = strcmp(a, b);

    if (r == 0)
    {
        printf("\nThe strings are equal.");
    }
    else if (r < 0)
    {
        printf("\nThe first string comes first lexicographically.");
    }
    else
    {
        printf("\nThe second string comes first lexicographically.");
    }

    return 0;
}