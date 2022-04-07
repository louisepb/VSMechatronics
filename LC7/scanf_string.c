/* EEEE1001/H61CAE - Chapter 7 */

#include <stdlib.h>
#include <stdio.h>


int main(void)
{

  char MyName[50];              /* Define a string of 50 characters */


  /* Prompt for and read in a string */
  printf("\nPlease enter your name & press return ");
  scanf("%s",MyName);
  
  /* Display fixed text and string on the screen */
  printf("\nHello %s ",MyName);


  return 0;     /* End of the program   */

}
