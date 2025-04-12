// Write a function to compute the sum of digits of a number
#include <stdio.h>

int sumDigit(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", sumDigit(n));
    return 0;
}
