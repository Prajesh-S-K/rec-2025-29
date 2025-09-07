//27. Write a C program to convert the given n digit number to n-1 digit number (leaving the digit present in one’s place. Ex: Input: 5678 Output:567)
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Remove the last digit
    num = num / 10;

    printf("The number after removing the last digit is: %d\n", num);
    return 0;
}