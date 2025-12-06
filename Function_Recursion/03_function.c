#include <stdio.h>
 
int add(int a , int b); //function declaration(prototype)

int main (){

    int c ;
    c = add(5 ,6);  //Function call 
    printf("sum = %d", c);
    return 0;

}
// Function definition
int add(int a, int b){
    return a+ b;
}