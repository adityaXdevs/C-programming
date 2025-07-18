#include <stdio.h>

// Function to print alternate elements
void printAlternate(int *arr, int size) {
    printf("Alternate elements: ");
    for (int i = 0; i < size; i += 2) {  // Step by 2
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {10, 21, 32, 43, 54, 65, 76};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call function
    printAlternate(numbers, size);

    return 0;
}