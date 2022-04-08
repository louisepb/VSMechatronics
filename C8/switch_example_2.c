#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Declare some variables
	int a = 1;
	switch ( a )
	{
	case 1 :
	case 2 : 
	case 3 : 
		// Code to do if a is 1, 2 or 3
	break ; // end of the lines of code to execute

	case 4:
	case 5:
		// Code to do if a is 4 or 5
		break ; // end of the lines of code to execute

	default: // If no case is met (OPTIONAL)
		// Code to do if no case is met
	}
	return 0;
}