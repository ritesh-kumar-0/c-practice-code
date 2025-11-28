//Write a C program to add two numbers and display their sum.&What is the purpose of the modulus operator (%) in this program?
#include <stdio.h>

int main(){
    int a = 4;
    int b = 3;
    int c = a+b;
    printf("The value of a is %d and value of b is %d and sum is %d", a , b, c);
    
//modulus operator is used to get the remainder.
printf("The remainder when a is divided by b is %d\n", a%b);
return 0;

}   