#include<stdio.h>
int main() {

    float num1,num2;
    printf("Enter a floating-point number: ");
    scanf("%f",&num1);
    printf("Enter another floating-point number: ");
    scanf("%f",&num2);

    float product= num1*num2;
    printf("Product of the two floating-point number is: %.2f",product);

    return 0;
}
