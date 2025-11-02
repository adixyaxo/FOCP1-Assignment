#include<stdio.h>

int main() {
    int n, i, pos;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Before: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    printf("Delete from (1=front, 2=middle, 3=end): ");
    scanf("%d", &pos);
    
    if(pos == 1) {
        for(i=0; i<n-1; i++) arr[i] = arr[i+1];
        n--;
    }
    else if(pos == 2) {
        int mid = n/2;
        for(i=mid; i<n-1; i++) arr[i] = arr[i+1];
        n--;
    }
    else {
        n--;
    }
    
    printf("After: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}