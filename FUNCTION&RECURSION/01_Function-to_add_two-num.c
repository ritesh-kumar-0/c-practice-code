//Write a function to add two numbers and return the result. 
#include <stdio.h>
int add (int , int);

int main(){
    int a ,b, result;
    printf("Enter two numbers:");
    scanf("%d %d", &a ,&b);

    result = add(a,b);
    printf("Sum = %d", result);
    return 0;
}
 int add (int x, int y){
    return x+y;
 }
