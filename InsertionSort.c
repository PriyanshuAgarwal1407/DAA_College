#include <stdio.h>
int main() {
    int n, m, i, j, key;
    int arr[10];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(m = 1; m <= n; m++){
        scanf("%d",&arr[m]);
    }
    
    for(j=2; j<=n; j++){
        key = arr[j];
        i = j-1;
        
        while(i > 0 && arr[i] > key){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }   
    printf("Sorted array:\n");
    for(int j=1; j<=n; j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    return 0;
}