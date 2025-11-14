#include<stdio.h>

int add(int a , int b);
int subtract(int a , int b);
int multiply (int a , int b );
float divide(int a , int b);

int main(){
  int x , y;
  printf("Enter two number: ");
  scanf(" %d %d" , &x , &y);
  printf("Addition: %d\n", add( x, y));
  printf("Subtraction: %d\n", subtract(x , y));
  printf("Multiplication: %d\n", multiply( x , y));
  printf("Divison: %.2f\n", divide( x , y));

  return 0;
}
int add ( int a , int b){
    return  a + b;
}
int subtract(int a , int b){
    return  a - b;
}
int multiply(int a , int b){
    return  a * b;
}
float divide( int a , int b){
    if ( b==0){
        printf("Error: Division by 0!!\n");
        return 0;
    }
    return (float)a/b;
}
