// Check if a number is prime

#include<stdio.h>
int main() {
    int num,i,isPrime=1;
    scanf("%d",&num);

    if(num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
