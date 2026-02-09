// Write a function to calculate the sum, product & average of 2 numbers.
// Print that average in the main function.

#include<stdio.h>

// Function declaration(Prototype)
void calculate( int a , int b , int *sum, int *product, int *avg);

int main(){
    int a = 3, b = 5;
    int sum, product,avg;
    // Call the function and pass values of a and b
    // Pass address of sum ,product and avg variable 
    calculate(a,b, &sum, &product, &avg);

    printf("sum = %d, product = %d, avg =%d\n", sum , product, avg);

    return 0;
}
// Function definition
void calculate( int a , int b , int *sum, int *product, int *avg){
    *sum = a+b;
    *product = a*b;
    *avg = (a+b) /2;
}


