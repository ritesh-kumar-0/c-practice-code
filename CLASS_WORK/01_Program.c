// WAP to print the factorial of given number.

#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;  // Declare and initialize factorial

    printf("Enter your number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial of this number is not defined.\n");
    else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}