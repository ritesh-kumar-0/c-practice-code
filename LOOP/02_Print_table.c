//WAP to print the table of any number entered by user.

#include <stdio.h>
int main(){
    int num , i;
    printf("Enter a number :");
    scanf("%d",&num);

    printf("Table of %d :\n",num);

    for(int i =1; i <=10; i++){
        printf("%d X %d = %d\n", num ,i, num*i);
    }
    return 0;
}