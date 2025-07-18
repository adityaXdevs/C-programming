#include <stdio.h>

// Function to print odd and even numbers
void printOddEven(int *arr, int size) {
    printf("Even numbers: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main() {
    int numbers[] = {12, 7, 9, 18, 33, 4, 26};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Function call
    printOddEven(numbers, size);

    return 0;
}