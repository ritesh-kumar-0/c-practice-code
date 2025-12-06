//Write a program to swap two numbers using a temporary variable.
#include <stdio.h>

// Function declaration with pointer parameters
void swap(int *x, int *y);

void swap(int *x, int *y) {
    int temp;   // Temporary variable to store one value

    temp = *x;  // Store value of x
    *x = *y;    // Put value of y into x
    *y = temp;  // Put original x value into y
}

int main() {
    int a, b;

    // Input from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Function call with addresses of a and b
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
