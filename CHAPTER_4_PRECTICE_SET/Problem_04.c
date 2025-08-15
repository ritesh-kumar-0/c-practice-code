//QUESTION:
//Write a program to implement program 5 using 'for' and 'do-while' loop.
        // USING FOR LOOP

#include <stdio.h>

int main() {
    int sum = 0;

    
    for (int i = 1; i <= 10; i++) {
        sum += i;  // Add i to sum
    }

    printf(" The Sum of first 10 natural number is: %d\n", sum);

    return 0;
}




