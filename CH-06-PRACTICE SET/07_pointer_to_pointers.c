/*Write a program to print the value of a variable i by using “pointer to pointer” type 
of variable. */
#include <stdio.h>

int main() {
    int i = 10;       // A normal integer variable
    int *ptr;        // Pointer to int
    int **pptr;      // Pointer to pointer to int

    ptr = &i;        // ptr stores address of i
    pptr = &ptr;     // pptr stores address of ptr

    printf("Value of i = %d\n", i);
    printf("Value using pointer ptr = %d\n", *ptr);
    printf("Value using pointer to pointer pptr = %d\n", **pptr);

    return 0;
}
