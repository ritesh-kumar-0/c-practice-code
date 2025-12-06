#include <stdio.h>
int main(){
    int var = 20;
    int *ptr;

    ptr = &var;

    printf("value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value stored in ptr(address of var): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}