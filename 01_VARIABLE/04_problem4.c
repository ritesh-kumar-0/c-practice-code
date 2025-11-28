//Write a C program to calculate the Simple Interest using the formula:
//  SI = (P × R × T) / 100
#include <stdio.h>

int main(){
    float p = 37.0, f;
    int r =8;
    int t= 5;
    float intrest = p*r*t/100;
    printf("The value of simple intrest is %f", intrest);
    return 0;

}    
