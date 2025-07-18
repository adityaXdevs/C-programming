#include <stdio.h>

// Function to calculate sum
int sumOfArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Can also use *(arr + i)
    }
    return sum;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the function
    int total = sumOfArray(numbers, size);

    printf("Sum of all elements = %d\n", total);

    return 0;
}