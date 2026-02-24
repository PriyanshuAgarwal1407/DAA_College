#include <stdio.h>

int partition(int A[], int p, int r) {
    int x = A[r];    
    int i = p - 1;

    for (int j = p; j <= r - 1; j++) {
        if (A[j] <= x) {
            i = i + 1;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }

    int temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;

    return i + 1;
}

void quicksort(int A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    quicksort(A, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}