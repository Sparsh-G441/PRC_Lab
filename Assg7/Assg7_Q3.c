/*3.	Insert an Element at a Position
Write a C program to input n elements into an array. 
Input a new element and the position where it should be inserted. 
Insert the element at the given position by shifting the existing elements to the right. 
Display the updated array. 
If the entered position is invalid, display an appropriate message
*/

#include<Stdio.h>

int main()
{
    int n, i, a[20], pos, ins;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to be inserted and position: ");
    scanf("%d %d", &ins, &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position input.");
        return 0;
    }

    for (i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }

    a[pos - 1] = ins;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}