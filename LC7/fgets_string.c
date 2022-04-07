/* EEEE1001/H61CAE*/

/* A program to show how to use fgets to safely read in a string */

#include <stdlib.h>
#include <stdio.h>

int main()
{

  char MyName[50];              /* Define a string of 10 characters */


  /* A string */

  printf("\nPlease enter your name & press return ");
  fgets(MyName, 80, stdin);
  printf("\nHello %s ",MyName);

  return 0;     /* End of the program   */

}
