// Write a function to calculate factorial.
#include <stdio.h>

int factorial(int n ) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    if(n < 0) {
        printf("Error");
    } else {
        printf("%d", factorial(n));
    }
    return 0;
}
