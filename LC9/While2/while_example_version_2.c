/*
   This program shows how to use a WHILE statment to keep displaying
   the key pressed on the screen. It terminates when the 'q' key is
   pressed

*/

#include <stdio.h>	/* Standard include files */
#include <stdlib.h>
#include <conio.h>

int main(void)
{

  char x;		/* Define a variable of type char */


  /* We now use the while statement. The 'loop' continues to execute */
  /* until such time as the expression in the brackets becomes false */

  /* we use != , meaning 'Not Equal to' as the test, as we wish the  */
  /* the statements to be executed every time we press a key other   */
  /* than 'q'. Once we press 'q' the code continues on to the next   */
  /* statement */

  /* Note: This time the getch is in the while expression  */


  while ( ( x = getch() ) != 'q' )
  {
    /* Display a message on the screen */
    printf("\nThe key you pressed was the %c key",x );
  }

  return 0;

}
