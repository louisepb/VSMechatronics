/*  Example Program */

/*
   This program shows how to write a simple loop that counts up
   from zero to 9.

   A second loop then counts from 10 down to 1

   Remember

	j++	means j = j + 1
	j--	means j = j - 1

*/

#include <stdio.h>	/* Standard include files */
#include <stdlib.h>


int main(void)
{

  char j;		/* Define a variable of type integer */


  /* The count up loop */
  printf("\nCounting Up ... ");

  for ( j = 0 ; j < 10 ; j++ )
    printf("\nThe value of j is %d",j );

  printf("\nThe value of j after increment loop is %d",j);

  /* The count down loop */

  printf ("\nCounting Down .. ");
  for ( j = 10 ; j > 0 ; j-- )
    printf("\nThe value of j is %d",j );

  printf("\nThe value of j after decrement loop is %d",j);

  return 0;

}
