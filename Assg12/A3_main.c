/*
Task: Define a Date structure containing day, month, and year. 
Place it inside an Employee structure containing the 
employee name, employee ID, salary, and date of joining.
Input and output: Read and display three employee details.
*/

#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float sal;
    struct Date dob;
};

int main()
{
    struct Employee e[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Details of Employee %d\n", i + 1);
        printf("Enter name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        printf("Enter employee ID: ");
        scanf("%d", &e[i].id);
        printf("Enter salary: ");
        scanf("%f", &e[i].sal);
        printf("Enter date of joining: ");
        scanf("%d %d %d", &e[i].dob.day, &e[i].dob.month, &e[i].dob.year);
        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nDetails of Employee %d", i + 1);
        printf("\nName: %s", e[i].name);
        printf("ID: %d", e[i].id);
        printf("\nSalray: %.2f", e[i].sal);
        printf("\nDate of Joining: %02d-%02d-%04d\n", e[i].dob.day, e[i].dob.month, e[i].dob.year);
    }

    return 0;
}