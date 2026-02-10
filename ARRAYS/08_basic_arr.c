
#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter phy : ");
    scanf("%d", &marks[0]);

    printf("Enter math : ");
    scanf("%d", &marks[1]);

    printf("Enter english : ");
    scanf("%d", &marks[2]);

    printf("phy=%d, math=%d, english=%d", marks[0], marks[1], marks[2]  );

    return 0;
}