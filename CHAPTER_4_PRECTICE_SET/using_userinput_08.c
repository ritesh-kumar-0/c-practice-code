#include <stdio.h>

int main() {
    int num, count, sum = 0;

    
    printf("Enter the number whose multiples you want to sum: ");
    scanf("%d", &num);

    printf("Enter how many multiples you want to sum: ");
    scanf("%d", &count);

    
    for (int i = 1; i <= count; i++) {
        sum += (num * i);
    }

    
    printf("The sum of first %d multiples of %d is %d\n", count, num, sum);

    return 0;
}