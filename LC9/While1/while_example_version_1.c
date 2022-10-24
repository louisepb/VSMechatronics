/*
   This program shows how to use a WHILE statment to keep displaying
   the key pressed on the screen. It terminates when the 'q' key is
   pressed


*/

#include <stdio.h>	/* Standard include files */
#include <stdlib.h>
#include <conio.h>


int main( void )
{

  char x;		/* Define a variable of type char */

  printf("Press a key ");
  x = getch();		/* Use getch to read a keypress and store the */
			/* result in 'x'. We do this initially so that */
			/* there is a value in 'x' for the while statment */
			/* to consider the first time round */

  /* We now use the while statement. The 'loop' continues to execute */
  /* until such time as the expression in the brackets becomes false */

  /* we use != , meaning 'Not Equal to' as the test, as we wish the  */
  /* the statements to be executed every time we press a key other   */
  /* than 'q'. Once we press 'q' the code continues on to the next   */
  /* statement */

  while ( x != 'q' )
  {
    /* Display a message on the screen */
    printf("\nThe key you pressed was the %c key\n",x );

    /* Get a new value for X, if we do not the 'expression' will never */
    /* change, and the loop will go for ever */

    printf( "Press another key or q to quit \n");
    x = getch();

  }
  return 0;

}
