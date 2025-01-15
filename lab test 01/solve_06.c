#include <stdio.h>

int main() {

    float r;
    printf("Radius of a circle is: ");
    scanf("%f",&r);
    float pi= 3.1416, area = pi*r*r;

    printf("Calculating the area of the circle: %f\n",area);

    return 0;
}
