#include<stdio.h>

int main()
{
    int age, inc, cr;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your income: ");
    scanf("%d", &inc);
    printf("Enter your credit score: ");
    scanf("%d", &cr);

    if (age >= 21 && age <= 60 && inc > 35000 && cr >= 750)
    {
        printf("Eligible for Loan");
    }
    else
    {
        printf("Not Eligible for Loan");
    }
    return 0;
}