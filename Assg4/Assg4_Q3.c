#include<stdio.h>

static int x = 100; // global variable

void test()
{
    static int y = 0; //local static variable
    int z = 0; // Local auto variable

    y++;
    z++;
    x = x + y + z;

    printf("\nGlobal Variable x = %d\n", x); 
    printf("Local static variable y = %d\n", y); 
    printf("Local auto variable z = %d\n", z);
}


int main()
{
    printf("Initial x = %d\n", x);
    test();
    test();
    test();
    return 0;
}