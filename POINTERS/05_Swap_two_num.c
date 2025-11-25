// WAP to swap two numbers .

#include <stdio.h>

void swap(int *x , int *y);   // function declaration with pointers.

void swap(int *x , int *y){
    // Temporary variable to store one value during swap
    int temp;
    temp = *x;  // Store the value pointed by x into temp
    *x = *y;
    *y = temp;

}

 int main(){
    int a = 6;
    int b = 4;
    // Passing the addresses of a and b to the swap function
    swap( &a , &b);
    // After calling swap, the values of a and b are changed
    printf("The value a is %d and the value of b is %d", a, b);
    return 0;

}