/*• Task: Declare enum Day with seven days. Read a number 
from 1 to 7 and print the corresponding day using switch.*/


#include<stdio.h>

enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

void printday(enum Day d)
{
    switch(d)
    {
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        case SUNDAY:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number! Please enter 1 to 7.\n");
    }
}

int main()
{
    int num;

    printf("Enter a day number (1 to 7): ");
    scanf("%d", &num);

    printday((enum Day)num);

    return 0;
}