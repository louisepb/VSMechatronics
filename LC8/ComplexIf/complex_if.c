/* MMME3085 Chapter 8 */

/* Example of a simple if statements */


#include <stdio.h>	/* Standard include files */
#include <stdlib.h>
#include <conio.h>


int main( void )
{

    int a = 1, b = 6;	// Define and intialise variables


    if ( (a == 1 ) && ( b == 6 ) )
    {
        printf("a is 1 AND b is 6\n" );
    }

	if ( (a == 1 ) || ( b == 99 ) )
    {
        printf("a is 1 OR b is 99\n" );
    }

    if (( b < a ) || ( a == 7 ) )
    {
        printf ("The value of b is less than a  OR a is 7\n");
    }


    return 0;

}
