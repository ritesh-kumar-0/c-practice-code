#include<stdio.h>

int main (){
    float price = 50.00;
    float *ptr = &price;
    printf("ptr = %u\n", ptr);
    
    ptr ++;

    printf("ptr = %u\n", ptr);

    ptr--;

    printf("ptr= %u\n", ptr);


    return 0;
}