#include <stdio.h>

int main(){
    int i = 0;
    while(i<5){
        i++;
        
        if(i==2){
            continue; // skip when i==2.
        }
        printf("%d\n", i);
    }
    return 0;
    
}
