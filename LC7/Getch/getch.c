/*
	Chapter 7: example of getch

   This program reads a single keystroke and displays it
   on the screen

*/

#include <stdio.h>	/* Standard include files */
#include <stdlib.h>
#include <conio.h>

int main(void)
{

    char x;				/* Define a variable of type char */

    printf("Input a character: ");
    x = getch();		/* Use getchar to read a keypress and store the */
                        /* result in 'x' */
    printf("\nDisplaying the char with putchar: ");
    putchar(x);			/* Display the character stored in 'x' on the */
                        /* screen using putchar */


    return 0;

}
