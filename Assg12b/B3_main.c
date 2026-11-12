/*• Task: Create one-bit fields named read, write, execute, and admin. 
Display the permissions in the format rwxA.*/

#include<stdio.h>

struct Permissions {
    unsigned int read:1;
    unsigned int write:1;
    unsigned int execute:1;
    unsigned int admin:1;
};

int main()
{
    struct Permissions perm;
    int r, w, x, a;

    printf("Enter permissions (1 for yes, 0 for no):\n");
    printf("Read: ");
    scanf("%d", &r);
    printf("Write: ");
    scanf("%d", &w);
    printf("Execute: ");
    scanf("%d", &x);
    printf("Admin: ");
    scanf("%d", &a);

    if ((r != 0 && r != 1) || (w != 0 && w != 1) || (x != 0 && x != 1) || (a != 0 && a != 1))
    {
        printf("Invalid input! Please enter 0 or 1 only.\n");
        return 0;
    }

    perm.read = r;
    perm.write = w;
    perm.execute = x;
    perm.admin = a;

    printf("\nPermission String: ");
    printf("%c", perm.read ? 'r' : '-');
    printf("%c", perm.write ? 'w' : '-');
    printf("%c", perm.execute ? 'x' : '-');
    printf("%c\n", perm.admin ? 'A' : '-');

    return 0;
}