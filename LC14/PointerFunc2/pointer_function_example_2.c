#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

// As we are using the function BEFORE it is actually written we need to provide the
// prototype so that the compiler can verify we are calling it correctly

void CalculateVolumeAndSA ( double Radius, double Length, double *Volume, double *SurfaceArea);  // note the �*�

// This is the main code for our application

int main()
{
    double radius = 3.4, length = 7.3, volume, SurfaceArea;

    CalculateVolumeAndSA(radius, length, &volume, &SurfaceArea);

	printf("The volume is %f \n", volume);
	printf( "The surface area is %f\n", SurfaceArea);
    return 0;

}


// And here is our function

void CalculateVolumeAndSA ( double Radius, double Length, double *Volume, double *SurfaceArea)  // note the �*�
{
    *Volume = M_PI * Radius * Radius * Length;
    *SurfaceArea = ( 2 * M_PI * Radius * Radius * Length ) +( 2 * M_PI * Radius * Length );
}
