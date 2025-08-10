// Write a C program to calculate x to the power of y (x^y).
#include<stdio.h>
#include<math.h>
int main() {

    int x,y;
    printf("Input the value of x: ");
    scanf("%d",&x);
    printf("Input the value of y: ");
    scanf("%d",&y);

    int result = pow(x,y);
    printf("Calculated the value of x^y is: %d\n",result);

    return 0;
}


