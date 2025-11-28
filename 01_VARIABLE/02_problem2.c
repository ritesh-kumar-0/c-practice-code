//Write a C program to calculate the volume of a cylinder.
#include <stdio.h>
 
int main(){
    int r = 6;
    int height = 10;
    float volume = 3.14*r*r*height;
    printf("The volume of cylinder with radius %d and height %d is %.2f\n", r, height, volume);
    return 0;

}
