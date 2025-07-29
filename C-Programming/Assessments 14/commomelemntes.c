//.Find common elements in three sorted arrays.
//Input: {1, 5, 10, 20, 40}, {6, 7, 10, 20, 80}, {3, 4, 10, 20, 30, 40}
//Output: {10, 20}
//


#include <stdio.h>

int main() {
    int A[] = {1, 5, 10, 20, 40};
    int B[] = {6, 7, 10, 20, 80};
    int C[] = {3, 4, 10, 20, 30, 40};

    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);
    int n3 = sizeof(C) / sizeof(C[0]);

    int i = 0, j = 0, k = 0;

    printf("Common Elements: ");
    while (i < n1 && j < n2 && k < n3) {
        if (A[i] == B[j] && B[j] == C[k]) {
            printf("%d ", A[i]);
            i++; j++; k++;
        } else if (A[i] < B[j]) {
            i++;
        } else if (B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }

    printf("\n");
    return 0;
}