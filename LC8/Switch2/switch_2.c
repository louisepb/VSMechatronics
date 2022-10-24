/* Chapter 8 */

/* Example of a simple if statements */


#include <stdio.h>	/* Standard include files */
#include <stdlib.h>

#include <conio.h>	/* Required for getch() */

int main( void )
{

    char c;									/* Define an char */
    c = getch();						    /* Get value */

    switch (c)								/* Start of switch */
    {
        case '1':
            printf("Hi");  		/* Case 1 */
            break;

        case '2':
            printf("Bye"); 		/* Case 2 */
            break;

        default :
            printf("Err"); 		/* Default */
            break;
    }

    return 0;

}
