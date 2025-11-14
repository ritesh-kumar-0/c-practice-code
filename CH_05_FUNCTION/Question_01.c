#include<stdio.h>

void good_morning(){
    printf("Good morning!\n");
}
void good_afternoon(){
    printf("Good afternoon!\n");
}
void good_evening(){
    printf("Good evening!\n");
}
void good_night(){
    printf("Good night!\n");
}
int main(){
    int hour;
    printf("Enter the current hour: ( 0 to 23)");
    scanf("%d", &hour);

    if(hour >= 5 && hour < 12){
        good_morning();
    }
 else if (hour >= 12 && hour < 17){
    good_afternoon();
 }
 else if (hour >= 17 && hour < 21){
    good_evening();
 }
 else if ((hour >=21 && hour <=23) || (hour >= 0 && hour <5)){
    good_night();
 }
 else{
    printf("Invalid time enterd.\n");
 }

 return 0;
}