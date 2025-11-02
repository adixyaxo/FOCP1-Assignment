#include<stdio.h>

int main() {
    int n, f = 0, s = 1, nx, i;
    
    printf("Enter terms: ");
    scanf("%d", &n);
    
    printf("Fib: ");
    
    for (i = 0; i < n; i++) {
        if (i <= 1)
            nx = i;
        else {
            nx = f + s;
            f = s;
            s = nx;
        }
        printf("%d ", nx);
    }
    printf("\n");
    
    return 0;
}