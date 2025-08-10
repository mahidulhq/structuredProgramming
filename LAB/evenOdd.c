// Write a function to check whether a number is even or odd
#include <stdio.h>

int even(int num) {
    return (num % 2 == 0);
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (even(n)) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    
    return 0;
}
