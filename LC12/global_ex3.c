/* 

	This time we have a real problem. We are using the variable 
	'i' in the main loop to count and again in the function. 

	Thus the function will change the value seen by the 'main'
	routine - and will cause *Serious* problems

*/

#include <stdlib.h>
#include <stdio.h>

int i; /* Again, the nasty global variable */

/* 

       This function returns the sum of the number 0 -> i, but
       summing from the limit back to zero ( to prove a point ! )

       The problem this will cause is that at the end of the routine
       the value of 'i' will always be '1' which will stop the loop    
       in 'main' working !

*/


int SumToValue ( int Limit )
{

	int Result = 0;
	
       printf("\nIn function ");

	for ( i = Limit ; i > 0 ; i-- )
		Result = Result + i;

	return Result;
}

/* 
   This is our main function - this time we are aiming to print out
   at table of the sums of values from 1 to 10 
*/


int main( void )
{

	for ( i =  0 ; i < 10 ; i++ )
	{
		printf ("\nThe sum of the values 0 to %d is %d ",i,SumToValue(i));
	}

	return 0;
}

