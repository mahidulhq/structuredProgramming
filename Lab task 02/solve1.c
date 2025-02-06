// Calculate the sum of the digits of a number

#include<stdio.h>
int main() {
    int num,sum=0,digit;
    scanf("%d",&num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("%d\n",sum);
    return 0;
}
