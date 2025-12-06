#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: \n");
    scanf("%c", &ch);

    if (ch >='a' && ch <= 'z'){
        printf("The character '%c' is lowercase. \n", ch);
    }
    else{
        printf("The character '%c' is NOT lowercase.\n ", ch);
    }
    return 0;
}