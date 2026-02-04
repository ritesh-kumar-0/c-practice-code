//How do pointer operations affect the value of a variable in C?
#include<stdio.h>    // Header file for input and output functions

int main(){         // Main function where execution starts
    int a = 20, *p;   // Declare integer variable a and pointer p

    p = &a;          // Store the address of variable a in pointer p
    ++*p;            // Increment the value pointed by p (a becomes 21)
    a = a+5;       // Add 5 to a (a becomes 26)
    --*p;              // Decrement the value pointed by p (a becomes 25)
    --a;                       // Decrement a directly (a becomes 24)
    printf("%d %d",a,*p);            // Print value of a and value pointed by p
    return 0;
}