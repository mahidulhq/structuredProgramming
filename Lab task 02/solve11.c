// Convert a decimal number to binary

#include <stdio.h>
void decimalToBinary(int num) {
    int bin[32], i = 0;
    while (num > 0) {
        bin[i++] = num % 2;
        num /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}
