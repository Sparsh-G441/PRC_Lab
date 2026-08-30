#include <stdio.h>

int main() 
{
    int score = 85;
    char grade = 'A';

    if (score >= 50) 
    {
        printf("Passed with grade %c\n", grade);
    } 
    else 
    {
        printf("Failed\n");
    }

    return 0;
}
