
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }
    return factorial(n - 1) * n;
}

int main() {
    int a;

    // Ask user for input
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &a);

    // Handle negative input
    if (a < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %d\n", a, factorial(a));
    }

    return 0;
}