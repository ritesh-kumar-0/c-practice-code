#include <stdio.h>
int sum(int , int);

int sum(int a , int b){
    return a + b;
}
int main(){
    int x = 2 , y = 4;
    printf("The sum of 2 and 4 is %d",sum(x ,y));
    return 0;
}