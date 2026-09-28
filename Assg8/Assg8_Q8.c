/*8.	Search for a Character
Write a C program to input a string and a character. 
Use strchr() to find the first occurrence of the character. 
If found, display its position; otherwise, display an appropriate message
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], element; 
    char *p;
    
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Enter element to search: ");
    scanf("%c", &element);

    p = strchr(a, element);

    if (p == NULL)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at Position %d", p - a + 1);
    }

    return 0;
}