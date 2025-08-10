// Check if three sides form a valid triangle

#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Valid Triangle");
    else
        printf("Not a Valid Triangle");
    return 0;
}
