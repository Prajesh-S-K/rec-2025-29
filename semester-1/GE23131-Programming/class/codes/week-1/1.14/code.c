//14. Write a C program to check if a number is odd and greater than 50.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 != 0 && num > 50) {
        printf("The number is odd and greater than 50.\n");
    } else {
        printf("The number is not odd and greater than 50.\n");
    }

    return 0;
}