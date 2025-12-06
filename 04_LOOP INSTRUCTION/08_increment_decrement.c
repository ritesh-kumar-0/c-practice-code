#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);    // Print 5
    i = i + 5;
    printf("The value of i is %d\n", i);    //Print 10

    printf("The value of i is %d\n", i++);   // Print 10, i++ Print i first and then increments i.

    printf("The value of i is %d\n", i);     // here print 11
    
    return 0;
}