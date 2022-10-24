/* MMME3085 Chapter 8 */

/* Incorrect use of a single equals sign in an if statement */


#include <stdio.h>	/* Standard include files */
#include <stdlib.h>
#include <conio.h>


int main( void )
{

    int c = 6;	// Define variable as initialise with value

	printf ("\nThe current value in c is %d\n",c);		// Display value in c

	// This is correct
    if ( c == 1 )
    {
        printf("\nThe value of c is 1\n" );
    }

	printf ("\nThe current value in c is %d\n",c);		// Display value in c

	// This is WRONG - it is setting c to one, this value is then tested
	// and, as non-zero, is considered to be TRUE
    if ( c = 1 )
    {
        printf("\nThe value of c is 1\n" );
    }

	printf ("\nThe current value in c is %d\n",c);		// Display value in c

    return 0;

}
