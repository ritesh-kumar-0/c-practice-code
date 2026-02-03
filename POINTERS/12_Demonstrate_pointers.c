//Write a program to demonstrate pointer usage.
#include<stdio.h>
int main(){
    int a = 10;        // Declare an integer variable . a store the value 10
    int *p;            // Declare a pointer variable

    p = &a;            // Store address of a in pointer p

    printf("Value of a           = %d\n", a);     // Direct access
    printf("Address of a         = %p\n", &a);    // Address of a
    printf("Value stored in p    = %p\n", p);     // Address stored in pointer
    printf("Value using *p       = %d\n", *p);    // Dereferencing pointer

    return 0;          // End of program
}