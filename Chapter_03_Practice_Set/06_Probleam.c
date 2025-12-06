#include <stdio.h>
int main(){
    int a = 4, b = 6, c = 5, d = 32;
    if(a>b && b>c && a>d){
        printf("The greatest of all is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("The greatest of all is %d", b);
    }
    else if(c>a && c>b && c>d){
        printf("The greatest of all is %d", c);
    }
    else if(d>a && d>c && d>b){
        printf("The greatest of all is %d", d);
    }
    return 0;
}