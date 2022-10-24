/* 
   This makes global variables look like a good idea
   
			THEY ARE NOT - DO NOT USE THEM

*/

#include <stdio.h>
#include <stdlib.h>

int y,k,ans;							/* Define GLOBAL variables */

void NastyGlobalFunction (void )		/* Define function */
{
    ans =  ( y * k );					/* y, k and ans are defined globally above */
    return ;
}

int main( void )
{
   y = 2;					/* Set value of y */
   k = 3;					/* Set value of k */

   NastyGlobalFunction();	/* call the function */

   printf("%d multiplied by %d is %d " ,y ,k ,ans );   /* Display values */
   return 0;
}