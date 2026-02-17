#include <stdio.h>
int BinarySearch(int A[], int i, int j, int x){
    if(i > j){
        return -1;
    }

    int mid = (i + j) / 2;

    if(A[mid] == x){
        return mid;
    } else if(x < A[mid]){
        return BinarySearch(A, i, mid - 1, x);
    } else{
        return BinarySearch(A, mid + 1, j, x);
    }
}

int main(){
    int arr[6] = {1,3,4,6,7,9};
    int n = 6;
    int i = 0;
    int j = n - 1;
    int x = 6;

    int res = BinarySearch(arr,i,j,x);

    if(res == -1)
        printf("Element not found");
    else
        printf("Element found at index %d\n", res);
    return 0;
}
