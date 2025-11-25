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