
#include<stdio.h>

int main (){
    float marks = 22.00;    // Declare a float variable 
    float *ptr = &marks;    // Pointer 'ptr' stores the address of 'marks'
    
    printf("ptr = %u\n", ptr);  // Print the address stored in ptr
    
    ptr ++;     // Pointer arithmetic:  Pointer increment

    printf("ptr = %u\n", ptr);

    ptr--;   // Pointer decrement

    printf("ptr= %u\n", ptr);


    return 0;
}