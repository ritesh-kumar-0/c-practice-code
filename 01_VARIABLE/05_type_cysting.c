//Write a C program to demonstrate type conversion from float to int.
#include <stdio.h>

int main(){
    int n = 45;
    float m = 32.23;
    n = (int) m; //convert the data type to integer.
    printf("%d\n", n);
    return 0;
}