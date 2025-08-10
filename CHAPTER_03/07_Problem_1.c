#include <stdio.h>

int main() {
    int age;

    // Prompt the user for input
    printf("Enter your age: ");
    scanf("%d", &age);  // Read integer input from user

    // Decision logic
    if (age > 45) {
        printf("You can drive and you are a senior citizen\n");
    }
    else if (age > 18) {
        printf("Yes, You can drive\n");
    }
    else {
        printf("Sorry, You cannot drive\n");
    }

    return 0;
}
