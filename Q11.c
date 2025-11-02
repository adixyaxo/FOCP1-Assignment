#include<stdio.h>

int main() {
    int n, i, e=0, o=0;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n], even[n], odd[n];
    printf("Enter %d scores: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }
    
    printf("Even scores: ");
    for(i=0; i<e; i++) printf("%d ", even[i]);
    
    printf("\nOdd scores: ");
    for(i=0; i<o; i++) printf("%d ", odd[i]);
    printf("\n");
    
    return 0;
}