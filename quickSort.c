#include<stdio.h>
int partition(int arr[], int p, int r){
    int x = arr[r]; 
    int i = p - 1;
    int temp;

    for(int j = p; j < r; j++){
        if(arr[j] <= x){
            i++;

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;

    return i + 1;
}

void quickSort(int arr[], int p, int r){
    if(p < r){
        int q = partition(arr, p, r);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}

int main(){
    int arr[5] = {2, 3, 6, 4, 2};
    int n = 5;

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

