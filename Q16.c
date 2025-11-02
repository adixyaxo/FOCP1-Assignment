#include<stdio.h>

int main() {
    int n, i, pos, val;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n+1];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Before: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    printf("Enter position (1=front, 2=middle, 3=end): ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);
    
    if(pos == 1) {
        for(i=n; i>0; i--) arr[i] = arr[i-1];
        arr[0] = val;
    }
    else if(pos == 2) {
        int mid = n/2;
        for(i=n; i>mid; i--) arr[i] = arr[i-1];
        arr[mid] = val;
    }
    else {
        arr[n] = val;
    }
    
    printf("After: ");
    for(i=0; i<=n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}