/*
Task: Define a structure named Employee containing an integer member id and an anonymous union.
Union members: Include hourly_rate of type int and monthly_salary of type float in the anonymous union.
Output: Display the employee ID and salary
*/

#include <stdio.h>

struct Employee {
    int id;
    union {
        int hourly_rate;
        float monthly_salary;
    };
};

int main() 
{
    struct Employee emp1;

    emp1.id = 101;

    emp1.monthly_salary = 4500.50f;

    printf("--- Employee Details ---\n");
    printf("Employee ID: %d\n", emp1.id);
    printf("Monthly Salary: $%.2f\n", emp1.monthly_salary);

    return 0;
}
