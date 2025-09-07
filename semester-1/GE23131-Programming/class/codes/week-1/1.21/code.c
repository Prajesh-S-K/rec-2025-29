//21. Write a C program to check if a person is a child, teenager, or adult.
#include <stdio.h>

int main() {
    int age;
    printf("Enter the age of the person: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12) {
        printf("The person is a child.\n");
    } else if (age >= 13 && age <= 19) {
        printf("The person is a teenager.\n");
    } else {
        printf("The person is an adult.\n");
    }

    return 0;
}