/*Array Element Analysis
Without sorting, write a function using pointer parameters
to find the smallest, second-smallest, greatest, and second-greatest distinct elements of an array. 
Display an appropriate message if fewer than two distinct values exist.
*/

#include <stdio.h>
#include <limits.h>

int analyze_elements(int *arr, int size, int *smallest, int *sec_smallest, int *greatest, int *sec_greatest)
{
    int s1 = INT_MAX, s2 = INT_MAX;
    int g1 = INT_MIN, g2 = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        int val = *(arr + i);

        if (val < s1)
        {
            s2 = s1;
            s1 = val;
        }
        else if (val > s1 && val < s2)
        {
            s2 = val;
        }

        if (val > g1)
        {
            g2 = g1;
            g1 = val;
        }
        else if (val < g1 && val > g2)
        {
            g2 = val;
        }
    }

    if (s2 == INT_MAX || g2 == INT_MIN)
    {
        return 0;
    }

    *smallest = s1;
    *sec_smallest = s2;
    *greatest = g1;
    *sec_greatest = g2;
    return 1;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int small, sec_small, great, sec_great;

    if (analyze_elements(arr, size, &small, &sec_small, &great, &sec_great))
    {
        printf("Smallest: %d\nSecond Smallest: %d\nGreatest: %d\nSecond Greatest: %d\n", small, sec_small, great, sec_great);
    }
    else
    {
        printf("Fewer than two distinct values exist.\n");
    }
    return 0;
}