#include <stdio.h>

void merge(int A[], int p, int q, int r) {

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], R[n2];

    // Copy data into temp arrays
    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];

    for (int j = 0; j < n2; j++)
        R[j] = A[q + 1 + j];

    int i = 0, j = 0, k = p;

    // Merge the temp arrays back
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

// MERGE-SORT(A, p, r)
void mergeSort(int A[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;

        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    mergeSort(A, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }

    printf("\n");
    return 0;
}