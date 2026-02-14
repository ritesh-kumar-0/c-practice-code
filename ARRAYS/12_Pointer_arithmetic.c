// How pointer arithmetic work?
#include<stdio.h>

int main (){
    int age = 22;     // Declare an integer variable
    int *ptr = &age;  //Declare a pointer 'ptr' that stores the address of 'age'
    printf("ptr = %u\n", ptr);
    
    ptr ++;    //// Pointer increment

    printf("ptr = %u\n", ptr);

    ptr--;  // Pointer decrement

    printf("ptr= %u\n", ptr);


    return 0;
}