//Write a program to find the reverse of a number.
#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        remainder = num % 10;        // Get last digit
        reverse = reverse * 10 + remainder; // Add digit to reverse
        num = num / 10;             // Remove last digit
    }
    
    printf("Reversed number = %d\n", reverse);
    
    return 0;
}
