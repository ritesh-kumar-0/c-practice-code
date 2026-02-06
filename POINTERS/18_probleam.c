//Print the value of 'i' from its pointer to pointer.
#include<stdio.h>
int main(){
     int i =5;
     int *p = &i;
     int **prt = &p;

     printf("%d",**prt);

     return 0;
}