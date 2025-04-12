// Write a function to check if a character is a vowel or consonant.
#include <stdio.h>
int vowel(char ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    } else {
        printf("Consonant");
    }
}
int main() {
    char ch;
    scanf("%c", &ch);

    printf("%c", vowel(ch));
    return 0;
}
