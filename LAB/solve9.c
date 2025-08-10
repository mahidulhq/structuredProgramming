// Convert binary to decimal

#include<stdio.h>
#include<stdlib.h>
int main() {
    char binary[20];
    scanf("%s", binary);

    int decimal = strtol(binary, NULL, 2);
    printf("Decimal: %d\n", decimal);
    return 0;
}
