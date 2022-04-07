/* Chapter 8 */

/* Example of a simple if statements */


#include <stdio.h>	/* Standard include files */
#include <stdlib.h>
#include <conio.h>


int main( void )
{

    int a = 1, b = 6;	// Define and intialise variables


    if ( a == 1 )
    {
        printf("\nThe value of a is 1\n" );
    }

    if ( a < b )
    {
        printf ("The value of a is less than b\n");
    }

    if ( b < a )
    {
        printf ("The value of b is less than a\n");
    }

    return 0;

}
