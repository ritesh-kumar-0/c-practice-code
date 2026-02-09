//WAP in C to find the maximum number between two numbers without pointer.
#include <stdio.h>          // Header file for printf()

int findMax(int a, int b);  // Function declaration (no pointers)

int main() {
    int x = 10, y = 20;     // Declare and initialize two numbers
    int max;                // Variable to store maximum value

    max = findMax(x, y);   // Function call (call by value)

    printf("Maximum number = %d\n", max);  // Print result

    return 0;              // End of program
}

int findMax(int a, int b) { // Function definition
    if (a > b) {
        return a;          // Return a if greater
    } else {
        return b;          // Otherwise return b
    }
}
