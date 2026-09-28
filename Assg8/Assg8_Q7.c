/*7.	String Copy and Concatenation
Write a C program to input a first name and a last name. 
Use strcpy() and strcat() to create and display the complete name with a space between the two names.
*/

#include<Stdio.h>
#include<string.h>

int main()
{
    char a[40], b[40], c[100];

    printf("Enter First Name: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Enter Last Name: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    strcpy(c, a);
    strcat(c, " ");
    strcat(c, b);

    printf("%s", c);

    return 0;
}