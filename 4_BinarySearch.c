#include <stdio.h>

int binarySearch(int A[], int low, int high, int key) {

    if (low > high)
        return -1;   

    int mid = (low + high) / 2;

    if (A[mid] == key)
        return mid;

    else if (key < A[mid])
        return binarySearch(A, low, mid - 1, key);

    else
        return binarySearch(A, mid + 1, high, key);
}

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(A, 0, n - 1, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}