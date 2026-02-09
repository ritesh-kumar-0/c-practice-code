// WAP in C to print all the letters in english alphabet using a pointer.
#include <stdio.h>                     // Header file for printf()

int main() {                           // Main function starts

    char ch = 'A';                     // Declare a character variable and initialize with 'A'
    char *p = &ch;                   // Pointer ptr stores address of ch

    while (*p <= 'Z') {              // Loop until value pointed by p reaches 'Z'
        printf("%c ", *p);           // Print the character using pointer
        (*p)++;                      // Increment the character value using pointer
    }

    return 0;                          // End of program
}
