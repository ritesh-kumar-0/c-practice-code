//Write a function to find the square and cube of a number. 
#include<stdio.h>
 int square (int);
 int cube (int);

 int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    printf("Square = %d\n", square(num));
    printf("Cube = %d\n", cube(num));

    return 0;
 }

 int square(int n){
    return n*n;
 }
 int cube(int n){
    return n*n*n;
}
