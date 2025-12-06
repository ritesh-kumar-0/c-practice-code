#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main(){
    int randomNumber = (rand()%100)+1;
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
      printf("Guessed the number");
      scanf("%d", &guessed_number);
      if(guessed_number > randomNumber){
        printf("Lower number please!\n");
      }
      else if(guessed_number < randomNumber){
        printf("Higher number please!\n");
      }
      else{
        printf("Congrats!!")
      }
      no_of_guesses ++;
      }  
      while (guessed_number != randomNumber);{
        printf("You guessed the number in %d guesses", guessed_number);
      }
      return 0;

    }

    
