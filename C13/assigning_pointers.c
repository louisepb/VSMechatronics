#include <stdio.h>
#include <stdlib.h>

int main (void )
{
    // Integer variables
    int a, ValueB, d;

	// integer pointers
	int *ptrA=&a, *B=&ValueB, *Data=&d;

	// Float variables
	float f,y,z;

	// Float pointers
	float *pf=&f , *q=&y, *Zvalue=&z;

	// We could also do this on separate lines e.g.
	int SomeData;
	int *Another;
	Another = &SomeData;

	return 0;
}