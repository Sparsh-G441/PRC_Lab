/*• Task: Create enum MenuChoice for ADD, SUBTRACT, MULTIPLY,
DIVIDE, and EXIT. Use it to control a calculator loop.*/

#include<stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};

int main()
{
    int choice;
    float num1, num2;

    while (1)
    {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == EXIT)
        {
            printf("Exiting calculator.\n");
            break;
        }

        if (choice < ADD || choice > EXIT)
        {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch((enum MenuChoice)choice)
        {
            case ADD:
                printf("Result: %.2f\n", num1 + num2);
                break;
            case SUBTRACT:
                printf("Result: %.2f\n", num1 - num2);
                break;
            case MULTIPLY:
                printf("Result: %.2f\n", num1 * num2);
                break;
            case DIVIDE:
                if (num2 == 0)
                    printf("Error: Division by zero is not allowed!\n");
                else
                    printf("Result: %.2f\n", num1 / num2);
                break;
            default:
                break;
        }
    }

    return 0;
}