//28. Write a C program to evaluate the marks in 5 subjects for a student and print whether the student has cleared that semester or not.(Cleared when the student got pass marks in all the 5 subjects)
#include <stdio.h>

int main() {
    int marks[5];
    int i;
    int cleared = 1;  // Assume cleared until a failing subject is found

    // Input marks for 5 subjects
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Check if all subjects are passed
    for (i = 0; i < 5; i++) {
        if (marks[i] < 40) {  // Assuming 40 is the passing mark
            cleared = 0;
            break;
        }
    }

    if (cleared) {
        printf("The student has cleared the semester.\n");
    } else {
        printf("The student has not cleared the semester.\n");
    }

    return 0;
}