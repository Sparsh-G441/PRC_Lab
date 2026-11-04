/*
Task: Store the details of n students using an array of structures. 
Calculate the average marks of every student and display the student with the highest average.
Tie handling: If two or more students have the same highest average, display all such students.
*/

#include<stdio.h>

struct Student {
    int uid;
    char name[50];
    float marks[3];
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student S[n];
    float avg[n];

    for (int i = 0; i < n; i++)
    {
        printf("\n====Enter Details of Student %d====\n", i + 1);
        printf("\nEnter UID: ");
        scanf("%d", &S[i].uid);
        getchar();
        printf("Enter Name: ");
        fgets(S[i].name, sizeof(S[i].name), stdin);
        
        float total = 0;

        for (int j = 0; j < 3; j++)
        {
        printf("Enter marks in subject %d(out of 100): ", j + 1);
        scanf("%f", &S[i].marks[j]);
        total += S[i].marks[j];
        }
        avg[i] = total / 3.0;
    }

    float max = avg[0];

    for (int i = 0; i < n; i++)
    {
        if (avg[i] > max)
        {
            max = avg[i];
        }
    }

    printf("\nStudents with highest average\n");
    for (int i = 0; i < n; i++)
    {
        if (avg[i] == max)
        {
            printf("\nName: %s", S[i].name);
            printf("UID: %d", S[i].uid);
            printf("\nAverage: %.2f\n", avg[i]);
        }
    }
    return 0;
}