
#include<stdio.h>

int main (){
    float marks = 22.00;
    float *ptr = &marks;
    printf("ptr = %u\n", ptr);
    
    ptr ++;

    printf("ptr = %u\n", ptr);

    ptr--;

    printf("ptr= %u\n", ptr);


    return 0;
}