#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y) {
    return x + y;
}
  
int main() {
    int a = 6;
    int b = 7;
    int c = sum(a, b);
    printf("The sum is %d\n", c);
   

    int a1 = 5;
    int b1 = 4;
    int c1 = sum(a1, b1);
    printf("The sum is %d\n", c1);
   

    return 0;
}