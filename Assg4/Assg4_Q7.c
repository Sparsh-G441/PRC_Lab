#include <stdio.h>


void test1()
{
    int a = 10;
    printf("\nPost incrementation: %d, New a = %d", a++,a);
}
void test2()
{
    int a = 10;
    printf("\nPre incrementation: %d", ++a);
}
void test3()
{
    int a = 10;
    printf("\nPost decrementation: %d, New a = %d", a--,a);
}
void test4()
{
    int a = 10;
    printf("\nPre decrementation: %d", --a);
}

int main()
{
    printf("a = 10");
    test1();
    test2();
    test3();
    test4();
    return 0;
}
