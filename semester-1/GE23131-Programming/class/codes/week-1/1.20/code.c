//20. Write a C program to check if a number is a two-digit number.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 99) {
        printf("The number is a two-digit number.\n");
    } else {
        printf("The number is not a two-digit number.\n");
    }

    return 0;
}