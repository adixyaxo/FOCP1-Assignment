#include<stdio.h>

int main() {
    int n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d scores: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0], min = arr[0];
    for(i=1; i<n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    
    printf("Max score: %d\nMin score: %d\n", max, min);
    return 0;
}