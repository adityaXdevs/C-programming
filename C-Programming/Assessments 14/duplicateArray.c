//2.Find duplicate elements in an array.
//Input: {1, 2, 3, 2, 4, 5, 1}
//Output: Duplicate elements: 1, 2
#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j;

    printf("Duplicate elements: ");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                // Check if it's already printed
                int isDuplicatePrinted = 0;
                for(int k = 0; k < i; k++) {
                    if(arr[k] == arr[i]) {
                        isDuplicatePrinted = 1;
                        break;
                    }
                }
                if(!isDuplicatePrinted) {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }

    return 0;
}