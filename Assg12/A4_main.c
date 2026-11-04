/*
Task: Define a Student structure containing roll number, name, marks in three subjects,
and grade. Demonstrate passing a structure by value and passing it by reference.
Functions: Write displayStudent(struct Student s), totalMarks(struct Student s), and updateGrade(struct Student *s, char newGrade).
*/

#include<stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    char grade;
};

void displaystudent(struct Student S)
{
    printf("\nRoll: %d\nName: %sGrade: %c\n", S.roll, S.name, S.grade);
}

void totalmarks(struct Student S)
{
    float total = S.marks[0] + S.marks[1] + S.marks[2];
    printf("\nTotal Marks: %.2f\n", total);
}

void updategrade(struct Student *s, char NewGrade)
{
    s->grade = NewGrade;
}

int main()
{
    struct Student S1;

    printf("Enter Roll Number of Student: ");
    scanf("%d", &S1.roll);

    getchar();

    printf("Enter name of student: ");
    fgets(S1.name, sizeof(S1.name), stdin);

    for (int i = 0; i < 3; i++)
    {
        printf("Enter marks in subject %d(out of 100): ", i + 1);
        scanf("%f", &S1.marks[i]);
    }
    getchar();
    printf("Enter Grade: ");
    scanf("%c", &S1.grade);

    displaystudent(S1);
    totalmarks(S1);
    updategrade(&S1, 'A');
    printf("\nAfter change:");
    displaystudent(S1);

    return 0;
}

