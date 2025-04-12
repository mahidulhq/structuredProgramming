// Write a function to find the maximum of three numbers.
#include<stdio.h>
int fmax(int a, int b, int c) {
    if (a >= b && a >= c ) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c, m;
    scanf("%d %d %d", &a, &b, &c);

    m = fmax(a, b, c);
    printf("%d\n", m);
    return 0;
}
