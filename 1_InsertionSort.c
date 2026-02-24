#include <stdio.h>

void insertionSort(int A[], int n) {
    int j, key, i;

    for (j = 2; j <= n; j++) {
        key = A[j];
        i = j - 1;

        while (i > 0 && A[i] > key) {
            A[i + 1] = A[i];
            i = i - 1;
        }

        A[i + 1] = key;
    }
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n + 1];

    printf("Enter elements:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }

    insertionSort(A, n);

    printf("Sorted array:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");
    return 0;
}