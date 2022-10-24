/* Chapter 8 */

/* Example of a simple if statements */


#include <stdio.h>	/* Standard include files */
#include <stdlib.h>
#include <conio.h>


int main( void )
{

    int x = 3;	// Define and intialise variable


    if ( x == 2 )
    {
        printf ("The value of x was 2\n");
        printf ("I will now do something\n");
    }
    else if ( x == 3 )
    {
        printf ("The value of x was 3\n");
        printf ("I will now do something else\n");
    }
    else
    {
        printf ("x is neither 2 or 3; I will do this instead!\n");
    }


    return 0;

}
