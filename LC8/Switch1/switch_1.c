/* MMME3085 Chapter 8 */

/* Example of a simple if statements */


#include <stdio.h>	/* Standard include files */
#include <stdlib.h>

int main( void )
{

    int a;									/* Define an int */
    scanf ("%d",&a);						/* Get value */
    switch (a)								/* Start of switch */
    {
        case 1:
            printf("Hi");  		/* Case 1 */
            break;

        case 2:
            printf("Bye"); 		/* Case 2 */
            break;

        default :
            printf("Err"); 		/* Default */
            break;
    }

    return 0;

}