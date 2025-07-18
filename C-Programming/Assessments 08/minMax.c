#include <stdio.h>

// Function declaration
void findMinMax(int *arr, int size, int *min, int *max);

// Function definition
void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0]; // Initialize both to first element

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int numbers[] = {42, 15, 88, 3, 29};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int min, max;

    // Call the function
    findMinMax(numbers, size, &min, &max);

    printf("Minimum number = %d\n", min);
    printf("Maximum number = %d\n", max);

    return 0;
}