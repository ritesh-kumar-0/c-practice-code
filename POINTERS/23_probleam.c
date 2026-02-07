// Will the address output be same ?

#include<stdio.h>                 // Header file for printf()

void printAddress(int n);         // Function declaration (call by value)

int main(){                       // Main function starts

    int n = 4;                    // Declare and initialize variable n

    printf("Address of n is : %p\n", &n);  
    // Prints address of n in main function

    printAddress(n);              // Pass value of n (not address) to function

    return 0;                     // End of program
}

// Function using call by value
void printAddress(int n){          // Receives a COPY of n

    printf("Address of n is : %p\n", &n);  
    // Prints address of local copy of n (different from main)
}
