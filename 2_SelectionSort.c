#include <stdio.h>

void selectionSort(int A[], int n) {
    int i, j, min_index, temp;

    for (i = 1; i <= n - 1; i++) {
        min_index = i;

        for (j = i + 1; j <= n; j++) {
            if (A[j] < A[min_index]) {
                min_index = j;
            }
        }

        temp = A[i];
        A[i] = A[min_index];
        A[min_index] = temp;
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

    selectionSort(A, n);

    printf("Sorted array:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");
    return 0;
}