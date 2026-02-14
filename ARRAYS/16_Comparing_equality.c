// Comparing Equality ( ==, !=)

#include <stdio.h>   // Includes standard input-output library for printf()
int main(){         //execution starts from here

      int a = 10;      // Declare an integer variable 'a'
      int *p = &a;     // Declare pointer 'p' and store the address of variable 'a'
      int *q = &a;    // Declare pointer 'p' and store the address of variable 'a'

      if ( p == q)   // Compare the addresses stored in pointers p and q
      printf ("Both pointer are Equal\n");

      return 0;
}