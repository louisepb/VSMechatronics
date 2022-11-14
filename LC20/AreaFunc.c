#include <stdio.h>
#include <math.h>


float CalculateAreaOfCircle ( float radius )
{
	float area;
	area = M_PI * radius * radius ;
	return (area) ;
}

float CalculateSurfaceAreaOfCylinder ( float radius, float length )
{
	float area;
	area = 2.0 * ( M_PI * radius * radius ) + ( M_PI * 2.0 * radius * length );       // two ends + side
	return (area) ;
}