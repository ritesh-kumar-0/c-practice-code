/* . Write a program to change the value of a variable to ten times of its current 
value. */
#include <stdio.h>

// Function prototype (sirf declare kar rahe hain)
void makeTenTimes(int *ptr);

int main() {
    int num = 5;  // Variable initialization

    printf("Before change: %d\n", num);

    makeTenTimes(&num);  // Pass address to the function

    printf("After change (10 times): %d\n", num);

    return 0;  // Successful execution
}

// Function definition (actual body)
void makeTenTimes(int *ptr) {
    
    *ptr = (*ptr) * 10;
}
