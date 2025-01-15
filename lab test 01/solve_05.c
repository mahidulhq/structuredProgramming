#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first value, a: ");
    scanf("%d", &a);
    printf("Enter the second value, b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Swapped the values of two variable:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
