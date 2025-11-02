#include<stdio.h>

int main() {
    int n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int last = arr[n-1];
    for(i=n-1; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    
    printf("After rotation: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}