#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define HOW the function is to be used, code comes later
float CalculateSurfaceAreaOfCylinder ( float R, float L );

// Function to calculate the volume of a cylinder
float CalculateVolumneOfCylinder ( float R, float L )
{
	// Calculate  \& return value
	float Result;
	Result = (M_PI * R * R * L);
	return (Result);
}
int main(void)
{
    // Declare variables
    float r, l, SurfaceArea, Volume;

    // Obtain values
    printf("\nPlease enter the radius");
    scanf("%f", &r);

    printf("\nPlease enter the length");
    scanf("%f", &l);

    // Get and display the volume
    Volume = CalculateVolumneOfCylinder(r, l);
    printf ("\nThe volume is %f", Volume);

    // Get and display the surface area
    SurfaceArea = CalculateSurfaceAreaOfCylinder(r, l);
    printf ("\nThe surface area is %f", SurfaceArea);

    return 0;
}
// Calculate the surface areas of a cylinder
float CalculateSurfaceAreaOfCylinder ( float R, float L )
{
	// Calculate  \& return value
	return (2 * M_PI * R * R ) +  ( 2 * M_PI * R * L);
}