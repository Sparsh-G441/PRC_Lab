/*
Task: Use typedef to define a structure named Student without repeatedly writing
the struct keyword. Read and display the details of three student records.
Members: Store roll number, student name, and CGPA.
*/

#include<stdio.h>

typedef struct {
    int roll_no;
    char name[50];
    float cgpa;
} Student;

int main()
{
    Student S1, S2, S3;

    printf("Enter details of student 1: \n");
    printf("Roll No, Name, CGPA: ");
    scanf("%d %s %f", &S1.roll_no, &S1.name, &S1.cgpa);

    printf("\nEnter details of student 2: \n");
    printf("Roll No, Name, CGPA: ");
    scanf("%d %s %f", &S2.roll_no, &S2.name, &S2.cgpa);

    printf("\nEnter details of student 3: \n");
    printf("Roll No, Name, CGPA: ");
    scanf("%d %s %f", &S3.roll_no, &S3.name, &S3.cgpa);

    printf("\nRoll No: %d\nName: %s\nCGPA: %.2f\n", S1.roll_no, S1.name, S1.cgpa);
    printf("\nRoll No: %d\nName: %s\nCGPA: %.2f\n", S2.roll_no, S2.name, S2.cgpa);
    printf("\nRoll No: %d\nName: %s\nCGPA: %.2f\n", S3.roll_no, S3.name, S3.cgpa);

    return 0;
}