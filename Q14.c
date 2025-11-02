#include<stdio.h>

int checkPrime(int num) {
    if(num < 2) return 0;
    for(int i=2; i*i<=num; i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, i, count=0;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(checkPrime(arr[i])) count++;
    }
    
    printf("Prime numbers count: %d\n", count);
    return 0;
}