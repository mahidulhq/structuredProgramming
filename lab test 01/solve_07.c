#include <stdio.h>

int main() {


    float temp;
    printf("Give a Farenheit temperature: ");
    scanf("%f",&temp);
    float celsius = 5.0/9.0*(temp-32);
    printf("After converted to Celsius the temperature is: %.2f \n",celsius);

    return 0;
}
