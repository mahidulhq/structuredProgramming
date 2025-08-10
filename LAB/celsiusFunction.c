// Write a function to convert Celsius to Fahrenheit
#include <stdio.h>
float celsius(float c) {
    return (c * 9 / 5 + 32);
}
int main() {
    float c;
    scanf("%f", &c);

    printf("%.2f\n", celsius(c));
    return 0;
}
