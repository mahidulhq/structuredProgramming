// Check if a year is a leap year

#include <stdio.h>
int main() {
    int year;
    scanf("%d", &year);
    printf((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? "Leap Year" : "Not a Leap Year");
    return 0;
}
