#include<stdio.h>

int main()
{
    float s1, s2, s3;
    float avg;
    int fail = 0;

    printf("Enter marks in subject 1: ");
    scanf("%f", &s1);
    printf("Enter marks in subject 2: ");
    scanf("%f", &s2);
    printf("Enter marks in subject 3: ");
    scanf("%f", &s3);

    avg = (s1 + s2 + s3) / 3;

    if (s1 < 40)
    {
        fail++;
    } 
    if (s2 < 40)
    {
        fail++;
    }
    if (s3 < 40)
    {
        fail++;
    }

    if (fail == 0)
    {
        printf("\nPassed All Subjects");
    }
    else if (fail != 0)
    {
        printf("\nFailed in %d Subject(s)", fail);
    }

    if (avg >= 75)
    {
        printf("\nScored Distinction\n");   
    }
    else
    {
        printf("\nDid Not Score Distinction\n");
    }
    return 0;
}