// Find output 
#include <stdio.h>            // Header file for input/output functions
int main(){                   // Main function where program execution starts

    int x;               // Declare an integer variable x
    int *ptr;           // Declare a pointer variable ptr

    ptr = &x;          // Store the address of x in pointer ptr
    *ptr =0;            // Assign value 0 to x using the pointer


    printf(" x = %d\n", x);            // Print the value of x =0
    printf(" *ptr = %d\n", *ptr);     // Print the value pointed to by ptr (same 0

    *ptr += 5;                      // Add 5 to x using pointer (x becomes 5)
    printf(" x = %d\n", x);        // Print updated value of x = 5
    printf(" *ptr = %d\n", *ptr);  // Print updated value using pointer


    (*ptr)++;                 // Increment the value of x by 1 using pointer
    printf(" x = %d\n", x);    // Print final value of x=6
    printf( "*ptr = %d\n", *ptr);     // Print final value using pointer

    return 0;

}