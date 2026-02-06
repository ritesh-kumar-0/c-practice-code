//Call by Reference using pointer.
#include <stdio.h>          // Includes standard input-output functions like printf()
// Function definition
void change(int *x) {       //  receives address of variable using pointer
    *x = 50;                // Dereferencing pointer x to change the original variable's value
}

int main() {                // Main function where program execution starts
    int a = 10;             // Declare integer variable 'a' and initialize with value 10
    change(&a);             // Pass address of 'a' to function (call by reference)
    printf("a = %d", a);    // Print value of 'a' (value is changed)
    return 0;               // End program successfully
}
