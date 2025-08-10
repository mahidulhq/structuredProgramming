// Write a C program to evaluate a given arithmetic expression: ((a + b) * c) - (d / e).
#include<stdio.h>
int main(){

    int a = 1, b = 2, c = 3, d = 4, e = 2;
    int result = ((a + b) * c) - (d /e);

    printf("maximized result is: %d", result);

    return 0;
}


