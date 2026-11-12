/*• Task: Create a tagged union that stores either an
integer, a floating-point number, or a character.*/

#include<stdio.h>

enum Type {
    INT_VALUE,
    FLOAT_VALUE,
    CHAR_VALUE
};

union Data {
    int i;
    float f;
    char c;
};

struct TaggedUnion {
    enum Type tag;
    union Data value;
};

void printValue(struct TaggedUnion item)
{
    switch(item.tag)
    {
        case INT_VALUE:
            printf("\nStored Integer Value: %d\n", item.value.i);
            break;
        case FLOAT_VALUE:
            printf("\nStored Float Value: %.2f\n", item.value.f);
            break;
        case CHAR_VALUE:
            printf("\nStored Character Value: %c\n", item.value.c);
            break;
        default:
            printf("\nUnknown tag!\n");
    }
}

int main()
{
    struct TaggedUnion item;
    int choice;

    printf("Choose data type (0: Int, 1: Float, 2: Char): ");
    scanf("%d", &choice);

    item.tag = (enum Type)choice;

    if (item.tag == INT_VALUE)
    {
        printf("Enter an integer: ");
        scanf("%d", &item.value.i);
        printValue(item);
    }
    else if (item.tag == FLOAT_VALUE)
    {
        printf("Enter a float: ");
        scanf("%f", &item.value.f);
        printValue(item);
    }
    else if (item.tag == CHAR_VALUE)
    {
        getchar();
        printf("Enter a character: ");
        scanf("%c", &item.value.c);
        printValue(item);
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
