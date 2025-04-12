// Write a function to calculate the square of a number
#include<stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int n;
    scanf("%d", &n);
    n = square(n);

    printf("%d", n);
    return 0;
}
