/*
Write void update_pointer(int **p, int *new_address) to change the address stored in a pointer. 
Demonstrate the result using two integer variables.
*/

#include <stdio.h>

void update_pointer(int **p, int *new_address)
{
    *p = new_address;
}

int main()
{
    int x = 10;
    int y = 20;
    int *p = &x;

    printf("Initial value of p: %p\n", (void*)p);
    printf("Value pointed by p: %d\n", *p);

    update_pointer(&p, &y);

    printf("Updated value of p: %p\n", (void*)p);
    printf("Value pointed by p: %d\n", *p);

    return 0;
}
