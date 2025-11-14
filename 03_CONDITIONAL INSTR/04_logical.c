#include <stdio.h>

int main(){
    int a = 6, b = -3;

    // Logical AND
    if (a > 0 && b > 0){
        printf("Both a and b are Positive.\n");
    }
    else{
        printf("At least one is not positive.\n");
    }

    // Logical OR
    if(a > 0 || b > 0){
        printf("At least one is positive.\n");
    }

    //Logical NOT
    if(!(b > 0)){
        printf("b is not positive.");
    }
    return 0;
}