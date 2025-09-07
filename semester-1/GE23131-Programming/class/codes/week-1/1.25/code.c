//25. Write a C program to check if salary is taxable (> 5000).
#include <stdio.h>

int main() {
    float salary;
    printf("Enter the salary: ");
    scanf("%f", &salary);

    if (salary > 5000) {
        printf("The salary is taxable.\n");
    } else {
        printf("The salary is not taxable.\n");
    }

    return 0;
}