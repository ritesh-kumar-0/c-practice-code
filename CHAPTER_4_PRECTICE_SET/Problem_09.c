
#include <stdio.h>
int main(){
    int num;
    long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
     if (num < 0){
        printf("Sorry!\nFactorial of a negative number is not possible.\n ");

     }
     else{
        for(int i = 1; i <= num; i++){
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num , factorial);
     }
     return 0;
}