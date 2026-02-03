//How do pointers and double pointers work in C?

#include <stdio.h>          // Header file for input/output functions

int main() {                // Main function where program execution starts

    int a = 10;             // Declare an integer variable and assign value 10

    int *p = &a;            // Declare a pointer p and store address of variable a

    int **pp = &p;          // Declare a double pointer pp and store address of pointer p

    printf("Value of a = %d\n", a);      
    // Prints value of variable a directly

    printf("Value using *p = %d\n", *p); 
    // Dereferencing pointer p to get value of a

    printf("Value using **pp = %d\n", **pp); 
    // Dereferencing double pointer pp to get value of a

    return 0;               // End of program
}
