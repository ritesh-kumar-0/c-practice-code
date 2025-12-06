// Write a program to check whether a number is palindrome or not. 
#include <stdio.h>

int main() {
    int num, originalNum, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store original number

    while(num != 0) {
        remainder = num % 10;           
        reverse = reverse * 10 + remainder;
        num = num / 10;                 
    }

    if(originalNum == reverse) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is not a Palindrome number.\n", originalNum);
    }

    return 0;
}
