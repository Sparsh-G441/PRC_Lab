/*Write a C program that takes input as weight in kilograms and height in metres. Calculate BMI and classify it as:
•	Underweight
•	Normal
•	Overweight
•	Obesity Class I
•	Obesity Class II
•	Obesity Class III
Validate weight and height before calculating BMI.
*/

#include<stdio.h>

int main()
{
    float w, h, BMI;

    printf("Enter weight(in kgs) and height(in metres): ");
    scanf("%f %f", &w, &h);

    BMI = (w / (h*h));

    if (w <= 0 || h <= 0)
    {
        printf("Invalid Input");
    }

    if (BMI < 18.5)
    {
        printf("BMI = %.1f, Underweight", BMI);
    }
    else if (BMI >= 18.5 && BMI < 25)
    {
        printf("BMI = %.1f, Normal Weight", BMI);
    }
    else if (BMI >= 25 && BMI < 30)
    {
        printf("BMI = %.1f, Overweight", BMI);
    }
    else if (BMI >= 30 && BMI < 35)
    {
        printf("BMI = %.1f, Obesity Class 1", BMI);
    }
    else if (BMI >= 35 && BMI < 40)
    {
        printf("BMI = %.1f, Obesity Class 2", BMI);
    }
    else
    {
        printf("BMI = %.1f, Obesity Class 3", BMI);
    }

    return 0;
}