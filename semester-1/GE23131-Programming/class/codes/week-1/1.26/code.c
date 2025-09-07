//26. Write a C program to get a two-digit number and reverse it.
#include <stdio.h>

int main() {
    int num, reversedNum;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    // Extract digits
    int tens = num / 10;
    int units = num % 10;

    // Reverse the number
    reversedNum = (units * 10) + tens;

    printf("The reversed number is: %d\n", reversedNum);
    return 0;
}