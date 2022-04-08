#include <stdio.h>
#include <stdlib.h>

// Main : Execution starts here...
int main(void)
{
	// Declare variable - pre-populate the array
	char msg[] = {'H','i',' ','W','o','r','l','d','\0'};

	// Output with printf
	printf ("The text is: %s\n", msg);

	puts(msg); // We could also use puts to display the string

	return 0;    // Exit the application
}