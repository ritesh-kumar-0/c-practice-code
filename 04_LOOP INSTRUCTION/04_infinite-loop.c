#include <stdio.h>

int main(){
    int i = 0;
    while( 2 < 10){   //it always true so the output will be the printed endlessly.
        printf("The value of i is %d\n", i);
        i++;     //i++ optional ,  remove to print same value repeatedly.
    }
    return 0;
}
