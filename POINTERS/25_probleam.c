//WAP in C to find the maximum number between two numbers using a pointer.

#include <stdio.h>                      // Header file for input-output functions

void findMax(int *a, int *b);           // Function declaration using pointers

int main() {                            // Main function starts
    int x = 15, y = 25;                 // Declare and initialize two integers

    findMax(&x, &y);                    // Function call with addresses of x and y

    return 0;                           // End of program
}

void findMax(int *a, int *b) {           // Function definition with pointer parameters
    if (*a > *b) {                      // Compare values using dereferencing
        printf("Maximum number = %d\n", *a);  // Print value of a if greater
    } else {
        printf("Maximum number = %d\n", *b);  // Otherwise print value of b
    }
}

