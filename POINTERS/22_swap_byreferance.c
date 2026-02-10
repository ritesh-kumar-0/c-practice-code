//Swap 2 Numbers, a&b.
#include<stdio.h>

void Swap(int *a, int *b);  // Function declaration with pointer parameters
int main(){
    int x=3, y=5;     // Declare and initialize two integer variables
    Swap(&x,&y);      // Pass addresses of x and y to the Swap function
    printf("x=%d and y=%d\n", x,y);  // Print swapped values of x and y

    return 0;
}
// Call by Referance
void Swap(int *a, int *b){    // a and b receive addresses of x and y
    int t = *a;     // Store value at address a (value of x) in temp
    *a = *b;       // Assign value of y to x using pointer
    *b = t;        // Assign stored value of x to y
    
}