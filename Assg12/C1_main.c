/*
Task: Define a union named Data containing int i, float f, and char c.
Assignments: Assign 25 to i, 7.5f to f, and A to c. Display each value immediately after its assignment.
Size: Display the size of the union using sizeof.
Explanation: Explain the shared-memory and overwrite behaviour of union members.
*/

#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() 
{
    union Data d1;

    d1.i = 25;
    printf("After assigning to i:\nValue of i: %d\n\n", d1.i);

    d1.f = 7.5f;
    printf("After assigning to f:\nValue of f: %.1f\n\n", d1.f);

    d1.c = 'A';
    printf("After assigning to c:\nValue of c: %c\n\n", d1.c);

    printf("Size of the union: %zu bytes\n", sizeof(d1));

    return 0;
}