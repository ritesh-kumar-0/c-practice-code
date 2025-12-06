//Write a program to swap two numbers without using a temporary variable.
#include <stdio.h>

int main() {
    int a, b;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic without using temp variable
    a = a + b;  // Step 1
    b = a - b;  // Step 2
    a = a - b;  // Step 3

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
