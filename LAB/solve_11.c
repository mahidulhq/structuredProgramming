// Write a C program to calculate the area and perimeter of a rectangle.
#include<stdio.h>
int main(){

    float length,width;
    printf("Enter length: ");
    scanf("%f",&length);
    printf("Enter width: ");
    scanf("%f",&width);

    float area = length*width;
    float perimeter = 2*(length +width);
    printf("The area %.2f and perimeter of a rectangle %.2f",area,perimeter);

    return 0;
}


