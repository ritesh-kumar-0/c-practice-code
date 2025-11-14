#include <stdio.h>
int main(){
    int num;
    printf("Enter any number(0 to stop): ");  // here '0 to stop' means when user enter 0 the will be end.
    scanf("%d", &num);

    while(num != 0){
        printf("You entered: %d\n", num);
        printf("Entered a number (0 to stop): ");
        scanf("%d", &num);

    }
    printf("Your loop is ended. \n");
    return 0;
}