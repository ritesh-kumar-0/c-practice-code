//Swap 2 Numbers, a&b.
#include<stdio.h>  // Header file for input/output functions

void Swap(int a, int b);  // Function declaration (prototype)
int main(){              // Main function where program execution starts

    int x=3, y=5;     // Declare and initialize two integer variables

    Swap(x,y);            // Call Swap function with values of x and y

    printf("x=%d and y=%d\n", x,y);  // Print values of x and y in main function (unchanged)

    return 0;
}
// Call by value
void Swap(int a, int b){      // Function definition with local copies of x and y
    int t = a;           // Store value of a in temporary variable t
    a = b;              // Assign value of b to a
    b = t;              // Assign value of t (old a) to b
    printf("a=%d and b=%d\n", a,b);  // Print swapped values inside function
}