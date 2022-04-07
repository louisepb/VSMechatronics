/* EEEE1001/H61CAE - Chapter 7 */

/* A program to show how to use gets to read a string (that can include spaces) */

#include <stdlib.h>
#include <stdio.h>

int main( void )
{

  char MyName[50];              /* Define a string of 10 characters */


  /* A string */

  printf("\nPlease enter your name & press return ");
  gets(MyName);
  printf("\nHello %s ",MyName);

  return 0;     /* End of the program   */

}
