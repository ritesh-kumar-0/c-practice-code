//WAP  to store the 10 students records: Name ,Age, Marks. then calculate the average marks of class . use stracture and function
#include <stdio.h>

struct Student {
    char name[30];
    int age;
    float marks;
};

float calculateAverage(struct Student s[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += s[i].marks;
    }
    return sum / n;
}

int main() {
    struct Student st[10];
    int i;
    float avg;

    printf("Enter details of 10 students:\n");

    for(i = 0; i < 10; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", st[i].name);
        printf("Enter Age: ");
        scanf("%d", &st[i].age);
        printf("Enter Marks: ");
        scanf("%f", &st[i].marks);
    }

    avg = calculateAverage(st, 10);

    printf("\nAverage Marks of Class = %.2f\n", avg);

    return 0;
}
