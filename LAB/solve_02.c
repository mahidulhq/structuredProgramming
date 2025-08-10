// Write a C program to take a three-digit number as input and calculate the sum of its digits.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    int a = n%10, b= (n/10)%10, c= n/100;
    int sum= a + b + c;

    printf("The sum of the digits of your number is: %d \n",sum);

    return 0;
}


