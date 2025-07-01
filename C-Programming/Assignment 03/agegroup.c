#include <stdio.h>

int main() {
    int age;

    // Input
    printf("Enter age: ");
    scanf("%d", &age);

    // Check age group
    if (age < 12) {
        printf("Child\n");
    }
    else if (age >= 12 && age <= 19) {
        printf("Teenager\n");
    }
    else if (age >= 20 && age <= 59) {
        printf("Adult\n");
    }
    else if (age >= 60) {
        printf("Senior\n");
    }
    else {
        printf("Invalid age\n");
    }

    return 0;
}
