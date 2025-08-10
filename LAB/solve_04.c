// Write a C program to take three floating-point numbers as input and calculate their average.
#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter first integers: ");
    scanf("%f",&a);
    printf("Enter second integers: ");
    scanf("%f",&b);
    printf("Enter third integers: ");
    scanf("%f",&c);
    float average = (a+b+c)/3;

    printf("Average of the three integers is: %.2f\n",average);

    return 0;
}


