// Write a function to calculate the square of a number
#include <stdio.h>
int square(int n) {
    return n * n;
}
int main() {
    int num;
    scanf("%d", &num);

    printf("%d\n", square(num));
    return 0;
}
