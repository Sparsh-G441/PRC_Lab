/*Student Grade Calculation
Write pass-by-value functions to calculate the total and percentage of marks in five subjects, 
determine the grade, and check whether the student passed every subject. 
A student fails if the score in any subject is below 40.
*/

#include<stdio.h>

int total(int[]);
float percent(int[]);
char grade(int[]);
int pass(int[]);

int main()
{    
    int MARKS[5];

    printf("Enter marks of 5 subjects: ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &MARKS[i]);
    }

    printf("Total Marks = %d/500\n", total(MARKS));
    printf("Percentage = %.2f\n", percent(MARKS));
    printf("Grade = %c\n", grade(MARKS));
    if (pass(MARKS) == 1)
    {
        printf("All Subjects passed.");
    }
    else
    {
        printf("Did not pass all subjects");
    }

    return 0;    
}

int total(int a[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    return sum;
}

float percent(int a[])
{
    float sum = total(a);
    return sum / 5;
}

char grade(int a[])
{
    float perc = percent(a);
    if (perc <= 100 && perc >= 90)
    {
        return 'O';
    }
    else if (perc < 90 && perc >= 80)
    {
        return 'A';
    }
    else if (perc < 80 && perc >= 70)
    {
        return 'B';
    }
    else if (perc < 70 && perc >= 60)
    {
        return 'C';
    }
    else if (perc < 60 && perc >= 50)
    {
        return 'D';
    }
    else if (perc < 50 && perc >= 40)
    {
        return 'E';
    }
    else if (perc < 40)
    {
        return 'F';
    }
}

int pass(int a[])
{
    if (a[0] >= 40 && a[1] >= 40 && a[2] >= 40 && a[3] >= 40 && a[4] >= 40)
    {
        return 1;
    }
    else return 0;
}