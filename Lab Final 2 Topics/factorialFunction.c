// Write a function to calculate factorial
#include <stdio.h>

int factorial(int n) {
    int result = 1;
    while(n > 0) {
        result = result * n;
        n = n - 1;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
}
