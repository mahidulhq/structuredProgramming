// Check if a number is a palindrome

#include<stdio.h>
int main() {
    int n,org,rev= 0,remainder;
    scanf("%d", &n);

    org=n;
    while (n > 0) {
        remainder = n % 10;
        rev = (rev * 10) + remainder;
        n /= 10;
    }

    if (org == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
