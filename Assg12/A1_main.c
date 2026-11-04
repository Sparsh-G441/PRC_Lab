/*
Task: Define a structure named Student containing the
roll number, student name, and marks in three subjects. 
Write a C program to read one student record and display
the total marks, average marks, and grade.
*/

#include<stdio.h>

char getgrade(float);

struct Student {
    int roll;
    char name[50];
    float marks[3];
};


int main()
{
    struct Student S1;

    printf("Enter Roll Number of Student: ");
    scanf("%d", &S1.roll);

    getchar();

    printf("Enter name of student: ");
    fgets(S1.name, sizeof(S1.name), stdin);

    float total = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter marks in subject %d(out of 100): ", i + 1);
        scanf("%f", &S1.marks[i]);
        total += S1.marks[i];
    }

    float average = total / 3.0;

    char G = getgrade(average);

    printf("\nTotal marks = %.2f", total);
    printf("\nAverage = %.2f", average);

    if (G == 'Z')
    {
        printf("\nInvalid Total Score.");    
    }
    else
    {
        printf("\nGrade = %c", G);
    }

    return 0;
}

char getgrade(float t)
{
    if (90 <= t && t <= 100)
    {
        return 'A';
    }
    else if (80 <= t && t < 90)
    {
        return 'B';
    }
    else if (70 <= t && t < 80)
    {
        return 'C';
    }
    else if (60 <= t && t < 70)
    {
        return 'D';
    }
    else if (50 <= t && t < 60)
    {
        return 'E';
    }
    else if (0 <= t && t < 50)
    {
        return 'F';
    }
    else
    {
        return 'Z';
    }
}