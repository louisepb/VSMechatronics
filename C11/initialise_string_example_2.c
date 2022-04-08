#include <stdio.h>
#include <stdlib.h>

int main(void) // Main : Execution starts here...
{
	// Declare variable - pre-populate the array
	char msg[] = "Hello World";

	// Output with printf
	printf ("The text is: %s\n", msg);

	puts(msg); // We could also use puts to display the string

	return 0;      // Exit the application
}