// Check if a number is Armstrong

#include<stdio.h>
#include<math.h>
int main() {
    int num,org,remainder,res= 0,n=0;
    scanf("%d", &num);

    org = num;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        res += pow(remainder, n);
        temp /= 10;
    }

    if (res == org)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");
    return 0;
}
