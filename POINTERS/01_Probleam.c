#include <stdio.h>
int main(){
    int a = 10;
    int *b = &a;
    printf("Value of a = %d", a);
 printf("\nAddress of a = %p", &a);
 printf("\nValue using pointer = %d", *b);
 printf("\nPointer storing address = %p", b);
 return 0;
 
}