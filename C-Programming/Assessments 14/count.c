//
//3.Count the frequency of each element in an array.
//Input: {1, 2, 2, 3, 3, 3, 4}
//Output: 1 ? 1 time, 2 ? 2 times, 3 ? 3 times, 4 ? 1 time

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];  // Holds frequency count
    int visited = -1;

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (freq[i] != visited) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = visited;  // Mark as visited
                }
            }
            freq[i] = count;  // Store frequency
        }
    }

    // Output frequency
    for (int i = 0; i < n; i++) {
        if (freq[i] != visited) {
            printf("%d ? %d time%s\n", arr[i], freq[i], freq[i] > 1 ? "s" : "");
        }
    }

    return 0;
}