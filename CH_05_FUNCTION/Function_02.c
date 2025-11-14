#include<stdio.h>

int add( int a , int b);
int main(){
    int result;
    result = add( 5,3);
    printf("Sum of these number is %d\n", result);
    return 0;
}

int add (int a , int b){
  return a+b;
}
