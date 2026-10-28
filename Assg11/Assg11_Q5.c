/*
Write a C program using a static variable to generate a 
unique identification number every time a function is called.
*/

#include <stdio.h>

// Function that generates and returns a unique ID.2
int ID_generator() 
{
    // UID initialised to 1001.
    // It retains its updated value across function calls.
    static int UID = 1001; 
    
    // Return the current UID and then increment.
    return UID++; 
}

int main() 
{

    // Calling function multiple times to generate new UID.
    printf("User 1 ID: %d\n", ID_generator());
    printf("User 2 ID: %d\n", ID_generator());
    printf("User 3 ID: %d\n", ID_generator());
    printf("User 4 ID: %d\n", ID_generator());

    return 0;
}
