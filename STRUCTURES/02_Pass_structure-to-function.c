//Write a program to pass structure to function (call by value).
#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

void display(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    display(s);   // passing structure to function (call by value)

    return 0;
}
