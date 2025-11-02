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
    
    printf("Peak elements: ");
    for(i=0; i<n; i++) {
        if((i==0 || arr[i] >= arr[i-1]) && (i==n-1 || arr[i] >= arr[i+1])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}