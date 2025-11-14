#include<stdio.h>

//Function declaration
float average( int a , int b , int c );
int main(){
    int x , y , z;
    float result;
    // Take input from users
    printf("Enter three numbers:");
    scanf("%d  %d  %d", &x , &y , &z);

  //  Function call
  result = average(x , y , z);
  printf(" Average of these three number are %.2f\n", result);
  return 0;
}
// Function definition 
float average (int a , int b , int c){
    return ( a + b + c)/3.0;
}
