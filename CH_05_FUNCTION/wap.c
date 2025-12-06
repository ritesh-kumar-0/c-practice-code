// WAP to check if number is positive.
#include<stdio.h>
int main(){
    int n;
    printf("Enter your number;");
    scanf("%d", &n);
    if(n>0){
        printf("The number is %d is Positive", n);

    }
    else if (n<0){
        printf("The number is %d is negative", n);
    }
    return 0;
}