/*
   In this example, we do not have a problem as although
   we have a global variable 'i', we do not corrupt it in
   the function

*/

#include <stdlib.h>
#include <stdio.h>

int i;         /* Nasty global variable ! */

/*
       This function returns the sum of the number 1->10
       Note that although we use 'i' it is not defined in
       the function its self.
*/

int SumToTen ( void )
{

	int Result = 0;

	for ( i = 10 ; i >= 0 ; i-- )		// Count down as more effecient
		Result = Result + i;

	return Result;
}

/* This is our main function */

int main(void)
{
	printf ("\nThe sum of the values 0 to 10 is %d ",SumToTen() );
	return 0;
}

