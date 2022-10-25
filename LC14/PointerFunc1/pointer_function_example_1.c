#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// As we are using the function BEFORE it is actually written we need to provide the
// prototype so that the compiler can verify we are calling it correctly

void CalculateArea ( double Radius, double *pArea);  // note the ‘*’

// This is the main code for our application

int main()
{
    double radius, area;
    radius = 1.0;    
    CalculateArea (radius, &area);    
	
	printf ("The area of circle of radius %f is %f\n", radius, area);
    return 0;
    
}


// And here is our function

// Note: Pi is written out simply to match the notes, M_PI could also be used

void CalculateArea ( double Radius, double *pArea )
{
    *pArea = 3.14159265 * Radius * Radius;
    return;
}
