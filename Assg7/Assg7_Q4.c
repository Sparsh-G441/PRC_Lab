/*4. Delete an Element from an Array
Write a C program to input n elements into an array. 
Input the position of the element to be deleted. 
Delete the element from the specified position by shifting the remaining elements to the left. 
Display the updated array. If the entered position is invalid, display an appropriate message.
*/

#include<stdio.h>

int main()
{
    int n, i, a[20], pos, ins;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to be deleted and its position: ");
    scanf("%d %d", &ins, &pos);

    for (i = pos - 1; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

