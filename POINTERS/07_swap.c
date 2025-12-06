//Write a program to swap two numbers without using a temporary variable.

#include <stdio.h>

// Function declaration using pointers
void swap(int *x, int *y);

void swap(int *x, int *y) {
    // Swapping without using a temporary variable
    *x = *x + *y; // Step 1: x now contains sum of x and y
    *y = *x - *y; // Step 2: y gets original value of x
    *x = *x - *y; // Step 3: x gets original value of y
}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Function call with address of a and b
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
