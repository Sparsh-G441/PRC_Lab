/*• Task: Use enum Result { FAIL, PASS, DISTINCTION } and write
 a function that returns the result status from marks.*/

#include<stdio.h>

enum Result {
    FAIL,
    PASS,
    DISTINCTION
};

enum Result getresult(float marks[], int n)
{
    float total = 0, avg;

    for (int i = 0; i < n; i++)
    {
        total = total + marks[i];
    }

    avg = total / n;

    if (avg >= 75)
        return DISTINCTION;
    else if (avg >= 40)
        return PASS;
    else
        return FAIL;
}

int main()
{
    float marks[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter marks in subject %d (out of 100): ", i + 1);
        scanf("%f", &marks[i]);
    }

    enum Result status = getresult(marks, 3);

    if (status == DISTINCTION)
        printf("\nResult: DISTINCTION (Numeric value: %d)\n", status);
    else if (status == PASS)
        printf("\nResult: PASS (Numeric value: %d)\n", status);
    else
        printf("\nResult: FAIL (Numeric value: %d)\n", status);

    return 0;
}
