#include <stdio.h>

int main(){
    int i;
    for( i=1; i<=5; i++){
        if( i==3 ){
            continue; //Skipped the 3 , when i==3.
        }
        printf("%d\n", i);
    }
    return 0;
    
}
