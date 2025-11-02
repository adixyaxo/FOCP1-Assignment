#include<stdio.h>
#include<math.h>

int main() {
    int num, og, rem, result = 0, n = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    og = num;
    
    while (og != 0) {
        og /= 10;
        n++;
    }
    
    og = num;
    
    while (og != 0) {
        rem = og % 10;
        result += pow(rem, n);
        og /= 10;
    }
    
    if (result == num)
        printf("%d is a armstrong number\n", num);
    else
        printf("%d is not a armstrong number\n", num);
    
    return 0;
}