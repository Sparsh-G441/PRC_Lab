/*• Task: Define a structure with two one-bit fields named
isOn and isReady. Read values 0 or 1 and display them.*/

#include<stdio.h>

struct Flags {
    unsigned int isOn:1;
    unsigned int isReady:1;
};

int main()
{
    struct Flags f;
    int onInput, readyInput;

    printf("Enter isOn value (0 or 1): ");
    scanf("%d", &onInput);

    printf("Enter isReady value (0 or 1): ");
    scanf("%d", &readyInput);

    if ((onInput != 0 && onInput != 1) || (readyInput != 0 && readyInput != 1))
    {
        printf("Invalid input! Please enter 0 or 1 only.\n");
        return 0;
    }

    f.isOn = onInput;
    f.isReady = readyInput;

    printf("\nFlag Status:\n");
    printf("isOn    = %u\n", f.isOn);
    printf("isReady = %u\n", f.isReady);

    return 0;
}