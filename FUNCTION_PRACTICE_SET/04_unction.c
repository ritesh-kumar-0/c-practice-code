// Write a function that prints "Namaste" if user is indian & "banjour" if the user is French.
#include <stdio.h>
void namaste();      // Function prototype
void banjour();

int main(){
    printf("Enter I for Indian or F for French:");
    char ch;
    scanf("%c",&ch);
    if (ch=='I'|| ch=='i'){
        namaste();
    }
    else{
        banjour();
    }
    return 0;
}

void namaste(){               // function definition
    printf("Namaste :\n");
}
void banjour(){
    printf("Banjour");
}