#include<stdio.h>

int m1(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("M1: %d %d\n", a, b);
    return 0;
}

int m2(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("M2: %d %d\n", a, b);
    return 0;
}

int m3(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("M3: %d %d\n", a, b);
    return 0;
}

int m4(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("M4: %d %d\n", *a, *b);
    return 0;
}

int main() {
    int x, y;
    
    printf("Enter 2 num: ");
    scanf("%d %d", &x, &y);
    
    printf("Start: %d %d\n", x, y);
    m1(x, y);
    m2(x, y);
    m3(x, y);
    m4(&x, &y);
    
    return 0;
}