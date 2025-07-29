//Remove all occurrences of a given number in an array.
//Input: {1, 2, 2, 3, 4, 2, 5}, Remove: 2
//Output: {1, 3, 4, 5}


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int numToRemove = 2;
    int newArr[100];  // Temporary array to hold filtered values
    int j = 0;

    // Copy elements except the one to remove
    for (int i = 0; i < n; i++) {
        if (arr[i] != numToRemove) {
            newArr[j++] = arr[i];
        }
    }

    // Display the updated array
    printf("Updated Array: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    return 0;
}