
/* A very simple program that defines an array of ten integers */
/* And puts a different value into each */

#include <stdio.h>	/* Usual includes */
#include <stdlib.h>

int main( void )
{

  int Values[10];		/* Define an array of 10 integers */
  int j;			/* Define an integer 'j'	  */

  /* Use a loop to put some values into the array, displaying the */
  /* vaules stored on the screen 				  */

  for ( j = 0 ; j < 10 ; j++ )
  {
    Values[j] = j * 2;
    printf("\nThe value in array index %d is %d ",j,Values[j]);
  }


  return 0;	/* End of the program   */

}
