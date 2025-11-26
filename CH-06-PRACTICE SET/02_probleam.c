/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why?
*/
#include <stdio.h>  

// Function that takes pointer as argument
int returning_5(int* ptr) {

    // Printing the address stored in pointer
    printf("The value of ptr (address) is %p\n", ptr);

    // Dereferencing the pointer to get the value stored at that address
    printf("The value at ptr (dereference) is %d\n", *ptr);

    return 5;   
}

int main() {
    int i = 4;          // Variable declaration and initialization
    int *ptr = &i;      // Pointer storing the address of variable i

    // Printing address of i from main function
    printf("The address of i in main: %p\n", &i);

    // Calling the function and passing pointer as argument
    returning_5(ptr);

    return 0;   // Program ends successfully
}
