#include<stdio.h>

int main() {
    int n1, n2, hcf;
    
    printf("enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    int a = n1, b = n2;
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    hcf = a;
    printf("HCF of %d and %d is %d\n", n1, n2, hcf);
    
    return 0;
}