/*5.	Character-Frequency Analysis
Write a C program to count the frequency of every character in a string. 
Treat uppercase and lowercase forms of a letter as the same character, and do not display the same character more than once.
*/

#include <stdio.h>

int main() 
{

    char str[100];
    int freq[256] = {0}; 
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    i = 0;

    while (str[i] != '\0') 
    {
        if (str[i] == '\n') 
        {
            str[i] = '\0';
            break;
        }

        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32; 
        }
        
        freq[str[i]]++;
        i++;
    }

    printf("\nCharacter Frequencies:\n");
    
    i = 0;

    while (str[i] != '\0') 
    {
        char ch = str[i];

        if (freq[ch] > 0) 
        {
            printf("'%c' : %d\n", ch, freq[ch]);
            freq[ch] = 0;
        }
        i++;
    }

    return 0;
}