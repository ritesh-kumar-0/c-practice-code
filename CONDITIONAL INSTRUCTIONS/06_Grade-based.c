/*Write a program to print grades of a student based on the marks they have obtained provided as input. The student is grade A if marks 
are greater than or equal to 90,B if marks are greater than 70, C if greater than or equal to 40, else F.*/

#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 90) {
        printf("Grade: A\n");
    }
    else if(marks > 70) {
        printf("Grade: B\n");
    }
    else if(marks >= 40) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}

