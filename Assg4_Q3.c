#include<stdio.h>

static int x = 100; // global variable

void test()
{
    static int y = 0; //local static variable
    int z = 0; // Local auto variable

    y++;
    z++;
    x = x + y + z;

    printf("x = %d, y = %d, z = %d\n", x,y,z);
}


int main()
{
    printf("Initial x = %d\n", x);
    test();
    test();
    test();
    return 0;
}