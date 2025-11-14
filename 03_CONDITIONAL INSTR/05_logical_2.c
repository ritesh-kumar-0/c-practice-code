#include <stdio.h>

int main(){
    int a = 1;
    int b = 0;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a and b is %d\n", a || b);
    printf("The value of not(0) is %d\n", !a);
    return 0;
}