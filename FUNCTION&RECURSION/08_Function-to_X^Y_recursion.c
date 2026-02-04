//Write a function for power (x^y) using recursion.
#include <stdio.h>

int power(int x, int y) {
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}

int main() {
    int base, exponent;

    printf("Enter base number (x): ");
    scanf("%d", &base);

    printf("Enter exponent (y): ");
    scanf("%d", &exponent);

    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}
