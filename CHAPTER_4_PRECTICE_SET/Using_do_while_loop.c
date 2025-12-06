#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    do {
        sum += i;  
        i++;       // Increment i
    } while (i <= 10);

    printf("Sum using do-while loop is : %d\n", sum);

    return 0;
}