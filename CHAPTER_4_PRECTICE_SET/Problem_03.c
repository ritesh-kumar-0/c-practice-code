//QUESTION:
//Write a program to sum first ten natural number using while loop.

#include <stdio.h>

int main(){
    int i = 1;
   int sum = 0;

   while(i <= 10){
    sum += i;
    i++;
   }
    printf("The sum of the first 10 natural number is %d\n", sum);
    return 0;

}