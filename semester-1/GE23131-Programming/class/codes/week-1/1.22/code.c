//22. Write a C program to find the absolute value of a number.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    printf("The absolute value is: %d\n", num);
    return 0;
}