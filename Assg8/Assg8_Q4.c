/*4.	Palindrome String
Write a C program to determine whether a given string is a palindrome. 
Ignore differences between uppercase and lowercase letters. For example, Madam should be treated as a palindrome.
*/

#include<Stdio.h>

int main()
{
    int len = 0, ispalindrome = 1, i = 0;
    char a[100], ch1, ch2;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[len] != '\0')
    {
        if (a[len] == '\n')
        {
            a[len] = '\0';
            break;
        }
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        ch1 = a[i];
        ch2 = a[len - i - 1];

        if (ch1 >= 'A' && ch1 <= 'Z')
        {
            ch1 = ch1 + 32;
        }

        if (ch2 >= 'A' && ch2 <= 'Z')
        {
            ch2 = ch2 + 32;
        }

        if (ch1 != ch2)
        {
            ispalindrome = 0;
            break;
        }
    }

    if (ispalindrome == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    
    return 0;
}