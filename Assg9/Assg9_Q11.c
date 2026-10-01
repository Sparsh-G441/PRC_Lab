/*String Analysis
Without using functions from string.h, write a function that returns 
through pointer parameters the numbers of vowels, consonants, digits, spaces, and special characters in a string. 
Treat uppercase and lowercase letters identically.
*/

#include <stdio.h>

void analyze_string(const char *str, int *vowels, int *consonants, int *digits, int *spaces, int *special)
{
    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;
    *special = 0;

    int i = 0;
    while (*(str + i) != '\0')
    {
        char ch = *(str + i);
        
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                (*vowels)++;
            }
            else
            {
                (*consonants)++;
            }
        }
        else if (ch >= '0' && ch <= '9')
        {
            (*digits)++;
        }
        else if (ch == ' ')
        {
            (*spaces)++;
        }
        else
        {
            (*special)++;
        }
        i++;
    }
}

int main()
{
    char str[] = "Hello World! 123";
    int v, c, d, s, sp;

    printf("String = %s\n", str);

    analyze_string(str, &v, &c, &d, &s, &sp);
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\nSpecial: %d\n", v, c, d, s, sp);

    return 0;
}