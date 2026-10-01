/*Array Insertion and Deletion
Create a menu-driven program to display an array, insert an element, and delete an element. 
Use pointer parameters to update the array size and return the deleted value.
*/

#include <stdio.h>

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void insert(int *arr, int *size, int element, int p)
{
    for (int i = *size; i > p; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }
    *(arr + p) = element;
    (*size)++;
}

int delete(int *arr, int *size, int p)
{
    int deleted_val = *(arr + p);
    for (int i = p; i < *size - 1; i++)
    {
        *(arr + i) = *(arr + i + 1);
    }
    (*size)--;
    return deleted_val;
}

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int choice, element, position, deleted;

    int running = 1;
    while (running)
    {
        printf("\n1. Display\n2. Insert\n3. Delete\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            display(arr, size);
        }
        else if (choice == 2)
        {
            printf("Enter element and position (1-%d): ", size + 1);
            scanf("%d %d", &element, &position);
            position--;
            if (position >= 0 && position <= size && size < 100)
            {
                insert(arr, &size, element, position);
            }
            else
            {
                printf("Invalid position\n");
            }
        }
        else if (choice == 3)
        {
            printf("Enter position (1-%d): ", size);
            scanf("%d", &position);
            position--;
            if (position >= 0 && position < size)
            {
                deleted = delete(arr, &size, position);
                printf("Deleted value: %d\n", deleted);
            }
            else
            {
                printf("Invalid position\n");
            }
        }
        else if (choice == 4)
        {
            running = 0;
        }
    }
    return 0;
}