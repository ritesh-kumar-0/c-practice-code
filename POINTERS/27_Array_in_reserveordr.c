//WAP in C to print the elements of an  Array in reserve order.
#include <stdio.h>                     // Header file for printf()

int main() {                           // Main function starts

    int arr[6] = {10, 20, 30, 40, 50, 60}; // Declare and initialize array
    int i;                             // Loop variable

    printf("Array in reverse order:\n");

    for (i = 5; i >= 0; i--) {         // Loop from last index to first
        printf("%d ", arr[i]);         // Print array element
    }

    return 0;                          // End of program
}
