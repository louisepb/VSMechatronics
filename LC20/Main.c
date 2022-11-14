#include <stdio.h>
#include <stdlib.h>

#include"AreaFunc.h"

/* Show use of function  */
int main (void)
{
	// Declare variables - no need to initialise as values will be read in / calculated
	float rad, len, Area, SurfaceArea;

	// Prompt for and obtain value
	printf ("Please enter the raduis of the circle: ");
	scanf ("%f", &rad);

    printf ("Please enter the length of the cylinder: ");
	scanf ("%f", &len);

	// Calculate the area of the circle
	Area = CalculateAreaOfCircle(rad);

	// And display the answer on the screen
	printf ("The area of a circle of radius %f is %f\n", rad, Area );

	// Calculate the surface area of the cylinder
	SurfaceArea = CalculateSurfaceAreaOfCylinder(rad, len);

	// And display the answer on the screen
	printf ("The surface area of a cylinder of radius %f and length %f is %f\n", rad, len, SurfaceArea );

	// All done
	return 0;
}

