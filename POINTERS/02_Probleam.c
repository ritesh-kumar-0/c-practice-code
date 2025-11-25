#include <stdio.h>
int main(){
    char i = 'A';
    char *j = &i;

    float k = 5.23;
    float *k1 = &k;
    printf("The adress of i is %p\n",i);
    printf("The adress of i is %p\n",j);
    printf("The adress of i is %p\n",&k);

    printf("The value of adress j is %d\n", *(&i));


}