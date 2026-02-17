#include <stdio.h>
int main(){
    int arr[10];
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int a = 1; a <= n; a++) {
        scanf("%d", &arr[a]);
    }
    
    int temp;
    for(int i = 1; i <= n-1; i++) {
        for(int j = 1; j <= n-i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array:\n");
    for(int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}