//Write a program to check whether a person is eligible to vote or not (age ≥ 18).

#include <stdio.h>

int main() {
    int age;
    char citizen;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen of this country? (Y/N): ");
    scanf(" %c", &citizen);

    if(age >= 18 && (citizen == 'Y' || citizen == 'y')) {
        printf("You are eligible to vote!\n");
    }
    else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
