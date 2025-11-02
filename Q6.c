#include<stdio.h>
#include<math.h>

int d2b(int d) {
    int b[32], i = 0;
    
    while (d > 0) {
        b[i] = d % 2;
        d = d / 2;
        i++;
    }
    
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", b[j]);
    }
    printf("\n");
    return 0;
}

int b2d(long long b) {
    int d = 0, i = 0, r;
    
    while (b != 0) {
        r = b % 10;
        b /= 10;
        d += r * pow(2, i);
        i++;
    }
    
    printf("Decimal: %d\n", d);
    return 0;
}

int main() {
    int ch, d;
    long long b;
    
    printf("1. D to B\n2. B to D\nChoice: ");
    scanf("%d", &ch);
    
    if (ch == 1) {
        printf("Enter decimal: ");
        scanf("%d", &d);
        d2b(d);
    } else if (ch == 2) {
        printf("Enter binary: ");
        scanf("%lld", &b);
        b2d(b);
    } else {
        printf("Bad choice\n");
    }
    
    return 0;
}