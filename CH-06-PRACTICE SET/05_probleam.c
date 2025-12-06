//Write a function and pass the value by reference. 
#include <stdio.h>

//Function prototype
void increase_value(int *num);

int main(){
    int x;
    printf("Enter a number :");
    scanf("%d", &x);

//Passing address of x (call by reference)
increase_value(&x);
printf("value after function call = %d\n", x);

return 0;

}
// Function definition 
void increase_value(int *num){
// *num gives the value stored at the address
*num = *num + 10;  // change the value by reference
    printf("Value inside function = %d\n", *num);
}
