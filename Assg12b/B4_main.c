/*• Task: Define two records containing four Boolean flags: one using 
ordinary unsigned int members and one using one-bit fields.*/

#include<stdio.h>

struct OrdinaryFlags {
    unsigned int flag1;
    unsigned int flag2;
    unsigned int flag3;
    unsigned int flag4;
};

struct BitfieldFlags {
    unsigned int flag1:1;
    unsigned int flag2:1;
    unsigned int flag3:1;
    unsigned int flag4:1;
};

int main()
{
    struct OrdinaryFlags ord;
    struct BitfieldFlags bit;

    printf("Size of Ordinary Structure : %zu bytes\n", sizeof(ord));
    printf("Size of Bit-field Structure: %zu bytes\n", sizeof(bit));
    printf("Note: Exact memory size and alignment depend on compiler implementation.\n");

    return 0;
}