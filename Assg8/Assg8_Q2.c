/*2.	Manual String Copy
Write a C program to copy one string into another character array manually. 
Display both the original and copied strings. Do not use strcpy().
*/

#include<Stdio.h>

int main()
{
    int i;
    char a[100], b[100];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        b[i] = a[i];
    }

    b[i] = '\0';

    printf("\nOriginal String: %s", a);
    printf("Copied String: %s", b);
    
    return 0;
}