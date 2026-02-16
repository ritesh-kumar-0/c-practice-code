// Modify Array in Function 

#include <stdio.h>
// function declearation 
void change(int arr[]) {
    arr[0] = 100;   // Modify first element
}

int main() {
    int a[3] = {1, 2, 3};

    change(a);      // Pass array

    printf("%d", a[0]);   // Prints 100

    return 0;
}
