#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check voting eligibility (18 years or older)
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else if (age > 0) {
        printf("You are not eligible to vote yet.\n");
    } else {
        printf("Invalid input! Age cannot be zero or negative.\n");
    }

    return 0;
}
