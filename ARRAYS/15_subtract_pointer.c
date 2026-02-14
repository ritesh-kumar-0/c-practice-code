// We can also subtract one pointer from another.

#include <stdio.h>
int main(){
    int age = 22;   // First integer variable
    int _age = 23;  // Second integer variable

    int *ptr = &age;  // ptr stores address of age
    int*_ptr = &_age;  // _ptr stores address of _age

    printf("Difference = %u\n", ptr - _ptr);  // Subtracting two pointers
    _ptr = &age;    // Now both pointers point to same variable (age)
    printf("Difference = %u\n", ptr == _ptr);   // ptr == _ptr checks whether both pointers store same address

    return 0;
}