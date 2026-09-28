/*10.	Split a Sentence into Words
Write a C program to input a sentence and separate it into individual words using strtok(). 
Display each word on a separate line and count the total number of words.
*/

#include<Stdio.h>
#include<string.h>

int main()
{
    char a[100], *token;

    printf("Enter string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    token = strtok(a, " ,-.");
    int c = 0;

    while (token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL, " ,-.");
        c++;
    }

    printf("Total words = %d", c);

    return 0;
}