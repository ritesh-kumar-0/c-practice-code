// Comparing order ( < , >)
#include <stdio.h>

int main() {
    // Declare and initialize an integer array of size 5
    int arr[5] = {10, 20, 30, 40, 50};

    int *p = &arr[1];  // Pointer p stores the address of arr[1]
    int *q = &arr[3];  // // Pointer p stores the address of arr[1]

    if (p < q)  // Compare memory addresses stored in p and q
        printf("p comes before q\n");

    return 0;
}
