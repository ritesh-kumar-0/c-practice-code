
#include<stdio.h>

int main (){
    char star = '*';   // Declare a char variable and store '*'
    char *ptr = &star;  // Pointer 'ptr' stores the address of 'star'
    printf("ptr = %u\n", ptr); // Prints the address stored in ptr
    
    ptr ++;    //Pointer increment

    printf("ptr = %u\n", ptr);

    ptr--;  // pointer decrement

    printf("ptr= %u\n", ptr);


    return 0;
}