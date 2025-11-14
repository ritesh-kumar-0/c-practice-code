#include <stdio.h>

int main() {
    float basic_salary, DA, TA, HRA, total_salary;

    // Input basic salary
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    // Calculate DA, TA, HRA based on salary slabs
    if (basic_salary < 35000) {
        DA = 0.02 * basic_salary;
        TA = 0.03 * basic_salary;
        HRA = 0.04 * basic_salary;
    } else if (basic_salary >= 35000 && basic_salary < 80000) {
        DA = 0.03 * basic_salary;
        TA = 0.04 * basic_salary;
        HRA = 0.07 * basic_salary;
    } else {
        DA = 0.04 * basic_salary;
        TA = 0.04 * basic_salary;
        HRA = 0.09 * basic_salary;
    }

    // Calculate total salary
    total_salary = basic_salary + DA + TA - HRA;

    // Output the result
    printf("Total Salary = %.2f\n", total_salary);

    return 0;
}