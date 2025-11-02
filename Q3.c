#include<stdio.h>

int main() {
    int a, b, result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    result = a + (~b + 1);
    
    printf("%d - %d = %d\n", a, b, result);
    return 0;
}