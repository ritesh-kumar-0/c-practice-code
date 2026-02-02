//Write a program to find the length of string using pointer
#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // to read string with spaces

    ptr = str;  // pointer points to the first character of string

    while (*ptr != '\0') {
        count++;
        ptr++;   // moving pointer to next character
    }

    // subtract 1 to ignore newline added by fgets
    printf("Length of string = %d\n", count - 1);

    return 0;
}
