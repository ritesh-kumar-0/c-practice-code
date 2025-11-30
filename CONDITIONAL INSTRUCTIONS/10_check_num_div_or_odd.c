/* Write a program to check whether a number is odd and divisible by 3 (use logical 
operators).*/ 

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 != 0 && num % 3 == 0) {
        printf("%d is odd and divisible by 3.\n", num);
    }
    else {
        printf("%d is not odd and divisible by 3.\n", num);
    }

    return 0;
}
