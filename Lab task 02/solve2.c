// Reverse an integer

#include<stdio.h>
int main() {
    int num,rev=0,digit;
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("%d\n",rev);
    return 0;
}
