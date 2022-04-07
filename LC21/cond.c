#include <stdio.h>
#include <stdlib.h>

/* We define one thing - we need not give it a value, but we can */
#define BUILD1
 
int main(void)
{

 
 printf ("\nThis code is common to all ");

/* We check for the existance ob 'BUILD1' and act accordingly */

#ifdef BUILD1  

 printf ("\nWe had BUILD1 defined ");

#else

 printf ("\nBUILD1 was not defined ");

#endif

/* Can can see if somthing was not defined too */

#ifndef BUILD2

  printf ("\nBUILD2 was *NOT* defined ");

#endif

  printf ("\n\n");

  return 0;

}
