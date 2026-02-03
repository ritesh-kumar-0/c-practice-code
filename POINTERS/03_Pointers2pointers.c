//Write a C program to demonstrate the use of pointers and double pointers to access the value of a variable in different ways.
#include <stdio.h>
int main(){
    int i = 6;
    int *j = &i;
    int **k = &j;

    printf("The value of i is %d\n",i);
    printf("Thr value of i is %d\n",*j);
    printf("Thr value of i is %d\n",*(&i));
    printf("Thr value of i is %d\n",**(&j));
}