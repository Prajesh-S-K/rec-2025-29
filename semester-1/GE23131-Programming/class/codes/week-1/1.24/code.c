//24. Write a C program to check if a number is a multiple of 4.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 4 == 0) {
        printf("%d is a multiple of 4.\n", num);
    } else {
        printf("%d is not a multiple of 4.\n", num);
    }

    return 0;
}