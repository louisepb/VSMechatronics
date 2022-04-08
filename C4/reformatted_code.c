#include <stdio.h>
int main(void) 
{
	// Declare variables and give initial values 
	int revenue = 80;
	int cost = 50;
	int roi;
	
	// Perform calculation
	roi = (100 * (revenue - cost)) / cost;
	
	// Make decision based on value of roi
	if (roi >= 0) 
	{
		printf ("%d\n", roi);
	}

	return 0;	// Exit indicating success
}