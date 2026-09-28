/* 9. Search for a Substring
Write a C program to input a sentence and a word. 
Use strstr() to determine whether the word occurs in the sentence. 
If found, display the starting position of its first occurrence.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100], *p;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Enter word to be searched: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    p = strstr(a, b);

    if (p == NULL)
    {
        printf("\nWord not found in string.");
    }
    else
    {
        printf("\nWord found in string.");
        printf("\nStarting position: %d", p - a + 1);
    }

    return 0;
}