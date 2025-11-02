#include<stdio.h>

int main() {
    int n, i, pos = -1;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d scores: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n; i++) {
        if(arr[i] == 99) {
            pos = i;
            break;
        }
    }
    
    if(pos != -1)
        printf("First 99 at index: %d\n", pos);
    else
        printf("99 not found\n");
    
    return 0;
}