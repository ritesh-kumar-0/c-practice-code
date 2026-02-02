//Write a program to swap two numbers using pointers. 
#include <stdio.h>

int main() {
    int a, b, temp;
    int *p1, *p2;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    temp = *p1;   // temp = value at p1 (a)
    *p1 = *p2;    // value at p1 (a) = value at p2 (b)
    *p2 = temp;   // value at p2 (b) = temp

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
