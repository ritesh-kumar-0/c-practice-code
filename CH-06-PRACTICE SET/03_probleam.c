#include <stdio.h>
int return_5(int *ptr){
    printf("The address of ptr(address) is %p\n ",ptr);
    printf("The value at ptr is %d\n", *ptr);

    return 5;
}

int main(){
    int i = 4;
    int *ptr = &i;
    printf("The address of i is %p\n", &i);

    return_5(ptr);
    return 0;
}