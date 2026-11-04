/*
Task: Define a Date structure to store the date of birth of a student. 
Using typedef, define a Student structure containing roll number, name, CGPA, and nested date of birth.
Storage: Store the details of n students in an array of structures.
Functions: Create functions that receive structure pointers and print the student data.
Scholarship test: Check whether each student is eligible for a merit scholarship.
A student is eligible if CGPA is greater than or equal to 8.5.
*/

#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int roll;
    char name[50];
    float cgpa;
    Date dob;
} Student;

void displaystudent(Student *s) 
{
    printf("\nRoll: %d\nName: %sCGPA: %.2f\nDOB: %02d/%02d/%d\n", 
           s->roll, s->name, s->cgpa, s->dob.day, s->dob.month, s->dob.year);
}

void checkscholarship(Student *s) 
{
    if (s->cgpa >= 8.5) {
        printf("Scholarship Status: Eligible for Merit Scholarship\n");
    } else {
        printf("Scholarship Status: Not Eligible\n");
    }
}

int main() 
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) 
    {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll);
        
        getchar();

        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter CGPA: ");
        scanf("%f", &students[i].cgpa);

        printf("Enter Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &students[i].dob.day, &students[i].dob.month, &students[i].dob.year);
    }

    printf("\n================ STUDENT RECORDS ================\n");
    for (int i = 0; i < n; i++) 
    {
        displaystudent(&students[i]);
        checkscholarship(&students[i]);
    }

    return 0;
}
