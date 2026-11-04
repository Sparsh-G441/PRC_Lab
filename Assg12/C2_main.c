/*
Task: Define a union named Number containing int i and float f. Create an array of three union variables.
Integer values: Store three integers in the array and display them.
Overwrite operation: Overwrite the second element with a floating-point value and display that value.
Explanation: Explain the effect of overwriting a union member and how memory is reused.
*/

#include <stdio.h>

union Number {
    int i;
    float f;
};

int main() 
{
    union Number arr[3];

    arr[0].i = 10;
    arr[1].i = 20;
    arr[2].i = 30;

    printf("Initial array elements (integers):\n");
    printf("Element 0: %d\n", arr[0].i);
    printf("Element 1: %d\n", arr[1].i);
    printf("Element 2: %d\n", arr[2].i);

    arr[1].f = 55.5f;

    printf("\nAfter overwriting the second element:\n");
    printf("Element 1 (as float): %.1f\n", arr[1].f);

    return 0;
}
