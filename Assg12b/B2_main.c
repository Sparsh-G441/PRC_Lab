/*• Task: Create bit-fields power:1, mode:2, error:1, and battery:4.
Read the values and display the device status.*/

#include<stdio.h>

struct DeviceStatus {
    unsigned int power:1;
    unsigned int mode:2;
    unsigned int error:1;
    unsigned int battery:4;
};

int main()
{
    struct DeviceStatus dev;
    int p, m, e, b;

    printf("Enter power (0 or 1): ");
    scanf("%d", &p);

    printf("Enter mode (0 to 3): ");
    scanf("%d", &m);

    printf("Enter error (0 or 1): ");
    scanf("%d", &e);

    printf("Enter battery level (0 to 15): ");
    scanf("%d", &b);

    if ((p < 0 || p > 1) || (m < 0 || m > 3) || (e < 0 || e > 1) || (b < 0 || b > 15))
    {
        printf("Invalid input! Check the allowed range for each field.\n");
        return 0;
    }

    dev.power = p;
    dev.mode = m;
    dev.error = e;
    dev.battery = b;

    printf("\n--- Device Status ---\n");
    printf("Power   : %u\n", dev.power);
    printf("Mode    : %u\n", dev.mode);
    printf("Error   : %u\n", dev.error);
    printf("Battery : %u / 15\n", dev.battery);
    printf("Note: Exact bit ordering and padding in memory are compiler-dependent.\n");

    return 0;
}