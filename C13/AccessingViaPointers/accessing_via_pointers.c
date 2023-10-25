#include <stdio.h>
#include <stdlib.h>

int main (void )
{
    // Declare a in integer
    int c,d;

	// Declare an integer pointer
	int *ptrC;

	// Some assgnments
    c = 10; // C now contains the value 10
    ptrC = &c;   // ptrC now 'Points' to c

    // Get the value of c via the pointer and store in d
    d = *ptrC;  // d now contains 10
    printf ("\nThe value in d is %d", d);

    // Change the value of c via the pointer ptrC
    *ptrC = 1;  //c now contains 1
    printf ("\nThe value in c is %d", c);

	return 0;   // exit
}