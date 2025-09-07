//18. Write a C program to check if a character is vowel or consonant.
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("The character is a vowel.\n");
    } else {
        printf("The character is a consonant.\n");
    }

    return 0;
}