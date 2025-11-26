/* Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main().*/
#include <stdio.h>

void sum(int a, int b, int *s) {
    *s = a + b;
}

void average(int a, int b, float *avg) {
    *avg = (a + b) / 2.0;
}

int main() {
    int x = 4, y = 6;
    int s;
    float avg;

    sum(x, y, &s);
    average(x, y, &avg);

    printf("Sum = %d\n", s);
    printf("Average = %.2f\n", avg);

    return 0;
}
