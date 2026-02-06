// Call By value (Without pointer)
#include <stdio.h>          // Includes standard input-output header file
// Function definition
void change(int x) {        //  receives a COPY of value (call by value)
    x = 50;                 // Changes only the local copy of x, not the original variable
}
// Main function
int main() {                //  program execution starts here
    int a = 10;             // Declare integer variable 'a' and initialize it with 10
    change(a);              // Pass value of 'a' to function change()
    printf("a = %d", a);    // Print value of 'a' (remains unchanged)
    return 0;               // End of program, return 0 to operating system
}
