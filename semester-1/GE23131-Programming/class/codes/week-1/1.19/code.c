//19. Write a C program to check if a student has passed (marks ≥ 40).
#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks obtained: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }

    return 0;
}