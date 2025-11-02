#include<stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter student count: ");
    scanf("%d", &n);
    
    int marks[n];
    printf("Enter %d marks: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &marks[i]);
    }
    
    printf("Students with 99: ");
    for(i=0; i<n; i++) {
        if(marks[i] == 99) {
            printf("%d ", i);
            count++;
        }
    }
    
    printf("\nTotal with 99: %d\n", count);
    return 0;
}