#include <stdio.h>

int main() {
    char grade;
    int marks;

    // Input
    printf("Enter your marks: ");
    if (scanf("%d", &marks) != 1 || marks < 0 || marks > 100) {
        printf("Invalid input. Please enter marks between 0 and 100.\n");
        return 1;
    }

    // Grade logic
    if (marks >= 90) {
        grade = 'A';
    }
    else if (marks >= 80) {
        grade = 'B';
    }
    else if (marks >= 70) {
        grade = 'C';
    }
    else if (marks >= 60) {
        grade = 'D';
    }
    else if (marks >= 50) {
        grade = 'E';
    }
    else {
        grade = 'F';
    }

    // Output
    printf("Grade: %c\n", grade);

    return 0;
}