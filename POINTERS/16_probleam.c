// How to print value 
#include<stdio.h>              // Header file for input and output functions

int main(){                    // Main function where program execution starts

    int age = 22;              // Declare an integer variable 'age' and assign value 22

    int *ptr = &age;           // Declare a pointer ptr and store the address of 'age'

    // value
    printf("%d\n", age);       // Print value of age directly

    printf("%d\n", *ptr);      // Dereference pointer ptr to get value of age

    printf("%d\n", *(&age));   // Get address of age using & and dereference it to get value

    return 0;                 // End of program
}
