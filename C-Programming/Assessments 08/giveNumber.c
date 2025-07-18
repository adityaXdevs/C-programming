#include <stdio.h>

// Function to search a number in array
int searchNumber(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return index where number is found
        }
    }
    return -1; // Return -1 if number not found
}

int main() {
    int numbers[] = {12, 45, 78, 33, 56};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 33;

    // Call the search function
    int index = searchNumber(numbers, size, target);

    if (index != -1) {
        printf("Number %d found at index %d\n", target, index);
    } else {
        printf("Number %d not found in array\n", target);
    }

    return 0;
}