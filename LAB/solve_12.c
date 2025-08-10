// Write a C program to toggle the last three bits of an integer.
#include<stdio.h>
int main(){

    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int result = n^7;

    printf("Toggle the last three bits of the integer is: %d \n",result);

    return 0;
}


