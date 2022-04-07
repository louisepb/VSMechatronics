/*
	Chapter 7: example of getchar

   This program reads a single keystroke and displays it
   on the screen

*/

#include <stdio.h>	/* Standard include files */
#include <stdlib.h>


int main(void)
{

    char x;				/* Define a variable of type char */

    x = getchar();		/* Use getchar to read a keypress and store the */
                        /* result in 'x' */

    putchar(x);			/* Display the character stored in 'x' on the */
                        /* screen using putchar */


    return 0;

}
