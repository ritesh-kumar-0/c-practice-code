//WAP to Print All Elements of an Array.
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};  // Initialize array
    int i;                           // Loop variable

    for(i = 0; i < 5; i++) {         // Loop runs from index 0 to 4
        printf("%d ", a[i]);         // Print each element
    }

    return 0;                        // End of program
}
