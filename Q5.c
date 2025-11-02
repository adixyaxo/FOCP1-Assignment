
#include<stdio.h>

int main() {
    float x, y;
    
    printf("Enter x y: ");
    scanf("%f %f", &x, &y);
    
    if (x == 0 && y == 0)
        printf("At center\n");
    else if (x == 0)
        printf("On Y line\n");
    else if (y == 0)
        printf("On X line\n");
    else if (x > 0 && y > 0)
        printf("Q1\n");
    else if (x < 0 && y > 0)
        printf("Q2\n");
    else if (x < 0 && y < 0)
        printf("Q3\n");
    else
        printf("Q4\n");
    
    return 0;
}