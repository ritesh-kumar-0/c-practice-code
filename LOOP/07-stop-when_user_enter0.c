//Write a program to repeatedly ask numbers and stop when user enters 0.
#include <stdio.h>

int main() {
    int num;

    while(1) {   // infinite loop
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);

        if(num == 0) {
            printf("Program stopped.\n");
            break;   // exit from loop
        }

        printf("You entered: %d\n", num);
    }

    return 0;
}
