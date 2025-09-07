//10. Write a C program for a simple calculator (add or subtract).
#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+ or -): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %d + %d = %d\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %d - %d = %d\n", num1, num2, result);
    } else {
        printf("error.\n");
    }

    return 0;
}