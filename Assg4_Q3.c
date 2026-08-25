#include<stdio.h>

static int x = 100;

void test()
{
    static int y = 0;
    int z = 0;

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