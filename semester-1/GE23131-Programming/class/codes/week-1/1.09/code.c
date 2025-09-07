//9. Write a C program to check if a number is a multiple of 10.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 10 == 0) {
        printf("The number is a multiple of 10.\n");
    } else {
        printf("The number is not a multiple of 10.\n");
    }

    return 0;
}