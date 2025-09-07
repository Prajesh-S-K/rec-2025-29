//12. Write a C program to check if a number is between 1 and 100.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 1 && num < 100) {
        printf("The number is between 1 and 100.\n");
    } else {
        printf("The number is not between 1 and 100.\n");
    }

    return 0;
}