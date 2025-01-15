#include<stdio.h>
int main(){
    int intsz = sizeof(int);
    int longlongintsz = sizeof(long long int);
    int doublesz = sizeof(double);
    int floatsz = sizeof(float);
    int charsz = sizeof(char);
    printf("Size of integer : %d bytes \n",intsz);
    printf("Size of float : %d bytes \n",floatsz);
    printf("Size of double : %d bytes \n",doublesz);
    printf("Size of char : %d bytes \n",charsz);
    return 0;
}
